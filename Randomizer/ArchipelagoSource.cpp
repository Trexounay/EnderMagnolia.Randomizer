#include "ArchipelagoSource.h"
#include "GUI.h"
#include "Logger.h"
#include "Configuration.h"
#include "CustomItemRegistry.h"
#include "GameManager.h"
#include "ItemReplacer.h"
#include "apuuid.hpp"
#include <fstream>

ArchipelagoSource& ArchipelagoSource::Instance()
{
	static ArchipelagoSource instance;
	return instance;
}

void ArchipelagoSource::SetError(const std::string& msg, bool fatal)
{
	errorMsg = msg;
	if (fatal)
	{
		state = APState::Error;
		abort = true;
	}
	else
	{
		state = APState::Reconnecting;
	}
}

void ArchipelagoSource::Disconnect()
{
	ap.reset();
	state = APState::Disconnected;
	options.clear();
	Logger::Log("AP", "disconnected");
	Configuration::Instance().UseOffline();
}

void ArchipelagoSource::Connect(const std::string& host, const std::string& slot, const std::string& pass)
{
	ap.reset();
	abort = false;
	errorMsg.clear();
	state = APState::Connecting;

	connSlot = slot;
	connPass = pass;

	LoadIdTable();

	std::string uri = host.empty() ? APClient::DEFAULT_URI : host;
	auto uuid = ap_get_uuid("EnderMagnolia.uuid");

	Logger::Log("AP", "connecting", uri, "slot", slot);
	ap.reset(new APClient(uuid, "Ender Magnolia", uri));

	ap->set_socket_error_handler([this](const std::string& e) { OnSocketError(e); });
	ap->set_socket_disconnected_handler([this]() { OnSocketDisconnected(); });
	ap->set_room_info_handler([this]() { OnRoomInfo(); });
	ap->set_slot_connected_handler([this](const nlohmann::json& j) { OnSlotConnected(j); });
	ap->set_slot_disconnected_handler([this]() { OnSlotDisconnected(); });
	ap->set_slot_refused_handler([this](const std::list<std::string>& e) { OnSlotRefused(e); });
	ap->set_items_received_handler([this](const std::list<APClient::NetworkItem>& i) { OnItemsReceived(i); });
	ap->set_location_info_handler([this](const std::list<APClient::NetworkItem>& i) { OnLocationInfo(i); });
	ap->set_retrieved_handler([this](const std::map<std::string, nlohmann::json>& k) { OnRetrieved(k); });
	ap->set_print_handler([this](const std::string& m) { OnPrint(m); });
	ap->set_print_json_handler([this](const std::list<APClient::TextNode>& msg) { OnPrintJson(msg); });
	ap->set_bounced_handler([this](const nlohmann::json& j) { OnBounced(j); });
}

std::string ArchipelagoSource::IndexKey() const
{
	return std::to_string(ap->get_team_number()) + "_" + std::to_string(ap->get_player_number())
		+ "_EM_ItemIndex_slot" + std::to_string(GameManager::Instance().CurrentSaveSlot());
}

void ArchipelagoSource::OnSocketError(const std::string& error)
{
	SetError(error, false);
	Logger::Log(LogLevel::Error, "AP", "socket error (will retry)", error);
}

void ArchipelagoSource::OnSocketDisconnected()
{
	if (state != APState::Error)
		state = APState::Reconnecting;
	Logger::Log("AP", "socket disconnected (will retry)");
}

void ArchipelagoSource::OnRoomInfo()
{
	seedName = ap->get_seed();
	Logger::Log("AP", "room info, connecting slot, seed", seedName);
	std::list<std::string> tags;
	if (deathLinkEnabled)
		tags.push_back("DeathLink");
	ap->ConnectSlot(connSlot, connPass, ItemsHandling::RemoteItems | ItemsHandling::StartingInventory, tags);
}

void ArchipelagoSource::OnSlotConnected(const nlohmann::json& json)
{
	state = APState::Connected;
	receivedIndex = 0;
	indexLoaded = false;
	allItems.clear();
	receivedItems.clear();
	Logger::Log("AP", "slot connected");
	ReadSlotData(json);
	scouts.clear();
	ScoutAll();
	Configuration::Instance().UseArchipelago();
	if (GameManager::Instance().CurrentSaveSlot() >= 0 && !GameManager::Instance().IsLoading())
		LoadIndex();
}

void ArchipelagoSource::ReadSlotData(const nlohmann::json& json)
{
	options.clear();
	if (!json.is_object())
		return;

	for (auto it = json.begin(); it != json.end(); ++it)
	{
		if (it.value().is_number_integer())
			options[it.key()] = it.value().get<int>();
		else if (it.value().is_boolean())
			options[it.key()] = it.value().get<bool>() ? 1 : 0;
	}

	for (const auto& kv : options)
		Logger::Log("AP", "option", kv.first, "=", kv.second);
}

std::optional<std::string> ArchipelagoSource::Seed() const
{
	if (seedName.empty())
		return std::nullopt;
	return seedName;
}

int ArchipelagoSource::Option(const std::string& name, int fallback) const
{
	if (!ap || state != APState::Connected)
		return fallback;

	auto it = options.find(name);
	return it == options.end() ? fallback : it->second;
}

void ArchipelagoSource::OnSlotDisconnected()
{
	state = APState::Disconnected;
	Logger::Log("AP", "slot disconnected");
}

void ArchipelagoSource::OnSlotRefused(const std::list<std::string>& errors)
{
	std::string msg;
	for (const auto& e : errors)
		msg += (msg.empty() ? "" : ", ") + e;
	SetError(msg.empty() ? "slot refused" : msg);
	Logger::Log(LogLevel::Error, "AP", "slot refused", msg);
}

void ArchipelagoSource::OnItemsReceived(const std::list<APClient::NetworkItem>& items)
{
	Logger::Log("AP", "items received", items.size());
	for (const auto& item : items)
	{
		allItems.push_back(item);
		if (indexLoaded)
			QueueItem(item);
	}
}

void ArchipelagoSource::OnRetrieved(const std::map<std::string, nlohmann::json>& keys)
{
	auto it = keys.find(IndexKey());
	if (it == keys.end())
		return;

	if (it->second.is_number_integer())
		receivedIndex = it->second.get<int>();
	indexLoaded = true;
	Logger::Log("AP", "item index loaded", receivedIndex);
	RequeueItems();
}

void ArchipelagoSource::RequeueItems()
{
	receivedItems.clear();
	for (const auto& item : allItems)
		QueueItem(item);
}

void ArchipelagoSource::QueueItem(const APClient::NetworkItem& item)
{
	if (item.index < receivedIndex)
		return;

	std::string name = ap->get_item_name(item.item, ap->get_game());
	std::string sender = ap->get_player_alias(item.player);
	receivedItems.push_back({ item.item, item.index, "Received " + name + " from " + sender });
}

void ArchipelagoSource::DeliverReceivedItems()
{
	if (GameManager::Instance().IsLoading())
		return;

	while (!receivedItems.empty())
	{
		const ReceivedItem& item = receivedItems.front();

		auto nameIt = idToName.find(item.item);
		if (nameIt == idToName.end())
		{
			Logger::Log(LogLevel::Warning, "AP", "received item id not in table", item.item);
			receivedItems.erase(receivedItems.begin());
			continue;
		}

		if (!GameManager::Instance().GrantItem(nameIt->second, ItemReplacer::CurrencyCount(nameIt->second)))
			return;

		GUI::Instance().Notify(item.display);
		receivedIndex = item.index + 1;
		receivedItems.erase(receivedItems.begin());
	}
}

void ArchipelagoSource::CommitIndex()
{
	if (!ap || state != APState::Connected)
		return;

	ap->Set(IndexKey(), 0, false, { { "replace", receivedIndex } });
}

void ArchipelagoSource::OnPrint(const std::string& msg)
{
	Logger::Log("AP", msg);
	GUI::Instance().Notify(msg);
}

void ArchipelagoSource::OnPrintJson(const std::list<APClient::TextNode>& msg)
{
	std::string text = ap->render_json(msg);
	Logger::Log("AP", text);
}

void ArchipelagoSource::SetDeathLink(bool enabled)
{
	deathLinkEnabled = enabled;
}

void ArchipelagoSource::OnGoalReached()
{
	if (!ap || state != APState::Connected)
		return;
	ap->StatusUpdate(APClient::ClientStatus::GOAL);
	Logger::Log("AP", "goal reached");
}

void ArchipelagoSource::OnPlayerDeath()
{
	if (!ap || !deathLinkEnabled)
		return;

	if (processingRemoteDeath)
	{
		processingRemoteDeath = false;
		return;
	}

	nlohmann::json data;
	data["time"] = ap->get_server_time();
	data["source"] = connSlot;
	ap->Bounce(data, {}, {}, { "DeathLink" });
	Logger::Log("AP", "deathlink sent");
}

void ArchipelagoSource::OnBounced(const nlohmann::json& json)
{
	if (!deathLinkEnabled)
		return;
	if (!json.contains("tags"))
		return;
	bool isDeathLink = false;
	for (const auto& tag : json["tags"])
		if (tag.get<std::string>() == "DeathLink")
			isDeathLink = true;
	if (!isDeathLink)
		return;

	const auto& data = json["data"];
	if (data.contains("source") && data["source"].get<std::string>() == connSlot)
		return;

	double time = data.contains("time") ? data["time"].get<double>() : 0;
	if (time < deathLinkEpoch)
		return;

	Logger::Log("AP", "deathlink received");
	pendingRemoteDeath = true;
}

void ArchipelagoSource::DeliverRemoteDeath()
{
	if (!pendingRemoteDeath)
		return;

	processingRemoteDeath = true;
	if (GameManager::Instance().KillPlayer())
		pendingRemoteDeath = false;
	else
		processingRemoteDeath = false;
}

void ArchipelagoSource::LoadIdTable()
{
	nameToId.clear();
	idToName.clear();
	auto tablePath = Configuration::Instance().DataPath("EnderMagnolia.Randomizer.AP.txt");
	std::ifstream file(tablePath);
	if (!file.is_open())
	{
		Logger::Log(LogLevel::Error, "AP", "not found", tablePath);
		return;
	}
	std::string line;
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		size_t sep = line.find(':');
		if (sep == std::string::npos)
			continue;
		int64_t id = std::stoll(line.substr(0, sep));
		std::string name = line.substr(sep + 1);
		if (!name.empty() && name.back() == '\r')
			name.pop_back();
		nameToId[name] = id;
		idToName[id] = name;
	}
	Logger::Log("AP", "id table loaded", nameToId.size());
}

void ArchipelagoSource::ScoutAll()
{
	std::list<int64_t> ids;
	for (int64_t id : ap->get_missing_locations())
		ids.push_back(id);
	for (int64_t id : ap->get_checked_locations())
		ids.push_back(id);
	Logger::Log("AP", "scouting", ids.size(), "locations");
	ap->LocationScouts(ids, 0);
}

void ArchipelagoSource::OnLocationInfo(const std::list<APClient::NetworkItem>& items)
{
	Logger::Log("AP", "location info", items.size());
	int me = ap->get_player_number();
	for (const auto& item : items)
	{
		auto it = idToName.find(item.location);
		if (it == idToName.end())
			continue;

		ScoutedLocation s;
		s.itemId = item.item;
		s.player = item.player;
		s.mine = (item.player == me);
		s.game = ap->get_player_game(item.player);
		s.itemName = ap->get_item_name(item.item, s.game);
		s.playerAlias = ap->get_player_alias(item.player);
		scouts[it->second] = s;
	}
}

void ArchipelagoSource::Tick()
{
	if (ap)
		ap->poll();

	if (abort)
	{
		abort = false;
		ap.reset();
		Logger::Log("AP", "aborted after error");
	}

	DeliverReceivedItems();
	DeliverRemoteDeath();
}

std::optional<std::string> ArchipelagoSource::ScoutLocation(const std::string& location)
{
	auto it = location_to_item.find(location);
	if (it == location_to_item.end())
		return std::nullopt;
	return it->second;
}

void ArchipelagoSource::ReportCheck(const std::string& location)
{
	auto it = nameToId.find(location);
	if (it == nameToId.end())
	{
		Logger::Log(LogLevel::Warning, "AP", "check: unknown location", location);
		return;
	}
	Logger::Log("AP", "check", location, it->second);
	ap->LocationChecks({ it->second });
}

void ArchipelagoSource::OnShopPurchase(const SDK::FDataTableRowHandle& boughtItem)
{
	if (!ap)
		return;

	const auto& checked = ap->get_checked_locations();
	for (const auto& location : ItemReplacer::ShopLocationsFor(boughtItem))
	{
		auto id = nameToId.find(location);
		if (id == nameToId.end() || checked.count(id->second))
			continue;

		ReportCheck(location);
		return;
	}

	Logger::Log(LogLevel::Warning, "AP", "shop purchase, no unchecked slot for",
		CustomItemRegistry::ToItemName(boughtItem));
}

void ArchipelagoSource::LoadIndex()
{
	receivedIndex = 0;
	indexLoaded = false;
	ap->SetNotify({ IndexKey() });
	ap->Get({ IndexKey() });
}

void ArchipelagoSource::OnGameStart(bool isNewGame)
{
	PopulateDataTable();
	if (ap)
		deathLinkEpoch = ap->get_server_time();
	pendingRemoteDeath = false;
	processingRemoteDeath = false;

	if (!ap)
		return;

	if (isNewGame)
	{
		receivedIndex = 0;
		indexLoaded = true;
		ap->Set(IndexKey(), 0, false, { { "replace", 0 } });
		Logger::Log("AP", "new game, index reset for", IndexKey());
		RequeueItems();
	}
	else
	{
		LoadIndex();
	}
}

void ArchipelagoSource::OnGameSaved()
{
	CommitIndex();
}

void ArchipelagoSource::PopulateDataTable()
{
	location_to_item.clear();
	apItemIndex = 0;

	for (auto& kv : scouts)
	{
		const std::string& location = kv.first;
		const ScoutedLocation& scout = kv.second;

		if (scout.mine)
		{
			auto nameIt = idToName.find(scout.itemId);
			if (nameIt == idToName.end())
			{
				Logger::Log(LogLevel::Warning, "AP", "native item id not in table", scout.itemId, "at", location);
				continue;
			}
			location_to_item[location] = nameIt->second;
		}
		else
		{
			RandomizerItemDef def;
			def.id = "custom.ap_" + std::to_string(apItemIndex++);
			def.name = scout.itemName;
			def.description = "Item for " + scout.playerAlias;
			def.flavorText = "This is an Archipelago item for " + scout.game;
			CustomItemRegistry::Instance().CreateItem(def);
			location_to_item[location] = def.id;
		}
	}
	Logger::Log(LogLevel::Debug, this, "AP populate", location_to_item.size(), "locations");
}

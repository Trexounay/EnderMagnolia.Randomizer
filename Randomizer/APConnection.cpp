#include "APConnection.h"
#include "GUI.h"
#include "Logger.h"
#include "apuuid.hpp"

APConnection& APConnection::Instance()
{
	static APConnection instance;
	return instance;
}

void APConnection::SetError(const std::string& msg)
{
	errorMsg = msg;
	state = APState::Error;
	abort = true;
}

void APConnection::Disconnect()
{
	ap.reset();
	state = APState::Disconnected;
	Logger::Log("AP", "disconnected");
}

void APConnection::Connect(const std::string& host, const std::string& slot, const std::string& pass)
{
	ap.reset();
	abort = false;
	errorMsg.clear();
	state = APState::Connecting;

	connSlot = slot;
	connPass = pass;

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
	ap->set_retrieved_handler([this](const std::map<std::string, nlohmann::json>& k) { OnRetrieved(k); });
	ap->set_print_handler([this](const std::string& m) { OnPrint(m); });
}

std::string APConnection::IndexKey() const
{
	return std::to_string(ap->get_team_number()) + "_" + std::to_string(ap->get_player_number()) + "_EM_ItemIndex";
}

void APConnection::OnSocketError(const std::string& error)
{
	SetError(error);
	Logger::Log(LogLevel::Error, "AP", "socket error", error);
}

void APConnection::OnSocketDisconnected()
{
	if (state != APState::Error)
		state = APState::Disconnected;
	Logger::Log("AP", "socket disconnected");
}

void APConnection::OnRoomInfo()
{
	Logger::Log("AP", "room info, connecting slot");
	ap->ConnectSlot(connSlot, connPass, 0b101);
}

void APConnection::OnSlotConnected(const nlohmann::json& json)
{
	state = APState::Connected;
	receivedIndex = 0;
	indexLoaded = false;
	pendingItems.clear();
	receivedItems.clear();
	Logger::Log("AP", "slot connected");
	ap->SetNotify({ IndexKey() });
	ap->Get({ IndexKey() });
}

void APConnection::OnSlotDisconnected()
{
	state = APState::Disconnected;
	Logger::Log("AP", "slot disconnected");
}

void APConnection::OnSlotRefused(const std::list<std::string>& errors)
{
	std::string msg;
	for (const auto& e : errors)
		msg += (msg.empty() ? "" : ", ") + e;
	SetError(msg.empty() ? "slot refused" : msg);
	Logger::Log(LogLevel::Error, "AP", "slot refused", msg);
}

void APConnection::OnItemsReceived(const std::list<APClient::NetworkItem>& items)
{
	Logger::Log("AP", "items received", items.size());
	for (const auto& item : items)
	{
		if (indexLoaded)
			QueueItem(item);
		else
			pendingItems.push_back(item);
	}
}

void APConnection::OnRetrieved(const std::map<std::string, nlohmann::json>& keys)
{
	auto it = keys.find(IndexKey());
	if (it == keys.end())
		return;

	if (it->second.is_number_integer())
		receivedIndex = it->second.get<int>();
	indexLoaded = true;
	Logger::Log("AP", "item index loaded", receivedIndex);

	for (const auto& item : pendingItems)
		QueueItem(item);
	pendingItems.clear();
}

void APConnection::QueueItem(const APClient::NetworkItem& item)
{
	if (item.index < receivedIndex)
		return;

	std::string name = ap->get_item_name(item.item, ap->get_game());
	std::string sender = ap->get_player_alias(item.player);
	receivedItems.push_back({ item.item, item.index, "Received " + name + " from " + sender });
}

std::vector<ReceivedItem> APConnection::DrainReceivedItems()
{
	std::vector<ReceivedItem> out;
	out.swap(receivedItems);
	return out;
}

void APConnection::ConfirmApplied(int index)
{
	if (!ap || index < receivedIndex)
		return;

	receivedIndex = index + 1;
	ap->Set(IndexKey(), 0, false, { { "replace", receivedIndex } });
}

void APConnection::OnPrint(const std::string& msg)
{
	Logger::Log("AP", msg);
	GUI::Instance().Notify(msg);
}

void APConnection::CheckLocation(const std::string& location)
{
	Logger::Log("AP", "check", location);
}

void APConnection::Tick()
{
	if (ap)
		ap->poll();

	if (abort)
	{
		abort = false;
		ap.reset();
		Logger::Log("AP", "aborted after error");
	}
}

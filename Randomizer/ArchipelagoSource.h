#pragma once

#include "IItemSource.h"
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <unordered_map>
#include <optional>
#include "apclient.hpp"

enum class APState {
	Disconnected,
	Connecting,
	Reconnecting,
	Connected,
	Error
};

enum ItemsHandling {
	RemoteItems = 0b001,
	OwnItems = 0b010,
	StartingInventory = 0b100,
};

struct ReceivedItem {
	int64_t item;
	int index;
	std::string display;
};

struct ScoutedLocation {
	int64_t itemId;
	int player;
	bool mine;
	std::string itemName;
	std::string playerAlias;
	std::string game;
};

class ArchipelagoSource : public IItemSource {
public:
	static ArchipelagoSource& Instance();

	void Connect(const std::string& host, const std::string& slot, const std::string& pass);
	void Disconnect();

	void Tick();

	APState GetState() const { return state; }
	const std::string& GetError() const { return errorMsg; }

	int Option(const std::string& name, int fallback = 0) const;
	bool OptionIs(const std::string& name, int value) const { return Option(name) == value; }

	void SetDeathLink(bool enabled);
	void OnPlayerDeath();
	void OnGoalReached();
	void OnShopPurchase(const std::string& itemName);

	std::optional<std::string> ScoutLocation(const std::string& location) override;
	void ReportCheck(const std::string& location) override;
	void OnGameStart(bool isNewGame) override;
	void OnGameSaved() override;

private:
	ArchipelagoSource() = default;
	~ArchipelagoSource() = default;
	ArchipelagoSource(const ArchipelagoSource&) = delete;
	ArchipelagoSource& operator=(const ArchipelagoSource&) = delete;

	void SetError(const std::string& msg, bool fatal = true);

	void OnSocketError(const std::string& error);
	void OnSocketDisconnected();
	void OnRoomInfo();
	void OnSlotConnected(const nlohmann::json& json);
	void ReadSlotData(const nlohmann::json& json);
	void OnSlotDisconnected();
	void OnSlotRefused(const std::list<std::string>& errors);
	void OnItemsReceived(const std::list<APClient::NetworkItem>& items);
	void OnLocationInfo(const std::list<APClient::NetworkItem>& items);
	void OnRetrieved(const std::map<std::string, nlohmann::json>& keys);
	void OnPrint(const std::string& msg);
	void OnPrintJson(const std::list<APClient::TextNode>& msg);
	void OnBounced(const nlohmann::json& json);
	void DeliverRemoteDeath();

	std::string IndexKey() const;
	void LoadIndex();
	void RequeueItems();
	void QueueItem(const APClient::NetworkItem& item);
	void DeliverReceivedItems();
	void CommitIndex();
	void LoadIdTable();
	void ScoutAll();
	void PopulateDataTable();

	std::unique_ptr<APClient> ap;
	APState state = APState::Disconnected;
	std::string errorMsg;
	bool abort = false;

	std::string connSlot;
	std::string connPass;

	int receivedIndex = 0;
	bool indexLoaded = false;
	std::vector<APClient::NetworkItem> allItems;
	std::vector<ReceivedItem> receivedItems;

	std::unordered_map<std::string, int> options;
	std::unordered_map<std::string, int64_t> nameToId;
	std::unordered_map<int64_t, std::string> idToName;
	std::unordered_map<std::string, ScoutedLocation> scouts;

	int apItemIndex = 0;
	std::unordered_map<std::string, std::string> location_to_item;

	bool deathLinkEnabled = false;
	double deathLinkEpoch = 0;
	bool pendingRemoteDeath = false;
	bool processingRemoteDeath = false;
};

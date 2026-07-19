#pragma once

#include <string>
#include <memory>
#include <vector>
#include <map>
#include "apclient.hpp"

enum class APState {
	Disconnected,
	Connecting,
	Connected,
	Error
};

struct ReceivedItem {
	int64_t item;
	int index;
	std::string display;
};

class APConnection {
public:
	static APConnection& Instance();

	void Connect(const std::string& host, const std::string& slot, const std::string& pass);
	void Disconnect();

	void CheckLocation(const std::string& location);

	void Tick();

	std::vector<ReceivedItem> DrainReceivedItems();
	void ConfirmApplied(int index);

	APState GetState() const { return state; }
	const std::string& GetError() const { return errorMsg; }

private:
	APConnection() = default;
	~APConnection() = default;
	APConnection(const APConnection&) = delete;
	APConnection& operator=(const APConnection&) = delete;

	void SetError(const std::string& msg);

	void OnSocketError(const std::string& error);
	void OnSocketDisconnected();
	void OnRoomInfo();
	void OnSlotConnected(const nlohmann::json& json);
	void OnSlotDisconnected();
	void OnSlotRefused(const std::list<std::string>& errors);
	void OnItemsReceived(const std::list<APClient::NetworkItem>& items);
	void OnRetrieved(const std::map<std::string, nlohmann::json>& keys);
	void OnPrint(const std::string& msg);

	std::string IndexKey() const;
	void QueueItem(const APClient::NetworkItem& item);

	std::unique_ptr<APClient> ap;
	APState state = APState::Disconnected;
	std::string errorMsg;
	bool abort = false;

	std::string connSlot;
	std::string connPass;

	int receivedIndex = 0;
	bool indexLoaded = false;
	std::vector<APClient::NetworkItem> pendingItems;
	std::vector<ReceivedItem> receivedItems;
};

#include "Configuration.h"
#include "Logger.h"
#include "apuuid.hpp"



Configuration& Configuration::Instance()
{
	static Configuration instance;
	return instance;
}


bool Configuration::Init(const std::string& path)
{
	std::ifstream file(path);
	if (!file.good())
	{
		Logger::Log(LogLevel::Warning, this, "File not found", path);
		return false;
	}
	configPath = path;
	Logger::Log(this, "Init ok");

	return true;
}

bool Configuration::Load()
{
	checks_to_items.clear();
	std::ifstream file(configPath);
	if (!file.is_open())
	{
		Logger::Log(LogLevel::Error, this, "File not found", configPath);
		return false;
	}

	Configuration::ConnectAP("http://127.0.0.1:38281");

	std::string line;
	while (std::getline(file, line))
	{
		if (line.empty() || line[0] == '#')
			continue;

		size_t separator = line.find(':');
		if (separator == std::string::npos)
			continue;

		std::string location = line.substr(0, separator);
		std::string item = line.substr(separator + 1);

		location.erase(0, location.find_first_not_of(" \t"));
		location.erase(location.find_last_not_of(" \t") + 1);
		item.erase(0, item.find_first_not_of(" \t"));
		item.erase(item.find_last_not_of(" \t") + 1);

		checks_to_items[location] = item;
	}
	Logger::Log(LogLevel::Debug, this, "Found", checks_to_items.size(), "Items");
	return true;
}

void Configuration::ConnectAP(std::string uri)
{
	ap.reset();
	bool is_ws = uri.rfind("ws://", 0) == 0;
	bool is_wss = uri.rfind("wss://", 0) == 0;
	std::string uri_without_scheme =
		uri.empty() ? APClient::DEFAULT_URI :
		is_ws ? uri.substr(5) :
		is_wss ? uri.substr(6) :
		uri;
	//UUIDFactory
	auto uuid = ap_get_uuid("EnderMagnolia.uuid");

	Logger::Log(LogLevel::Debug, this, "Connecting AP...");
	ap.reset(new APClient(uuid, "Ender Magnolia", uri.empty() ? APClient::DEFAULT_URI : uri));

	std::list<int64_t> list = {0,1,2};
	ap->LocationScouts(list, 0);
	ap->set_socket_error_handler([this](const std::string& error) {
		Logger::Log(LogLevel::Error, this, "Socket Error", error);
	});
	ap->set_room_info_handler([this]() {
		Logger::Log(LogLevel::Debug, "AP", "Room info");
		ap->ConnectSlot("Trex", "", 0b101);
	});
	ap->set_slot_connected_handler([](const nlohmann::json &json) {
		Logger::Log(LogLevel::Debug, "AP", "set_slot_connected_handler");
	});
	ap->set_slot_disconnected_handler([]() {
		Logger::Log(LogLevel::Debug, "AP", "set_slot_disconnected_handler");
	});
	ap->set_slot_refused_handler([](const std::list<std::string>& errors) {
		Logger::Log(LogLevel::Debug, "AP", "set_slot_refused_handler");
	});
	ap->set_items_received_handler([](const std::list<APClient::NetworkItem>& items) {
		Logger::Log(LogLevel::Debug, "AP", "set_items_received_handler");
	});
	ap->set_print_handler([](const std::string& msg) {
		Logger::Log(LogLevel::Debug, "AP", msg);
	});
}

void Configuration::Tick()
{

	ap->poll();
}

std::optional<std::string> Configuration::ScoutLocation(const std::string& location) const
{
	auto it = checks_to_items.find(location);
	if (it == checks_to_items.end())
		return std::nullopt;
	return it->second;
}

#include "UpdateChecker.h"
#include "Configuration.h"
#include "Logger.h"

#include <Windows.h>
#include <winhttp.h>
#include <shellapi.h>
#include <fstream>
#include <thread>
#include <cstdlib>

#pragma comment(lib, "winhttp.lib")
#pragma comment(lib, "shell32.lib")

void UpdateChecker::CheckAsync()
{
	std::thread(&UpdateChecker::Run).detach();
}

bool UpdateChecker::IsNewer(const std::string& remoteTag, const std::string& localTag)
{
	size_t r = remoteTag.compare(0, strlen(kTagPrefix), kTagPrefix) == 0 ? strlen(kTagPrefix) : 0;
	size_t l = localTag.compare(0, strlen(kTagPrefix), kTagPrefix) == 0 ? strlen(kTagPrefix) : 0;

	while (r < remoteTag.size() || l < localTag.size())
	{
		int remote = atoi(remoteTag.c_str() + r);
		int local = atoi(localTag.c_str() + l);
		if (remote != local)
			return remote > local;

		size_t rDot = remoteTag.find('.', r);
		size_t lDot = localTag.find('.', l);
		r = rDot == std::string::npos ? remoteTag.size() : rDot + 1;
		l = lDot == std::string::npos ? localTag.size() : lDot + 1;
	}

	return false;
}

std::string UpdateChecker::FetchLatestTag()
{
	std::string body;

	HINTERNET session = WinHttpOpen(L"EnderMagnolia.Randomizer", WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
		WINHTTP_NO_PROXY_NAME, WINHTTP_NO_PROXY_BYPASS, 0);
	HINTERNET connect = session ? WinHttpConnect(session, kApiHost, INTERNET_DEFAULT_HTTPS_PORT, 0) : nullptr;
	HINTERNET request = connect ? WinHttpOpenRequest(connect, L"GET", kApiPath, nullptr,
		WINHTTP_NO_REFERER, WINHTTP_DEFAULT_ACCEPT_TYPES, WINHTTP_FLAG_SECURE) : nullptr;

	if (request && WinHttpSendRequest(request, WINHTTP_NO_ADDITIONAL_HEADERS, 0,
		WINHTTP_NO_REQUEST_DATA, 0, 0, 0) && WinHttpReceiveResponse(request, nullptr))
	{
		char buffer[1024];
		DWORD read = 0;
		while (WinHttpReadData(request, buffer, sizeof(buffer), &read) && read > 0)
			body.append(buffer, read);
	}

	if (request)
		WinHttpCloseHandle(request);
	if (connect)
		WinHttpCloseHandle(connect);
	if (session)
		WinHttpCloseHandle(session);

	auto nameAt = body.find("\"name\"");
	auto open = nameAt == std::string::npos ? nameAt : body.find('"', body.find(':', nameAt));
	auto close = open == std::string::npos ? open : body.find('"', open + 1);
	return close == std::string::npos ? "" : body.substr(open + 1, close - open - 1);
}

void UpdateChecker::Run()
{
	std::string tag = FetchLatestTag();
	if (tag.empty())
		return;

	Logger::Log("UPDATE local", kVersion, "remote", tag);
	if (!IsNewer(tag, kVersion))
		return;

	std::string skipPath = Configuration::Instance().DataPath(kSkipFile);
	std::string skipped;
	std::getline(std::ifstream(skipPath), skipped);
	if (skipped == tag)
		return;

	std::string message = "A new version of Ender Magnolia Randomizer is available.\n\n"
		"Installed: " + std::string(kVersion) + "\n"
		"Latest: " + tag + "\n\n"
		"Open the download page now?\n\n"
		"No: don't ask again for this version.\n"
		"Cancel: remind me on next launch.";

	int choice = MessageBoxA(nullptr, message.c_str(), "Ender Magnolia Randomizer",
		MB_YESNOCANCEL | MB_ICONINFORMATION | MB_SETFOREGROUND | MB_TOPMOST);

	if (choice == IDYES)
		ShellExecuteA(nullptr, "open", (kReleaseUrl + tag).c_str(), nullptr, nullptr, SW_SHOWNORMAL);
	else if (choice == IDNO)
		std::ofstream(skipPath, std::ios::trunc) << tag;
}

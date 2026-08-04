#pragma once

#include <string>

class UpdateChecker {
public:
	static inline const char* kVersion = "0.1.0";

	static void CheckAsync();

private:
	static inline const wchar_t* kApiHost = L"api.github.com";
	static inline const wchar_t* kApiPath = L"/repos/Trexounay/EnderMagnolia.Randomizer/tags?per_page=1";
	static inline const char* kReleaseUrl = "https://github.com/Trexounay/EnderMagnolia.Randomizer/releases/tag/";
	static inline const char* kTagPrefix = "endermagnolia-v";
	static inline const char* kSkipFile = "EnderMagnolia.Randomizer.skip";

	static void Run();
	static std::string FetchLatestTag();
	static bool IsNewer(const std::string& remoteTag, const std::string& localTag);
};

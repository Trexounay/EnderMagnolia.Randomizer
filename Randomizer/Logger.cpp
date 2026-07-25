#include "Logger.h"
#include <Windows.h>
#include <typeinfo>

std::ofstream Logger::s_file;

void Logger::Init() {
	if (GetFileAttributesA("EnderMagnolia.Randomizer.Debug.txt") != INVALID_FILE_ATTRIBUTES)
		MoveFileExA("EnderMagnolia.Randomizer.Debug.txt", "EnderMagnolia.Randomizer.Debug.prev.txt", MOVEFILE_REPLACE_EXISTING);

	s_file.open("EnderMagnolia.Randomizer.Debug.txt", std::ios_base::app);

	AllocConsole();
	FILE* fDummy;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	std::cout << "[Logger] Console initialized" << std::endl;
}

void Logger::WriteToFile(const std::string& line)
{
	s_file << line << std::endl;
}

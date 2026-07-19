#include "Logger.h"
#include <Windows.h>
#include <typeinfo>

void Logger::Init() {
	if (GetFileAttributesA("Debug.txt") != INVALID_FILE_ATTRIBUTES)
		MoveFileExA("Debug.txt", "Debug.prev.txt", MOVEFILE_REPLACE_EXISTING);

	AllocConsole();
	FILE* fDummy;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	std::cout << "[Logger] Console initialized" << std::endl;
}

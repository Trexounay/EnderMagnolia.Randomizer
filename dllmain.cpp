// dllmain.cpp : Defines the entry point for the DLL application.
#define Py_LIMITED_API
#define Py_BUILD_CORE
#define Py_ENABLE_SHARED 0

#include <Windows.h>
#include <iostream>
#include <thread>
#include "version/version.h"

#include "HookManager.h"
#include "GameManager.h"
#include "Logger.h"
#include "Configuration.h"

DWORD APIENTRY MainThread(HMODULE Module)
{
#ifdef _DEBUG
	Logger::Init();
	char  dllName[MAX_PATH];
	GetModuleFileNameA(Module, dllName, MAX_PATH);
	Logger::Log("RANDOMIZER", dllName);
#endif
	while (!HookManager::Instance().Init())
		Sleep(500);
	Configuration::Instance().Init();
	GameManager::Instance().Init();
	FreeLibraryAndExitThread(Module, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	std::thread* second;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		setupWrappers();
		second = new std::thread(MainThread, hModule);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

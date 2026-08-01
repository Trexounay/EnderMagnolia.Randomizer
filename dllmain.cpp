// dllmain.cpp : Defines the entry point for the DLL application.

#include <Windows.h>
#include <SDKDDKVer.h>
#include <iostream>
#include <thread>
#include "version/version.h"

#include "Randomizer/HookManager.h"
#include "Randomizer/GameManager.h"
#include "Randomizer/Logger.h"
#include "Randomizer/Configuration.h"

#include "impl/d3d11_impl.h"
#include "kiero.h"


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


	if (kiero::init(kiero::RenderType::Auto) == kiero::Status::Success)
	{
		Logger::Log("KIERO OK");
		Logger::Log("KIERO", kiero::getRenderType());
		switch (kiero::getRenderType())
		{
		case kiero::RenderType::D3D11:
			impl::d3d11::init();
			break;
		default:

			break;
		}
	}


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

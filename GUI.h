#pragma once
#include <Windows.h>
#include <inttypes.h>
#include <string>
#include <d3d11.h>
#include <D3D11Shader.h>
#include <D3Dcompiler.h>
#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "D3dcompiler.lib")

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class GUI {
public:
	static GUI& Instance();

	void Init();
	void Tick();

	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;

private:
	GUI() = default;
	~GUI() = default;
	GUI(const GUI&) = delete;
	GUI& operator=(const GUI&) = delete;

	static LRESULT CALLBACK hookWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	WNDPROC hGameWindowProc = NULL;
};


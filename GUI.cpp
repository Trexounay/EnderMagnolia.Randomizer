#include "GUI.h"

namespace MEM
{
	HWND FindWindow(DWORD pid, wchar_t const* className)
	{
		HWND hCurWnd = GetTopWindow(0);
		while (hCurWnd != NULL)
		{
			DWORD cur_pid;
			DWORD dwTheardId = GetWindowThreadProcessId(hCurWnd, &cur_pid);

			if (cur_pid == pid)
			{
				if (IsWindowVisible(hCurWnd) != 0)
				{
					TCHAR szClassName[256];
					GetClassName(hCurWnd, szClassName, 256);
					if (wcscmp(szClassName, className) == 0)
					{
						return hCurWnd;
					}
				}
			}
			hCurWnd = GetNextWindow(hCurWnd, GW_HWNDNEXT);
		}
		return NULL;
	}
};

GUI& GUI::Instance()
{
	static GUI instance;
	return instance;
}


void GUI::Init()
{
	ImGui::CreateContext();

	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;

	HWND hGameWindow = MEM::FindWindow(GetCurrentProcessId(), L"UnrealWindow");

	hGameWindowProc = (WNDPROC)SetWindowLongPtr(hGameWindow, GWLP_WNDPROC, (LONG_PTR)hookWndProc);
	ImGui_ImplWin32_Init(hGameWindow);


	//ImGui_ImplDX11_CreateDeviceObjects();
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT CALLBACK GUI::hookWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	CallWindowProc(ImGui_ImplWin32_WndProcHandler, hWnd, uMsg, wParam, lParam);

	ImGuiIO& io = ImGui::GetIO();
	if (io.WantCaptureMouse || io.WantCaptureKeyboard) {
		return true;
	}
	return CallWindowProc(GUI::Instance().hGameWindowProc, hWnd, uMsg, wParam, lParam);
}

void GUI::Tick()
{

}

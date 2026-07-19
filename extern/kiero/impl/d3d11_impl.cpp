#include "kiero.h"

#if KIERO_INCLUDE_D3D11

#include "d3d11_impl.h"
#include <d3d11.h>
#include <assert.h>
#include <stdio.h>

#include "win32_impl.h"
#include "shared.h"

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"

typedef long(__stdcall* Present)(IDXGISwapChain*, UINT, UINT);
static Present oPresent = NULL;
static WNDPROC oWndProc = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;
static ID3D11DeviceContext* context = nullptr;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT CALLBACK hkWindowProc2(
	_In_ HWND   hwnd,
	_In_ UINT   uMsg,
	_In_ WPARAM wParam,
	_In_ LPARAM lParam
)
{
	if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam) > 0)
		return 1L;	
	return ::CallWindowProcW(oWndProc, hwnd, uMsg, wParam, lParam);
}

long __stdcall hkPresent11(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	static bool init = false;

	if (!init)
	{
		DXGI_SWAP_CHAIN_DESC desc;
		pSwapChain->GetDesc(&desc);

		ID3D11Device* device;
		pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&device);

		device->GetImmediateContext(&context);

		oWndProc = reinterpret_cast<WNDPROC>(
			SetWindowLongPtr((HWND)desc.OutputWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hkWindowProc2))
			);

		ImGui::CreateContext();

		ImGuiIO& io = ImGui::GetIO();
		io.Fonts->AddFontDefault();
		ImFontConfig cfg;
		cfg.SizePixels = 26.0f;
		impl::SetBigFont(io.Fonts->AddFontDefault(&cfg));

		ImGui_ImplWin32_Init(desc.OutputWindow);
		ImGui_ImplDX11_Init(device, context);


		ID3D11Texture2D* backBuffer = nullptr;
		pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&backBuffer);

		if (backBuffer) {
			device->CreateRenderTargetView(backBuffer, NULL, &g_mainRenderTargetView);
			backBuffer->Release();
		}

		init = true;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (auto cb = impl::GetRenderCallback())
		cb();

	ImGui::EndFrame();
	context->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return oPresent(pSwapChain, SyncInterval, Flags);
}

void impl::d3d11::init()
{
	assert(kiero::bind(8, (void**)&oPresent, hkPresent11) == kiero::Status::Success);
}

#endif // KIERO_INCLUDE_D3D11
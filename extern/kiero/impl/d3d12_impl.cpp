#include "kiero.h"

#if KIERO_INCLUDE_D3D12

#include "d3d12_impl.h"
#include <d3d12.h>
#include <dxgi1_4.h>
#include <assert.h>
#include <vector>

#include "shared.h"

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx12.h"

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

static const int VTBL_PRESENT = 140;
static const int VTBL_RESIZE_BUFFERS = 145;
static const int VTBL_EXECUTE_COMMAND_LISTS = 54;

typedef HRESULT(__stdcall* Present12)(IDXGISwapChain3*, UINT, UINT);
typedef HRESULT(__stdcall* ResizeBuffers12)(IDXGISwapChain3*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
typedef void(__stdcall* ExecuteCommandLists)(ID3D12CommandQueue*, UINT, ID3D12CommandList* const*);

static Present12 oPresent12 = nullptr;
static ResizeBuffers12 oResizeBuffers12 = nullptr;
static ExecuteCommandLists oExecuteCommandLists = nullptr;
static WNDPROC oWndProc = nullptr;

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

struct FrameContext
{
	ID3D12CommandAllocator* commandAllocator = nullptr;
	ID3D12Resource* mainRenderTargetResource = nullptr;
	D3D12_CPU_DESCRIPTOR_HANDLE mainRenderTargetDescriptor = {};
};

static bool g_init = false;
static ID3D12Device* g_device = nullptr;
static ID3D12DescriptorHeap* g_rtvDescHeap = nullptr;
static ID3D12DescriptorHeap* g_srvDescHeap = nullptr;
static ID3D12GraphicsCommandList* g_commandList = nullptr;
static std::vector<FrameContext> g_frameContext;
static UINT g_buffersCount = 0;
static HWND g_window = nullptr;

static ID3D12CommandQueue* g_gameCommandQueue = nullptr;

LRESULT CALLBACK hkWindowProc12(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam) > 0)
		return 1L;
	return ::CallWindowProcW(oWndProc, hwnd, uMsg, wParam, lParam);
}

void __stdcall hkExecuteCommandLists12(ID3D12CommandQueue* queue, UINT numCommandLists, ID3D12CommandList* const* ppCommandLists)
{
	if (!g_gameCommandQueue && queue)
	{
		D3D12_COMMAND_QUEUE_DESC desc = queue->GetDesc();
		if (desc.Type == D3D12_COMMAND_LIST_TYPE_DIRECT)
			g_gameCommandQueue = queue;
	}
	oExecuteCommandLists(queue, numCommandLists, ppCommandLists);
}

static void CleanupRenderTarget()
{
	for (auto& frame : g_frameContext)
	{
		if (frame.mainRenderTargetResource)
		{
			frame.mainRenderTargetResource->Release();
			frame.mainRenderTargetResource = nullptr;
		}
	}
}

static bool CreateRenderTarget(IDXGISwapChain3* swapChain)
{
	if (!g_device)
		return false;

	if (!g_rtvDescHeap)
	{
		D3D12_DESCRIPTOR_HEAP_DESC desc = {};
		desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
		desc.NumDescriptors = g_buffersCount;
		desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
		if (g_device->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_rtvDescHeap)) != S_OK)
			return false;
	}

	const UINT rtvDescriptorSize = g_device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
	D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = g_rtvDescHeap->GetCPUDescriptorHandleForHeapStart();

	for (UINT i = 0; i < g_buffersCount; ++i)
	{
		ID3D12Resource* backBuffer = nullptr;
		g_frameContext[i].mainRenderTargetDescriptor = rtvHandle;
		if (swapChain->GetBuffer(i, IID_PPV_ARGS(&backBuffer)) != S_OK || !backBuffer)
			return false;
		g_device->CreateRenderTargetView(backBuffer, nullptr, rtvHandle);
		g_frameContext[i].mainRenderTargetResource = backBuffer;
		rtvHandle.ptr += rtvDescriptorSize;
	}
	return true;
}

HRESULT __stdcall hkResizeBuffers12(IDXGISwapChain3* swapChain, UINT bufferCount, UINT width, UINT height, DXGI_FORMAT newFormat, UINT swapChainFlags)
{
	if (g_init)
		CleanupRenderTarget();

	HRESULT hr = oResizeBuffers12(swapChain, bufferCount, width, height, newFormat, swapChainFlags);

	if (g_init && SUCCEEDED(hr))
	{
		if (bufferCount != 0 && bufferCount != g_buffersCount)
		{
			if (g_rtvDescHeap)
			{
				g_rtvDescHeap->Release();
				g_rtvDescHeap = nullptr;
			}
			g_buffersCount = bufferCount;
			g_frameContext.resize(g_buffersCount);
		}
		CreateRenderTarget(swapChain);
	}

	return hr;
}

HRESULT __stdcall hkPresent12(IDXGISwapChain3* swapChain, UINT syncInterval, UINT flags)
{
	if (!g_init)
	{
		if (!g_gameCommandQueue)
			return oPresent12(swapChain, syncInterval, flags);

		IDXGISwapChain3* swapChain3 = nullptr;
		if (swapChain->QueryInterface(IID_PPV_ARGS(&swapChain3)) != S_OK || !swapChain3)
			return oPresent12(swapChain, syncInterval, flags);

		if (swapChain3->GetDevice(IID_PPV_ARGS(&g_device)) != S_OK)
		{
			swapChain3->Release();
			return oPresent12(swapChain, syncInterval, flags);
		}

		DXGI_SWAP_CHAIN_DESC desc;
		swapChain3->GetDesc(&desc);
		g_window = desc.OutputWindow;
		g_buffersCount = desc.BufferCount;
		g_frameContext.clear();
		g_frameContext.resize(g_buffersCount);

		{
			D3D12_DESCRIPTOR_HEAP_DESC srvDesc = {};
			srvDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
			srvDesc.NumDescriptors = 1;
			srvDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
			if (g_device->CreateDescriptorHeap(&srvDesc, IID_PPV_ARGS(&g_srvDescHeap)) != S_OK)
			{
				swapChain3->Release();
				return oPresent12(swapChain, syncInterval, flags);
			}
		}

		for (UINT i = 0; i < g_buffersCount; ++i)
		{
			if (g_device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_frameContext[i].commandAllocator)) != S_OK)
			{
				swapChain3->Release();
				return oPresent12(swapChain, syncInterval, flags);
			}
		}

		if (g_device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_frameContext[0].commandAllocator, nullptr, IID_PPV_ARGS(&g_commandList)) != S_OK ||
			g_commandList->Close() != S_OK)
		{
			swapChain3->Release();
			return oPresent12(swapChain, syncInterval, flags);
		}

		if (!CreateRenderTarget(swapChain3))
		{
			swapChain3->Release();
			return oPresent12(swapChain, syncInterval, flags);
		}

		oWndProc = reinterpret_cast<WNDPROC>(
			SetWindowLongPtr(g_window, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hkWindowProc12)));

		ImGui::CreateContext();

		if (auto initCb = impl::GetInitCallback())
			initCb();

		ImGuiIO& io = ImGui::GetIO();
		io.Fonts->AddFontDefault();
		ImFontConfig cfg;
		cfg.SizePixels = 26.0f;
		impl::SetBigFont(io.Fonts->AddFontDefault(&cfg));

		ImGui_ImplWin32_Init(g_window);

		ImGui_ImplDX12_InitInfo initInfo = {};
		initInfo.Device = g_device;
		initInfo.CommandQueue = g_gameCommandQueue;
		initInfo.NumFramesInFlight = (int)g_buffersCount;
		initInfo.RTVFormat = DXGI_FORMAT_R8G8B8A8_UNORM;
		initInfo.DSVFormat = DXGI_FORMAT_UNKNOWN;
		initInfo.SrvDescriptorHeap = g_srvDescHeap;
		initInfo.LegacySingleSrvCpuDescriptor = g_srvDescHeap->GetCPUDescriptorHandleForHeapStart();
		initInfo.LegacySingleSrvGpuDescriptor = g_srvDescHeap->GetGPUDescriptorHandleForHeapStart();
		ImGui_ImplDX12_Init(&initInfo);

		swapChain3->Release();
		g_init = true;
	}

	IDXGISwapChain3* sc3 = nullptr;
	if (swapChain->QueryInterface(IID_PPV_ARGS(&sc3)) != S_OK || !sc3)
		return oPresent12(swapChain, syncInterval, flags);
	const UINT backBufferIdx = sc3->GetCurrentBackBufferIndex();
	sc3->Release();

	if (backBufferIdx >= g_frameContext.size())
		return oPresent12(swapChain, syncInterval, flags);

	FrameContext& frame = g_frameContext[backBufferIdx];
	if (!frame.mainRenderTargetResource)
		return oPresent12(swapChain, syncInterval, flags);

	ImGui_ImplDX12_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (auto cb = impl::GetRenderCallback())
		cb();

	ImGui::EndFrame();
	ImGui::Render();

	frame.commandAllocator->Reset();

	D3D12_RESOURCE_BARRIER barrier = {};
	barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
	barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
	barrier.Transition.pResource = frame.mainRenderTargetResource;
	barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
	barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
	barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;

	g_commandList->Reset(frame.commandAllocator, nullptr);
	g_commandList->ResourceBarrier(1, &barrier);
	g_commandList->OMSetRenderTargets(1, &frame.mainRenderTargetDescriptor, FALSE, nullptr);
	g_commandList->SetDescriptorHeaps(1, &g_srvDescHeap);

	ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), g_commandList);

	barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
	barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
	g_commandList->ResourceBarrier(1, &barrier);
	g_commandList->Close();

	ID3D12CommandList* lists[] = { g_commandList };
	g_gameCommandQueue->ExecuteCommandLists(1, lists);

	return oPresent12(swapChain, syncInterval, flags);
}

void impl::d3d12::init()
{
	bool okExec = kiero::bind(VTBL_EXECUTE_COMMAND_LISTS, (void**)&oExecuteCommandLists, hkExecuteCommandLists12) == kiero::Status::Success;
	bool okPresent = kiero::bind(VTBL_PRESENT, (void**)&oPresent12, hkPresent12) == kiero::Status::Success;
	bool okResize = kiero::bind(VTBL_RESIZE_BUFFERS, (void**)&oResizeBuffers12, hkResizeBuffers12) == kiero::Status::Success;
	assert(okExec && okPresent && okResize);
}

#endif // KIERO_INCLUDE_D3D12

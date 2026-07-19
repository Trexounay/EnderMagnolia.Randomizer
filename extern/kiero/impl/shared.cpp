#include "shared.h"

namespace
{
	impl::RenderCallback g_renderCallback = nullptr;
	void* g_bigFont = nullptr;
}

void impl::SetRenderCallback(RenderCallback cb)
{
	g_renderCallback = cb;
}

impl::RenderCallback impl::GetRenderCallback()
{
	return g_renderCallback;
}

void impl::SetBigFont(void* font)
{
	g_bigFont = font;
}

void* impl::GetBigFont()
{
	return g_bigFont;
}

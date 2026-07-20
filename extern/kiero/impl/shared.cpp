#include "shared.h"

namespace
{
	impl::RenderCallback g_renderCallback = nullptr;
	impl::InitCallback g_initCallback = nullptr;
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

void impl::SetInitCallback(InitCallback cb)
{
	g_initCallback = cb;
}

impl::InitCallback impl::GetInitCallback()
{
	return g_initCallback;
}

void impl::SetBigFont(void* font)
{
	g_bigFont = font;
}

void* impl::GetBigFont()
{
	return g_bigFont;
}

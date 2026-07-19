#pragma once

namespace impl
{
	typedef void(*RenderCallback)();

	void SetRenderCallback(RenderCallback cb);
	RenderCallback GetRenderCallback();

	void SetBigFont(void* font);
	void* GetBigFont();
}

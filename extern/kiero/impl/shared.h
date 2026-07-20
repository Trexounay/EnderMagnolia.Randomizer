#pragma once

namespace impl
{
	typedef void(*RenderCallback)();

	void SetRenderCallback(RenderCallback cb);
	RenderCallback GetRenderCallback();

	typedef void(*InitCallback)();
	void SetInitCallback(InitCallback cb);
	InitCallback GetInitCallback();

	void SetBigFont(void* font);
	void* GetBigFont();
}

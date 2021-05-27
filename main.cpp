//-----------------------------------------------
//  提出用
//　2016183_太田尾翔音
//-----------------------------------------------

#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	DxLib::SetGraphMode(640, 480, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"2016183_太田尾翔音");
	if (DxLib_Init())
	{
		return -1;
	}
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0)
	{
		DxLib::ScreenFlip();
	}
	return 0;
}
//-----------------------------------------------
//  ��o�p
//�@2016183_���c���ĉ�
//-----------------------------------------------

#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	DxLib::SetGraphMode(640, 480, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"2016183_���c���ĉ�");
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
#include <Windows.h>

int
WINAPI
WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR szCmdLine,
	int iCmdShow
	)
{
	MessageBox(
		nullptr,
		TEXT("Hello, Windows API !"),
		TEXT("HelloMsg"),
		MB_OK | MB_ICONINFORMATION | MB_DEFBUTTON1
		);
	return 0;
}
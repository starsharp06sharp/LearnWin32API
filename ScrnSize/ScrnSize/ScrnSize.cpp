#include <Windows.h>

#define MBF_BUFFER_SIZE 1024

int CDECL messageBoxf(
	TCHAR *szCaption,
	TCHAR *szFormat,
	...
	)
{
	TCHAR szBuffer[MBF_BUFFER_SIZE];
	va_list pArgList;

	va_start(pArgList, szFormat);

	wvsprintf(szBuffer, szFormat, pArgList);

	va_end(pArgList);

	return MessageBox(
		nullptr,
		szBuffer,
		szCaption,
		MB_OK | MB_DEFBUTTON1 | MB_ICONINFORMATION
		);
}

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR szCmdLine,
	int iCmdShow
	)
{
	int cxScreen, cyScreen;

	cxScreen = GetSystemMetrics(SM_CXSCREEN);
	cyScreen = GetSystemMetrics(SM_CYSCREEN);

	messageBoxf(
		TEXT("ScrnSize"),
		TEXT("The screen is %i pixels wide by %i pixels high."),
		cxScreen, cyScreen
		);

	return 0;
}
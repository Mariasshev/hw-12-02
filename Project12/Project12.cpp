// Project12.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "Project12.h"

#include <windows.h>
#include <windowsX.h>
#include <tchar.h>
#include <vector>
#include <string>
#include <commctrl.h>
#include "Resource.h"

#pragma comment(lib,"comctl32")

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

using namespace std;


INT_PTR CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	HWND hEdit1 = GetDlgItem(hwnd, IDC_EDIT1);
	//SetDlgItemText(hwnd, IDC_EDIT1, TEXT("STATIC TEXT"));

	switch (uMsg)
	{
	case WM_INITDIALOG:

		return TRUE;
	case WM_COMMAND:
		if (LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hwnd, 0);
			return TRUE;
		}
		break;
	}


	return FALSE;
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int)
{
	return DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
}

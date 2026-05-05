#include <windows.h>
#include <gdiplus.h>

// Basic entry point for Minesweeper
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    // Initialize GDI+
    ULONG_PTR gdiplusToken;
    Gdiplus::GdiplusStartupInput gdiplusStartupInput;
    Gdiplus::GdiplusStartupOutput gdiplusStartupOutput;
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, &gdiplusStartupOutput);

    // Create basic window
    WNDCLASS wc = {0};
    wc.lpfnWndProc = DefWindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"Minesweeper";
    RegisterClass(&wc);

    HWND hWnd = CreateWindow(
        L"Minesweeper", L"Minesweeper", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL);

    if (hWnd)
    {
        ShowWindow(hWnd, nShowCmd);
        UpdateWindow(hWnd);

        // Message loop
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    // Shutdown GDI+
    Gdiplus::GdiplusShutdown(gdiplusToken);

    return 0;
}
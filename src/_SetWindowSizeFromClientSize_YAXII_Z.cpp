void __fastcall SetWindowSizeFromClientSize(unsigned int a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // di
  BOOL v4; // eax
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+20h] BYREF

  if ( !g_bMaximized && !(_BYTE)g_bMediaCenter )
  {
    GetWindowDimensionsFromContentAreaDimensions(a1, a2, &v6, &v7, g_hWnd, g_hWndStatus);
    memset(&wndpl, 0, sizeof(wndpl));
    GetWindowPlacement(g_hWnd, &wndpl);
    v2 = v6;
    v3 = v7;
    wndpl.rcNormalPosition.right = v6 + wndpl.rcNormalPosition.left;
    wndpl.rcNormalPosition.bottom = v7 + wndpl.rcNormalPosition.top;
    v4 = IsWindowVisible(g_hWnd);
    wndpl.showCmd &= -v4;
    SetWindowPlacement(g_hWnd, &wndpl);
    CenterRenderWindow();
    if ( g_hWndStatus )
      SendMessageW(g_hWndStatus, 5u, 0, v2 | (unsigned __int64)(unsigned __int16)(v3 << 8));
  }
}

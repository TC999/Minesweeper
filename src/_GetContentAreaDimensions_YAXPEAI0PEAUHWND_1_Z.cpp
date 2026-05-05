void __fastcall GetContentAreaDimensions(unsigned int *a1, unsigned int *a2, HWND a3, HWND a4)
{
  HWND v4; // rbx
  LONG bottom; // edx
  unsigned int v8; // edx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = g_hWndStatus;
  GetClientRect(g_hWnd, &Rect);
  if ( v4 )
  {
    GetWindowRect(v4, &v10);
    bottom = v10.top - v10.bottom + Rect.bottom;
  }
  else
  {
    bottom = Rect.bottom;
  }
  v8 = bottom - Rect.top;
  *a1 = Rect.right - Rect.left;
  *a2 = v8;
}

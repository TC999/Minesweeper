void __fastcall DialogHelper::CenterDialog(HWND hWnd, HWND a2)
{
  HWND Window; // rax
  char v4; // si
  HWND v5; // rbx
  LONG WindowLongW; // eax
  char v7; // bp
  HMONITOR v8; // rbx
  struct tagRECT v9; // xmm0
  int v10; // esi
  int v11; // r10d
  LONG left; // r8d
  LONG top; // r9d
  struct tagRECT v14; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+60h] [rbp-38h] BYREF

  Window = GetWindow(hWnd, 4u);
  v4 = 0;
  v5 = Window;
  if ( Window )
  {
    WindowLongW = GetWindowLongW(Window, -16);
    if ( (WindowLongW & 0x10000000) == 0 || (WindowLongW & 0x20000000) != 0 )
      v4 = 1;
  }
  GetWindowRect(hWnd, &Rect);
  v14.left = 0;
  v14.top = 0;
  v14.right = 0;
  v14.bottom = 0;
  v7 = 0;
  if ( v4 || !v5 )
  {
    v8 = MonitorFromWindow(v5, 1u);
    memset(&mi.rcMonitor, 0, 0x24u);
    mi.cbSize = 40;
    GetMonitorInfoW(v8, &mi);
    if ( DialogHelper::m_bIsMediaCenter )
      v9 = (struct tagRECT)_mm_loadu_si128((const __m128i *)&mi.rcMonitor);
    else
      v9 = (struct tagRECT)_mm_loadu_si128((const __m128i *)&mi.rcWork);
    v14 = v9;
    v7 = 1;
  }
  else
  {
    GetWindowRect(v5, &v14);
  }
  v10 = Rect.right - Rect.left;
  v11 = Rect.bottom - Rect.top;
  left = (v14.right + v14.left) / 2 - (Rect.right - Rect.left) / 2;
  top = (v14.top + v14.bottom) / 2 - (Rect.bottom - Rect.top) / 2;
  if ( v7 )
  {
    if ( left >= v14.left )
    {
      if ( left + v10 > v14.right )
        left = v14.right - v10;
    }
    else
    {
      left = v14.left;
    }
    if ( top >= v14.top )
    {
      if ( top + v11 > v14.bottom )
        top = v14.bottom - v11;
    }
    else
    {
      top = v14.top;
    }
  }
  SetWindowPos(hWnd, 0, left, top, -1, -1, 0x15u);
}

char ShowWindowInitial(void)
{
  char v0; // di
  HMONITOR v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-78h]
  __int64 v4; // [rsp+28h] [rbp-70h]
  struct tagRECT Rect; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-48h] BYREF
  tagMONITORINFO mi; // [rsp+60h] [rbp-38h] BYREF

  v0 = 0;
  GetWindowRect(g_hWnd, &Rect);
  Log(
    0x800u,
    2526,
    "Window.cpp",
    L"Validating window position: %d,%d by %d,%d",
    Rect.left,
    Rect.top,
    Rect.right,
    Rect.bottom);
  v1 = MonitorFromRect(&Rect, 2u);
  memset(&mi.rcMonitor, 0, 0x24u);
  mi.cbSize = 40;
  GetMonitorInfoW(v1, &mi);
  UnionRect(&rcDst, &Rect, &mi.rcMonitor);
  if ( !EqualRect(&mi.rcMonitor, &rcDst) )
  {
    LODWORD(v4) = mi.rcMonitor.bottom - mi.rcMonitor.top;
    LODWORD(v3) = mi.rcMonitor.right - mi.rcMonitor.left;
    Log(0x800u, 2546, "Window.cpp", L"Current Monitor Work Area Is: %d, %d", v3, v4);
    if ( mi.rcMonitor.bottom - mi.rcMonitor.top <= (g_bDoubleDPI ? 1200 : 600)
      && mi.rcMonitor.right - mi.rcMonitor.left <= (g_bDoubleDPI ? 1600 : 800)
      && g_uiLayoutX == 800
      && g_uiLayoutY == 496 )
    {
      Log(0x800u, 2563, "Window.cpp", L"Monitor is small compared to the window - requesting maximize.");
      v0 = 1;
    }
  }
  if ( !IsIconic(g_hWnd) )
  {
    ShowWindow(g_hWnd, ((unsigned __int8)v0 | g_bMaximizeInitial) != 0 ? 3 : 5);
    SetForegroundWindow(g_hWnd);
  }
  return 1;
}

void __fastcall HandleWM_WINDOWPOSCHANGING_::_14_::LocalScope::ValidateOnMonitor(__int64 a1, int a2)
{
  HMONITOR v3; // rbx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 4 || a2 == 3 || a2 == 5 )
  {
    v3 = MonitorFromWindow(*(HWND *)a1, 2u);
    memset(&mi.rcMonitor, 0, 0x24u);
    mi.cbSize = 40;
    GetMonitorInfoW(v3, &mi);
    if ( *(_DWORD *)(a1 + 20) > mi.rcWork.bottom - GetSystemMetrics(4) )
      *(_DWORD *)(a1 + 20) = mi.rcWork.bottom - GetSystemMetrics(4);
    if ( *(_DWORD *)(a1 + 20) < mi.rcWork.top )
      *(_DWORD *)(a1 + 20) = mi.rcWork.top;
  }
}

char __fastcall Timekeeping::InitializeTimekeeping(Timekeeping *this)
{
  Log(8u, L"Initializing timekeeping with QPC:");
  Timekeeping::g_CurrentTimeMethod = 0;
  if ( !QueryPerformanceFrequency(&Timekeeping::g_PerfFreq) )
  {
    Log(8u, L"QueryPerformanceFrequency check failed: falling back to TimeGetTime");
LABEL_3:
    Timekeeping::g_CurrentTimeMethod = 1;
LABEL_7:
    timeBeginPeriod(0x21u);
    Log(8u, L"timeGetTime selected for timekeeping");
    Timekeeping::g_LastTime.LowPart = timeGetTime();
    goto LABEL_8;
  }
  if ( !QueryPerformanceCounter(&Timekeeping::g_LastTime) )
  {
    Log(8u, L"QueryPerformanceCounter check failed: falling back to TimeGetTime");
    goto LABEL_3;
  }
  Log(8u, L"QueryPerformanceCounter selected for timekeeping");
  Timekeeping::g_ThirtyFPSTicks = Timekeeping::g_PerfFreq.QuadPart / 30;
  if ( Timekeeping::g_CurrentTimeMethod == 1 )
    goto LABEL_7;
LABEL_8:
  Log(8u, L"Timekeeping initialized");
  return 1;
}

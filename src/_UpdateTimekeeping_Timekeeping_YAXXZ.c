void __fastcall Timekeeping::UpdateTimekeeping(Timekeeping *this)
{
  if ( !Timekeeping::g_CurrentTimeMethod )
  {
    if ( QueryPerformanceCounter(&Timekeeping::g_NewTime) )
    {
      if ( Timekeeping::g_LastTime.QuadPart > Timekeeping::g_NewTime.QuadPart )
        Timekeeping::g_NewTime = Timekeeping::g_LastTime;
    }
    else
    {
      Log(8u, L"SkippingQPC failed - falling back to timeGetTime()");
      Timekeeping::g_CurrentTimeMethod = 1;
      timeBeginPeriod(0x21u);
    }
  }
  if ( Timekeeping::g_CurrentTimeMethod == 1 )
    Timekeeping::g_NewTime.LowPart = timeGetTime();
}

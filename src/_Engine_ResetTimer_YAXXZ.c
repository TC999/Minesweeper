void Engine_ResetTimer(void)
{
  Timekeeping *v0; // rcx

  Log(8u, L"Reset timers");
  if ( !Timekeeping::g_CurrentTimeMethod && !QueryPerformanceCounter(&Timekeeping::g_LastTime) )
  {
    Log(8u, L"SkippingQPC failed - falling back to timeGetTime()");
    Timekeeping::g_CurrentTimeMethod = 1;
    timeBeginPeriod(0x21u);
  }
  if ( Timekeeping::g_CurrentTimeMethod == 1 )
    Timekeeping::g_LastTime.LowPart = timeGetTime();
  Timekeeping::UpdateTimekeeping(v0);
}

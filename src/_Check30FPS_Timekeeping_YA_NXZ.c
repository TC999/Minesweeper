char __fastcall Timekeeping::Check30FPS(Timekeeping *this)
{
  if ( !Timekeeping::g_CurrentTimeMethod )
  {
    if ( Timekeeping::g_NewTime.QuadPart - Timekeeping::g_LastTime.QuadPart > Timekeeping::g_ThirtyFPSTicks )
    {
      if ( Timekeeping::g_NewTime.QuadPart - Timekeeping::g_LastTime.QuadPart <= 2 * Timekeeping::g_PerfFreq.QuadPart )
        Timekeeping::g_LastTime.QuadPart += Timekeeping::g_ThirtyFPSTicks;
      else
        Timekeeping::g_LastTime = Timekeeping::g_NewTime;
      return 1;
    }
    return 0;
  }
  if ( Timekeeping::g_CurrentTimeMethod == 1 )
  {
    if ( Timekeeping::g_NewTime.LowPart - Timekeeping::g_LastTime.LowPart > 0x21 )
    {
      if ( Timekeeping::g_NewTime.LowPart - Timekeeping::g_LastTime.LowPart <= 0x7D0 )
        Timekeeping::g_LastTime.LowPart += 33;
      else
        Timekeeping::g_LastTime.LowPart = Timekeeping::g_NewTime.LowPart;
      return 1;
    }
    return 0;
  }
  return 1;
}

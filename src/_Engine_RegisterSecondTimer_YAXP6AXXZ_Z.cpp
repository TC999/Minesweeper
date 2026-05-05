void __fastcall Engine_RegisterSecondTimer(void (*a1)(void))
{
  if ( *(_QWORD *)g_pSecondTimerCallback )
  {
    *(_QWORD *)g_pSecondTimerCallback = a1;
    if ( !a1 )
      KillTimer(g_hWnd, 0x400u);
  }
  else if ( a1 )
  {
    *(_QWORD *)g_pSecondTimerCallback = a1;
    SetTimer(g_hWnd, 0x400u, 0x3E8u, Engine_TimerProc);
  }
}

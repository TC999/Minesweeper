void __fastcall Engine_TimerProc(HWND a1)
{
  if ( g_pSecondTimerCallback && *(_QWORD *)g_pSecondTimerCallback )
  {
    if ( !IsIconic(g_hWnd) )
      (*(void (**)(void))g_pSecondTimerCallback)();
  }
  else
  {
    KillTimer(g_hWnd, 0x400u);
  }
}

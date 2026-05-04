LRESULT __fastcall MouseProc(int code, WPARAM wParam, LPARAM lParam)
{
  if ( (_BYTE)g_bMediaCenter && code >= 0 )
    MCE_MouseMove();
  return CallNextHookEx(0, code, wParam, lParam);
}

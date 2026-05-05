void MCE_MouseMove(void)
{
  struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

  if ( g_bMouseHidden )
  {
    GetCursorPos(&Point);
    if ( Point.x != g_LastCursorPos.x || Point.y != g_LastCursorPos.y )
    {
      g_bMouseHidden = 0;
      ShowCursor(1);
    }
  }
  SetTimer(g_hWnd, 0x41Au, 0xBB8u, 0);
}

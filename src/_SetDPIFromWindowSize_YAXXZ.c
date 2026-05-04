void SetDPIFromWindowSize(void)
{
  unsigned int v0; // r11d
  bool v1; // cl
  struct tagRECT Rect; // [rsp+20h] [rbp-18h] BYREF

  GetWindowRect(g_hRenderWindow, &Rect);
  v0 = Rect.right - Rect.left;
  if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
  {
    if ( (v0 <= g_uiLayoutX || Rect.bottom - Rect.top <= g_uiLayoutY) && (!(_BYTE)g_bMediaCenter || v0 <= 0x320)
      || (v1 = 1, *((_BYTE *)g_pRenderManager + 165) != 1) )
    {
      v1 = 0;
    }
    Engine_SetDPIInternal(v1);
  }
}

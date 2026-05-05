char Engine_ResourceLoadFail(void)
{
  const unsigned __int16 *uFlags; // [rsp+30h] [rbp-28h]
  bool v2; // [rsp+38h] [rbp-20h]
  struct tagRECT Rect; // [rsp+40h] [rbp-18h] BYREF

  if ( !g_bDoubleDPI )
    goto LABEL_7;
  Log(0x10u, 580, "Engine.cpp", L"Dropping to low DPI");
  if ( (_BYTE)g_bMediaCenter )
  {
    *((_BYTE *)g_pRenderManager + 165) = 0;
  }
  else
  {
    LOBYTE(uFlags) = 0;
    DialogHelper::ShowMessageBox(0x385u, 0x373u, 1u, 0xFFFEu, 0, 0, uFlags, v2);
    GetWindowRect(g_hWnd, &Rect);
    SetWindowPos(g_hWnd, 0, Rect.left, Rect.top, g_uiMinWidth, g_uiMinHeight, 4u);
  }
  if ( !Engine_SetDPIInternal(0) )
  {
LABEL_7:
    Log(0x10u, 605, "Engine.cpp", L"Insufficient video memory to load the game");
    LOBYTE(uFlags) = 0;
    DialogHelper::ShowMessageBox(0x385u, 0x37Du, 1u, 0xFFFEu, 0, 0, uFlags, v2);
    LaunchMediaCenter((bool)g_bMediaCenter);
    ExitProcess(0);
  }
  return 1;
}

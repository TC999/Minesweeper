void Engine_LostFocus(void)
{
  Log(0x10u, L"Engine_LostFocus()");
  if ( bHadFocus )
  {
    if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
      (*(void (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 120LL))(g_pInterface);
    UserInterface::LostFocusInternal(g_pUserInterface);
  }
  if ( g_pCommonController )
    *((_BYTE *)g_pCommonController + 33) = 0;
  bHadFocus = 0;
}

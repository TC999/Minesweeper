void Engine_GotFocus(void)
{
  RenderManager *v0; // rcx

  Log(0x10u, L"Engine_GotFocus()");
  g_bPauseForLock = 0;
  if ( !bHadFocus )
  {
    if ( g_pUserInterface && !*((_BYTE *)g_pUserInterface + 300) )
      UserInterface::ProcessMouseMove(g_pUserInterface, 0);
    v0 = g_pRenderManager;
    if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
    {
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v0 + 88) = 1;
      RenderManager::Render(v0, 1);
      if ( (*((_DWORD *)g_pRenderManager + 53) & 0x1000) == 0 )
        RenderManager::Render(g_pRenderManager, 1);
      Engine_ResetTimer();
      (*(void (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 112LL))(g_pInterface);
    }
  }
  if ( g_pCommonController )
    *((_BYTE *)g_pCommonController + 33) = 1;
  bHadFocus = 1;
}

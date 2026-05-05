void RunEngine(void)
{
  DWORD v0; // ecx
  Timekeeping *v1; // rcx
  Timekeeping *v2; // rcx
  Timekeeping *v3; // rcx

  if ( g_bPauseForLock )
  {
    v0 = 100;
LABEL_18:
    SleepEx(v0, 0);
    return;
  }
  if ( (*((_DWORD *)g_pRenderManager + 53) & 0x1000) == 0 )
    RenderManager::Render(g_pRenderManager, 1);
  if ( IsIconic(g_hWnd)
    || g_bFocusPause && !bHadFocus
    || (Timekeeping::UpdateTimekeeping(v1), g_bDbgFramePauseOn)
    || !Timekeeping::Check30FPS(v2) )
  {
    v0 = 1;
    goto LABEL_18;
  }
  do
  {
    if ( !*(_BYTE *)g_pRenderManager )
    {
      Timer::Update(g_pTimer, 0.033330001);
      (*(void (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 152LL))(g_pInterface);
      (***((void (__fastcall ****)(_QWORD))g_pRenderManager + 15))(*((_QWORD *)g_pRenderManager + 15));
      UserInterface::StandardUpdate(g_pUserInterface, *((struct NodeBase **)g_pRenderManager + 15), 0.033330001);
    }
    if ( g_bDbgUseFramePause )
      Engine_ResetTimer();
  }
  while ( Timekeeping::Check30FPS(v3) );
  RenderManager::Render(g_pRenderManager, 1);
  if ( g_bDbgUseFramePause )
    g_bDbgFramePauseOn = 1;
}

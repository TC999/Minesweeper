char __fastcall Engine_SetDPIInternal(bool a1)
{
  __int64 v2; // rdx
  ResourceManager *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rbp
  RenderManager *v7; // rbx
  signed int v8; // r8d
  signed int v9; // edx
  RenderManager *v10; // rax
  void (__fastcall ***GameEvent)(_QWORD, __int64); // rbx

  if ( a1 != g_bDoubleDPI )
  {
    ShowWindow(g_hRenderWindow, 0);
    UpdateGameWindowTitle(1);
    RedrawWindow(g_hWnd, 0, 0, 0x107u);
    v3 = g_pResourceManager;
    g_bDoubleDPI = a1;
    if ( g_pResourceManager )
    {
      v4 = 0;
      if ( *((_DWORD *)g_pResourceManager + 6) )
      {
        v5 = 0;
        do
        {
          LOBYTE(v2) = a1;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v3 + 2) + v5) + 64LL))(
            *(_QWORD *)(*((_QWORD *)v3 + 2) + v5),
            v2);
          ++v4;
          v5 += 8;
        }
        while ( v4 < *((_DWORD *)v3 + 6) );
        v3 = g_pResourceManager;
      }
      ResourceManager::ReleaseDeviceDependentResources(v3);
      if ( !ResourceManager::RecreateDeviceDependentResources(g_pResourceManager) )
        return 0;
    }
    v7 = g_pRenderManager;
    if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
    {
      Log(2u, 513, "RenderManager.cpp", L"FlushDefaultTextures()");
      RenderManager::ReleaseDefaultResources(v7);
      if ( !RenderManager::RecreateDefaultResources(v7) )
        return 0;
      if ( !g_CurrentBackStyle )
      {
        v8 = g_uiLayoutY;
        v9 = g_uiLayoutX;
        if ( g_bDoubleDPI )
        {
          v8 = 2 * g_uiLayoutY;
          v9 = 2 * g_uiLayoutX;
        }
        RenderManager::SetResolution(g_pRenderManager, v9, v8);
      }
      v10 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v10 + 88) = 1;
    }
    CenterRenderWindow();
    ShowWindow(g_hRenderWindow, 5);
    InvalidateRect(g_hWnd, 0, 0);
    if ( g_pRenderManager )
    {
      GameEvent = (void (__fastcall ***)(_QWORD, __int64))Event::CreateGameEvent(37);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)g_pRenderManager + 15) + 24LL))(
        *((_QWORD *)g_pRenderManager + 15),
        GameEvent);
      if ( GameEvent )
        (**GameEvent)(GameEvent, 1);
    }
  }
  return 1;
}

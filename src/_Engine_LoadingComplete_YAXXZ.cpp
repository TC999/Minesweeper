void Engine_LoadingComplete(void)
{
  _DWORD *v0; // rbx
  DWORD TickCount; // eax
  DWORD v2; // ecx
  DWORD v3; // eax
  HANDLE *v4; // rbx
  HANDLE v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  HANDLE v7; // rcx
  HANDLE v8; // rcx

  if ( g_pRenderManager )
    RenderManager::Render(g_pRenderManager, 1);
  v0 = g_pSplash;
  if ( g_pSplash )
  {
    if ( *((_DWORD *)g_pSplash + 14) )
    {
      if ( *((_DWORD *)g_pSplash + 13) )
      {
        TickCount = GetTickCount();
        v2 = v0[13];
        v3 = TickCount - v0[14];
        if ( v3 < v2 )
          Sleep(v2 - v3);
      }
    }
  }
  ShowWindow(g_hRenderWindow, 5);
  ShowWindowInitial();
  v4 = (HANDLE *)g_pSplash;
  DialogHelper::m_hWnd = g_hWnd;
  if ( g_pSplash )
  {
    if ( *(_QWORD *)g_pSplash )
    {
      SendMessageW(*((HWND *)g_pSplash + 2), 0x10u, 0, 0);
      WaitForSingleObject(*v4, 0xBB8u);
      v4 = (HANDLE *)g_pSplash;
    }
    if ( v4 )
    {
      if ( *v4 )
        CloseHandle(*v4);
      v5 = v4[1];
      if ( v5 )
        CloseHandle(v5);
      v6 = (void (__fastcall ***)(_QWORD, __int64))v4[8];
      if ( v6 )
        (**v6)(v6, 1);
      v7 = v4[4];
      if ( v7 )
        LocalFree(v7);
      v8 = v4[5];
      if ( v8 )
        LocalFree(v8);
      operator delete(v4);
    }
    g_pSplash = 0;
  }
}

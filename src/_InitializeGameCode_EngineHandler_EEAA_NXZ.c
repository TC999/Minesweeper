char __fastcall EngineHandler::InitializeGameCode(EngineHandler *this)
{
  Game *v1; // rcx
  __int64 v2; // rdx
  HINSTANCE v3; // rcx
  __int64 v4; // rdx
  HMENU MenuW; // rbx
  HMENU Menu; // rax
  RenderManager *v7; // rcx

  if ( Game::SafeGetSingleton() && Game::InitUi(Game::G) )
  {
    v1 = Game::G;
    v2 = -*((_QWORD *)g_pAudio + 2);
    *((_BYTE *)Game::G + 40) = *((_QWORD *)g_pAudio + 2) != 0 ? *((_BYTE *)Game::G + 42) : 0;
    Game::CacheSounds(v1, v2);
    Game::SetAnimationsEnabled(Game::G, *((_BYTE *)Game::G + 43));
    if ( *((_DWORD *)Game::G + 30) == 1 && *((_DWORD *)Game::G + 48) == 1 )
    {
      v3 = g_hInstance;
      v4 = 165;
      if ( !g_bDebugEnabled )
        v4 = 166;
    }
    else
    {
      if ( !g_bDebugEnabled )
      {
LABEL_10:
        v7 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 40) = 1;
        *((_DWORD *)v7 + 2) = -16777216;
        Engine_ResetTimer();
        return 1;
      }
      v3 = g_hInstance;
      v4 = 164;
    }
    MenuW = LoadMenuW(v3, (LPCWSTR)v4);
    Menu = GetMenu(g_hWnd);
    DestroyMenu(Menu);
    SetMenu(g_hWnd, MenuW);
    DrawMenuBar(g_hWnd);
    goto LABEL_10;
  }
  return 0;
}

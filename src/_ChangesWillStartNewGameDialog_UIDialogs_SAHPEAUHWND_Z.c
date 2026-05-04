_BOOL8 __fastcall UIDialogs::ChangesWillStartNewGameDialog(HWND this)
{
  HWND v3; // rdx
  bool v4; // r8

  if ( !*(_DWORD *)(*((_QWORD *)Game::G + 3) + 24LL) )
    return 1;
  RenderManager::Render(g_pRenderManager, 1);
  LOBYTE(v3) = (_BYTE)g_bMediaCenter;
  return SharedDialogs::OptionsChanged::Show((SharedDialogs::OptionsChanged *)this, v3, v4);
}

void __fastcall Game::ToggleChangeSettingsMenus(Game *this, char a2)
{
  UINT v2; // ebx

  if ( g_hMainMenu )
  {
    v2 = a2 != 0 ? 0 : 3;
    EnableMenuItem(g_hMainMenu, 0x9C42u, v2);
    EnableMenuItem(g_hMainMenu, 0x9C44u, v2);
  }
}

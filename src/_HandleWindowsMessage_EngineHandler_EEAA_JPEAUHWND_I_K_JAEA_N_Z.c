// Hidden C++ exception states: #wind=1
__int64 __fastcall EngineHandler::HandleWindowsMessage(
        EngineHandler *this,
        HWND a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        bool *a6)
{
  Game *v8; // rcx
  UIBoardCanvas *v9; // rbx
  unsigned __int16 *v10; // rbx
  _QWORD v11[2]; // [rsp+28h] [rbp-20h] BYREF
  LPCWSTR lpString; // [rsp+38h] [rbp-10h]

  *a6 = 0;
  switch ( a3 )
  {
    case 1u:
      g_hMainMenu = GetMenu(a2);
      v11[0] = 0;
      v11[1] = 0;
      lpString = 0;
      v10 = LocalizeMessage(L"|44037|UI|Minesweeper//Title");
      Str::operator=(v11, v10);
      LocalFree(v10);
      SetWindowTextW(a2, lpString);
      operator delete((void *)lpString);
      goto LABEL_39;
    case 5u:
      if ( a4 == 1 )
        UITile::ClearRumble();
      return 1;
    case 0x100u:
      if ( g_pRenderManager )
      {
        if ( *((_DWORD *)g_pRenderManager + 53) )
        {
          v8 = Game::G;
          if ( Game::G )
          {
            if ( a4 == 27 )
            {
              if ( UITile::_mouseDragNode || UITile::_bothButtonsWereDown )
              {
                UITile::_mouseDragNode = 0;
                UITile::_bothButtonsWereDown = 0;
                UITile::_mouseDownWasCanceled = 1;
                v9 = (UIBoardCanvas *)*((_QWORD *)Game::G + 2);
                if ( !v9 )
                  SharedDialogs::FatalDialog::Show(0);
                UIBoardCanvas::UpdateSecondaryRevealPreview(*((UIBoardCanvas **)Game::G + 2), 0);
                UIBoardCanvas::MakeAllTilesDirty(v9);
                UIBoardCanvas::ShowTopsOnAllCoveredSquaresExcept(v9, 0);
                v8 = Game::G;
                if ( !*((_BYTE *)Game::G + 46) )
                {
                  UserInterface::ClearFocus(g_pUserInterface);
                  UserInterface::ProcessMouseMove(g_pUserInterface, 1);
                  v8 = Game::G;
                }
              }
            }
            else if ( a4 != 32 )
            {
              if ( (_WORD)a4 == 49 || a4 == 93 )
              {
                Game::RequestFlagToggle(Game::G);
                *a6 = 1;
                return 0;
              }
              return 1;
            }
            Game::RequestSkipAnimation(v8);
            return 0;
          }
        }
      }
      return 1;
    case 0x104u:
      if ( Game::G && a4 == 121 && (unsigned __int16)GetKeyState(16) >> 8 && Game::RequestFlagToggle(Game::G) )
      {
        *a6 = 1;
        return 0;
      }
      return 1;
  }
  if ( a3 > 0x104 )
  {
    if ( a3 <= 0x106 )
    {
      if ( a4 == 121 && (unsigned __int16)GetKeyState(16) >> 8 )
      {
        *a6 = 1;
        return 0;
      }
      return 1;
    }
    if ( a3 == 273 )
    {
      if ( g_pRenderManager )
      {
        if ( *((_DWORD *)g_pRenderManager + 53) )
          OnCommand(a2, (unsigned __int16)a4, a5, WORD1(a4), -2);
      }
      return 1;
    }
    if ( a3 == 529 )
LABEL_39:
      GameAudio::StopAllSounds(this);
  }
  return 1;
}

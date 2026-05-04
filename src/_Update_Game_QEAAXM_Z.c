void __fastcall Game::Update(Game *this, float a2)
{
  Game *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int *v5; // r9
  __int64 v6; // rcx
  float v7; // xmm1_4
  GameAudio *v8; // rcx
  HWND v9; // rdx
  HWND v10; // r8
  __int64 v11; // rcx
  UIBoardCanvas *v12; // rcx
  GameAudio *v13; // rcx
  int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v2 = Game::G;
  if ( !*((_BYTE *)Game::G + 292) )
  {
    if ( !Game::Load(Game::G, 0, 1, *((_BYTE *)Game::G + 271)) )
      Game::DoNewBoardAnimation(v2, v3, v4, v5);
    if ( *((_BYTE *)v2 + 271) )
    {
      UIBoardCanvas::ShowTipMessage(*((UIBoardCanvas **)v2 + 2), L"Start");
      *((_BYTE *)v2 + 271) = 0;
    }
    Game::RequestSetState((__int64)v2, 1);
    *((_BYTE *)v2 + 292) = 1;
    return;
  }
  if ( *((_DWORD *)Game::G + 66) == 3 * (*((_DWORD *)Game::G + 66) / 3) || !(rand() % 2) )
  {
    *((_BYTE *)v2 + 268) = 0;
    *((_DWORD *)v2 + 66) = 1;
  }
  else
  {
    ++*((_DWORD *)v2 + 66);
  }
  Board::Update(*((Board **)v2 + 3), 0.033333335, *((struct UIBoardCanvas **)v2 + 2));
  if ( *((_DWORD *)v2 + 14) != 1 )
  {
    if ( *((_DWORD *)v2 + 14) == 3 )
    {
      v6 = *((_QWORD *)v2 + 2);
      if ( *(_DWORD *)(v6 + 328) )
      {
        if ( !*(_DWORD *)(v6 + 48) )
          return;
      }
      else if ( !*(_DWORD *)(v6 + 48) )
      {
        v7 = *((float *)v2 + 15);
        if ( v7 > 0.0 )
        {
          *((float *)v2 + 15) = v7 - 0.033333335;
          return;
        }
        UIBoardCanvas::Refresh((UIBoardCanvas *)v6, 1);
        Game::RequestSetState((__int64)v2, 2);
        Game::RemoveSavedGame(v2);
        RenderManager::Render(g_pRenderManager, 1);
        GameAudio::StopAllSounds(v8);
        v9 = g_hWnd;
        LOBYTE(v14) = 0;
        v10 = (HWND)UIDialogs::WinDlgProc;
        if ( g_Flowerbed )
          v11 = 167;
        else
          v11 = 137;
        goto LABEL_31;
      }
      UIBoardCanvas::disarmTilesAtYPos(
        (UIBoardCanvas *)v6,
        (*(_DWORD *)(*(_QWORD *)(v6 + 72) + 12LL) - *(_DWORD *)(*(_QWORD *)(v6 + 128) + 12LL)) / *(_DWORD *)(v6 + 272));
      return;
    }
    if ( *((_DWORD *)v2 + 14) != 4 )
      return;
    v12 = (UIBoardCanvas *)*((_QWORD *)v2 + 2);
    if ( *((_DWORD *)v12 + 76) || *((_DWORD *)v12 + 70) || *((_DWORD *)v12 + 82) )
      return;
    UIBoardCanvas::Refresh(v12, 1);
    Game::RequestSetState((__int64)v2, 2);
    Game::RemoveSavedGame(v2);
    UITile::ClearRumble();
    RenderManager::Render(g_pRenderManager, 1);
    GameAudio::StopAllSounds(v13);
    v9 = g_hWnd;
    LOBYTE(v14) = 0;
    v10 = (HWND)UIDialogs::LoseDlgProc;
    v11 = 136;
LABEL_31:
    DialogHelper::DialogBoxMCE(
      (LPCWSTR)v11,
      v9,
      v10,
      (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))2,
      v14,
      0,
      0,
      v15);
    return;
  }
  if ( !*((_BYTE *)v2 + 294) && (int)Board::GetNumTilesActuallyPlayed(*((Board **)v2 + 3)) > 0 )
  {
    *((_BYTE *)v2 + 294) = 1;
    Engine_RegisterSecondTimer(Game::OnSecondElapsed);
    Game::OnSecondElapsed();
  }
  UIBoardCanvas::Update(*((UIBoardCanvas **)v2 + 2));
}

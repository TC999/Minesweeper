void __fastcall OnCommand(HWND a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  Game *v10; // rbx
  UIBoardCanvas *v11; // rcx
  GameAudio *v12; // rcx
  HWND v13; // r8
  __int64 v14; // rcx
  GameAudio *v15; // rcx
  ChangeAppearanceDialog *v16; // rcx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  HMODULE ModuleHandleW; // rax
  Game *v25; // rcx
  int v26; // r8d
  int v27; // edx
  GameAudio *v28; // rcx
  int v29; // [rsp+20h] [rbp-1088h]
  __int64 v30; // [rsp+38h] [rbp-1070h]
  WCHAR Buffer[2088]; // [rsp+40h] [rbp-1068h] BYREF

  if ( a2 <= 40015 )
  {
    if ( a2 == 40015 )
    {
      Game::DisarmBoard(Game::G);
      return;
    }
    v2 = a2 - 40002;
    if ( !v2 )
    {
      RenderManager::Render(g_pRenderManager, 1);
      GameAudio::StopAllSounds(v15);
      ChangeAppearanceDialog::Show(v16);
      return;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      RenderManager::Render(g_pRenderManager, 1);
      GameAudio::StopAllSounds(v12);
      v13 = (HWND)UIDialogs::StatsDlgProc;
      v14 = 101;
LABEL_42:
      LOBYTE(v29) = 0;
      DialogHelper::DialogBoxMCE(
        (LPCWSTR)v14,
        g_hWnd,
        v13,
        (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))2,
        v29,
        0,
        0,
        v30);
      return;
    }
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 2;
              if ( v9 )
              {
                if ( v9 == 1 )
                {
                  v10 = Game::G;
                  v11 = (UIBoardCanvas *)*((_QWORD *)Game::G + 2);
                  *((_BYTE *)v11 + 64) = *((_BYTE *)v11 + 64) == 0;
                  UIBoardCanvas::MakeAllTilesDirty(v11);
                  *(_BYTE *)(*((_QWORD *)v10 + 2) + 276LL) = 1;
                }
              }
              else
              {
                g_cheatKeysEnabled = !g_cheatKeysEnabled;
              }
            }
            else
            {
              Engine_ShowHelp();
            }
          }
          else
          {
            UIDialogs::StartAboutDialog();
          }
          return;
        }
        goto LABEL_43;
      }
LABEL_40:
      SendMessageW(a1, 0x10u, 0, 0);
      return;
    }
LABEL_41:
    RenderManager::Render(g_pRenderManager, 1);
    GameAudio::StopAllSounds(v28);
    v13 = (HWND)UIDialogs::OptionDlgProc;
    v14 = 147;
    goto LABEL_42;
  }
  v17 = a2 - 40016;
  if ( !v17 )
  {
LABEL_43:
    if ( *(int *)(*((_QWORD *)Game::G + 3) + 28LL) > 0 && *((_DWORD *)Game::G + 14) == 1 )
      UIDialogs::StartNewGameDialog();
    else
      Game::Reset(Game::G, 1, 0, 1);
    return;
  }
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_41;
  v19 = v18 - 2;
  if ( !v19 )
    goto LABEL_40;
  v20 = v19 - 1;
  if ( !v20 )
  {
    v25 = Game::G;
    if ( !*((_DWORD *)Game::G + 17) )
      return;
    v27 = 0;
    goto LABEL_38;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    v25 = Game::G;
    if ( *((_DWORD *)Game::G + 17) == 1 )
      return;
    v27 = 1;
LABEL_38:
    v26 = *((_DWORD *)v25 + 16);
    goto LABEL_39;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v25 = Game::G;
    if ( !*((_DWORD *)Game::G + 16) )
      return;
    v26 = 0;
    goto LABEL_31;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    v25 = Game::G;
    if ( *((_DWORD *)Game::G + 16) == 1 )
      return;
    v26 = 1;
LABEL_31:
    v27 = *((_DWORD *)v25 + 17);
LABEL_39:
    Game::SetArt(v25, v27, v26, 1);
    return;
  }
  if ( v23 == 2 )
  {
    ModuleHandleW = GetModuleHandleW(0);
    if ( LoadStringW(ModuleHandleW, 0xA9u, Buffer, 2084) > 0 )
      ShellExecuteW(0, L"open", Buffer, 0, 0, 1);
  }
}

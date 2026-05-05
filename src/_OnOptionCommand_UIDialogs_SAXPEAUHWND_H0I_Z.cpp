void __fastcall UIDialogs::OnOptionCommand(HWND this, int a2, HWND a3, int a4)
{
  HWND v5; // rdi
  _DWORD *v6; // r12
  int v7; // r14d
  int v8; // r15d
  int v9; // ebp
  HWND v10; // rbx
  BOOL v11; // ebx
  HWND DlgItem; // rax
  HWND v13; // rax
  HWND v14; // rax
  HWND v15; // rax
  HWND v16; // rax
  HWND v17; // rax
  int v18; // ebx
  int IntFromEditControl; // esi
  int v20; // ebp
  int v21; // eax
  Game *v22; // rcx
  int v23; // r12d
  int started; // eax
  UINT v25; // eax
  Game *v26; // rcx
  bool v27; // zf
  Audio *v28; // rax
  __int64 v29; // rdx
  UINT v30; // eax
  Game *v31; // rcx
  UINT v32; // eax
  Game *v33; // rcx
  __int64 v34; // rcx

  v5 = this;
  switch ( a2 )
  {
    case 1:
      v18 = *((_DWORD *)Game::G + 69);
      if ( IsDlgButtonChecked(this, 1014) == 1 )
      {
        v18 = 1;
      }
      else if ( IsDlgButtonChecked(v5, 1015) == 1 )
      {
        v18 = 2;
      }
      else if ( IsDlgButtonChecked(v5, 1016) == 1 )
      {
        v18 = 3;
      }
      else if ( IsDlgButtonChecked(v5, 1010) == 1 )
      {
        v18 = 4;
      }
      IntFromEditControl = UIDialogs::GetIntFromEditControl(v5, 0x3F4u);
      v20 = UIDialogs::GetIntFromEditControl(v5, 0x3F3u);
      v21 = UIDialogs::GetIntFromEditControl(v5, 0x3FBu);
      v22 = Game::G;
      v23 = v21;
      if ( v18 == 4 )
      {
        if ( *((_DWORD *)Game::G + 69) != 4
          || v20 != *((_DWORD *)Game::G + 70)
          || v21 != *((_DWORD *)Game::G + 71)
          || IntFromEditControl != *((_DWORD *)Game::G + 72) )
        {
          if ( !UIDialogs::ValidateOptions(v5) )
            return;
          v22 = Game::G;
          started = 1;
          if ( *((_DWORD *)Game::G + 14) == 1 )
          {
            started = UIDialogs::ChangesWillStartNewGameDialog(v5);
            v22 = Game::G;
          }
          *((_DWORD *)v22 + 69) = 4;
          *((_DWORD *)v22 + 70) = v20;
          *((_DWORD *)v22 + 71) = v23;
          *((_DWORD *)v22 + 72) = IntFromEditControl;
          goto LABEL_39;
        }
      }
      else if ( v18 != *((_DWORD *)Game::G + 69) )
      {
        started = 1;
        if ( *((_DWORD *)Game::G + 14) == 1 )
        {
          started = UIDialogs::ChangesWillStartNewGameDialog(v5);
          v22 = Game::G;
        }
        *((_DWORD *)v22 + 69) = v18;
LABEL_39:
        if ( started == 1 )
          Game::Reset(v22, 1, 0, 1);
      }
      v25 = IsDlgButtonChecked(v5, 1017);
      v26 = Game::G;
      v27 = v25 == 1;
      v28 = g_pAudio;
      *((_BYTE *)Game::G + 42) = v27;
      v29 = -*((_QWORD *)v28 + 2);
      *((_BYTE *)v26 + 40) = *((_QWORD *)v28 + 2) != 0 && v27;
      Game::CacheSounds(v26, v29);
      v30 = IsDlgButtonChecked(v5, 1002);
      v31 = Game::G;
      *((_BYTE *)Game::G + 43) = v30 == 1;
      Game::SetAnimationsEnabled(v31, v30 == 1);
      *((_BYTE *)Game::G + 44) = IsDlgButtonChecked(v5, 1013) == 1;
      *((_BYTE *)Game::G + 270) = IsDlgButtonChecked(v5, 1020) == 1;
      v32 = IsDlgButtonChecked(v5, 1018);
      v33 = Game::G;
      LOBYTE(v32) = v32 == 1;
      *((_BYTE *)Game::G + 45) = v32;
      if ( !(_BYTE)v32 )
      {
        v34 = *((_QWORD *)v33 + 2);
        if ( v34 )
          TipManager::HideTip(*(TipManager **)(v34 + 264), 0);
      }
      *((_BYTE *)Game::G + 272) = IsDlgButtonChecked(v5, 1044) == 1;
      this = v5;
      goto LABEL_45;
    case 2:
LABEL_45:
      DialogHelper::DismissDialog(this, 0, (int)a3);
      return;
    case 1010:
      goto LABEL_16;
  }
  if ( a2 <= 1010 )
    return;
  if ( a2 > 1012 )
  {
    if ( a2 <= 1013 )
      return;
    if ( a2 > 1016 )
    {
      if ( a2 != 1019 )
        return;
      goto LABEL_9;
    }
LABEL_16:
    if ( a4 == 6 )
    {
      v11 = a2 == 1010;
      DlgItem = GetDlgItem(this, 1011);
      EnableWindow(DlgItem, v11);
      v13 = GetDlgItem(v5, 1019);
      EnableWindow(v13, v11);
      v14 = GetDlgItem(v5, 1012);
      EnableWindow(v14, v11);
      v15 = GetDlgItem(v5, 1041);
      EnableWindow(v15, v11);
      v16 = GetDlgItem(v5, 1042);
      EnableWindow(v16, v11);
      v17 = GetDlgItem(v5, 1043);
      EnableWindow(v17, v11);
    }
    return;
  }
LABEL_9:
  v6 = (_DWORD *)*((_QWORD *)Game::G + 3);
  v7 = UIDialogs::GetIntFromEditControl(this, 0x3F3u);
  v8 = UIDialogs::GetIntFromEditControl(v5, 0x3FBu);
  v9 = UIDialogs::GetIntFromEditControl(v5, 0x3F4u);
  if ( a4 == 512 )
  {
    v10 = GetDlgItem(v5, 2);
    if ( GetFocus() == v10 )
      return;
    UIDialogs::ValidateOptions(v5);
  }
  if ( v7 != v6[4] || v8 != v6[3] || v9 != v6[2] )
  {
    CheckDlgButton(v5, 1014, 0);
    CheckDlgButton(v5, 1015, 0);
    CheckDlgButton(v5, 1016, 0);
    CheckDlgButton(v5, 1010, 1u);
  }
}

void __fastcall UIDialogs::UpdateStatsDlg(HWND hDlg, HWND hWnd)
{
  int v4; // eax
  __int64 v5; // r14
  WCHAR *v6; // rbx
  WCHAR *v7; // rbx
  unsigned int PercentWon; // eax
  WCHAR *v9; // rbx
  WCHAR *v10; // rbx
  WCHAR *v11; // rbx
  __int64 v12; // rdx
  WCHAR *v13; // rbx
  int v14; // ebp
  __int64 v15; // r12
  Str *v16; // rax
  __int64 v17; // rdx
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // si
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 FormattedScore; // rax
  _QWORD *v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  bool v27; // zf
  char v28; // al
  bool v29; // si
  HWND DlgItem; // rbx
  HWND v31; // rax
  Str *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-68h]
  bool v35; // [rsp+28h] [rbp-60h]
  _BYTE v36[16]; // [rsp+30h] [rbp-58h] BYREF
  void *Block; // [rsp+40h] [rbp-48h]
  _BYTE v38[24]; // [rsp+48h] [rbp-40h] BYREF

  v4 = SendMessageW(hWnd, 0x188u, 0, 0);
  if ( v4 == -1 )
  {
    v32 = Str::Str((Str *)v38, L"No list item selected");
    LOBYTE(v33) = 1;
    StrErr(v32, v33);
    return;
  }
  v5 = *(_QWORD *)(*((_QWORD *)Game::G + 32) + 8LL * ((unsigned int)SendMessageW(hWnd, 0x199u, v4, 0) - 1));
  v6 = LocalizeMessage(L"|44427|UI_STATSDLG|Games played: %1!d!//games played", *(unsigned int *)(v5 + 12));
  SetDlgItemTextW(hDlg, 1053, v6);
  LocalFree(v6);
  v7 = LocalizeMessage(L"|55748|UI_STATSDLG|Games won: %1!d!//games won", *(unsigned int *)(v5 + 8));
  SetDlgItemTextW(hDlg, 1054, v7);
  LocalFree(v7);
  PercentWon = GameStat::GetPercentWon((GameStat *)v5);
  v9 = LocalizeMessage(L"|53163|UI_STATSDLG|Win percentage: %1!d!%%//percent won", PercentWon);
  SetDlgItemTextW(hDlg, 1056, v9);
  LocalFree(v9);
  v10 = LocalizeMessage(L"|61345|UI_STATSDLG|Longest losing streak: %1!d!//most losses", *(unsigned int *)(v5 + 32));
  SetDlgItemTextW(hDlg, 1050, v10);
  LocalFree(v10);
  v11 = LocalizeMessage(L"|58458|UI_STATSDLG|Longest winning streak: %1!d!//most wins", *(unsigned int *)(v5 + 28));
  SetDlgItemTextW(hDlg, 1048, v11);
  LocalFree(v11);
  v12 = *(unsigned int *)(v5 + 36);
  if ( !*(_BYTE *)(v5 + 40) )
    v12 = (unsigned int)-(int)v12;
  v13 = LocalizeMessage(L"|43725|UI_STATSDLG|Current streak: %1!d!// current streak", v12);
  SetDlgItemTextW(hDlg, 1052, v13);
  LocalFree(v13);
  v14 = 0;
  v15 = 0;
  do
  {
    if ( v14 )
    {
      switch ( v14 )
      {
        case 1:
          v18 = 1038;
          v19 = 1042;
          break;
        case 2:
          v18 = 1039;
          v19 = 1043;
          break;
        case 3:
          v18 = 1040;
          v19 = 1044;
          break;
        case 4:
          v18 = 1045;
          v19 = 1046;
          break;
        default:
          v16 = Str::Str((Str *)v38, L"Too many high scores for dialog");
          LOBYTE(v17) = 1;
          StrErr(v16, v17);
          goto LABEL_19;
      }
    }
    else
    {
      v18 = 1037;
      v19 = 1041;
    }
    v20 = *(_QWORD *)(v5 + 64);
    v21 = *(_QWORD *)(v15 + v20);
    if ( *(_DWORD *)(v21 + 8) )
    {
      FormattedScore = HighScore::GetFormattedScore(*(_QWORD *)(v15 + v20), (__int64)v36);
      SetDlgItemTextW(hDlg, v18, *(LPCWSTR *)(FormattedScore + 16));
      operator delete(Block);
      LOBYTE(v34) = 0;
      DialogHelper::SetStaticTextDate(hDlg, (HWND)v19, 0, *(const unsigned __int16 **)(v21 + 16), v34, v35);
    }
    else
    {
      SetDlgItemTextW(hDlg, v18, &String);
      SetDlgItemTextW(hDlg, v19, &String);
    }
LABEL_19:
    ++v14;
    v15 += 8;
  }
  while ( v14 < 5 );
  v23 = (_QWORD *)*((_QWORD *)Game::G + 32);
  v24 = (_DWORD *)*v23;
  if ( *(_DWORD *)(*v23 + 8LL)
    || v24[3]
    || v24[4]
    || v24[5]
    || v24[6]
    || v24[7]
    || v24[8]
    || v24[9]
    || (v25 = (_DWORD *)v23[1], v25[2])
    || v25[3]
    || v25[4]
    || v25[5]
    || v25[6]
    || v25[7]
    || v25[8]
    || v25[9]
    || (v26 = (_DWORD *)v23[2], v26[2])
    || v26[3]
    || v26[4]
    || v26[5]
    || v26[6]
    || v26[7]
    || v26[8]
    || (v27 = v26[9] == 0, v28 = 1, !v27) )
  {
    v28 = 0;
  }
  v29 = v28 == 0;
  DlgItem = GetDlgItem(hDlg, 1001);
  if ( !v29 && GetFocus() == DlgItem )
  {
    v31 = GetDlgItem(hDlg, 1018);
    PostMessageW(hDlg, 0x28u, (WPARAM)v31, 1);
  }
  EnableWindow(DlgItem, v29);
}

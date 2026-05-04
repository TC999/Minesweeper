// Hidden C++ exception states: #wind=1
__int64 __fastcall UIDialogs::StatsDlgProc(HWND a1, int a2, __int16 a3, HWND a4)
{
  int v5; // edx
  HWND v6; // rdx
  __int64 v7; // rdi
  HWND DlgItem; // rax
  HWND v10; // r12
  unsigned int i; // ebp
  int v12; // eax
  HWND v13; // rax
  bool v14; // al
  bool v15; // bl
  WCHAR *v16; // rbx
  _BYTE v17[16]; // [rsp+28h] [rbp-40h] BYREF
  void *Block; // [rsp+38h] [rbp-30h]
  _BYTE v19[16]; // [rsp+40h] [rbp-28h] BYREF
  LPARAM lParam; // [rsp+50h] [rbp-18h]

  v5 = a2 - 16;
  if ( !v5 )
  {
    DialogHelper::DismissDialog(a1, 0, a3);
    return 0;
  }
  v6 = (HWND)(unsigned int)(v5 - 256);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      switch ( a3 )
      {
        case 2:
          DialogHelper::DismissDialog(a1, 0, a3);
          break;
        case 1001:
          UIDialogs::StartResetStatsDialog(a1);
          v7 = 0;
          if ( UIDialogs::ResetGameStats )
          {
            do
            {
              GameStat::Reset(*(GameStat **)(*((_QWORD *)Game::G + 32) + v7), 1);
              v7 += 8;
            }
            while ( v7 <= 16 );
          }
          DlgItem = GetDlgItem(a1, 1018);
          UIDialogs::UpdateStatsDlg(a1, DlgItem);
          break;
        case 1018:
          UIDialogs::UpdateStatsDlg(a1, a4);
          break;
      }
      return 1;
    }
    return 0;
  }
  DialogHelper::CenterDialog(a1, v6);
  v10 = GetDlgItem(a1, 1018);
  for ( i = 0; i < 3; ++i )
  {
    EDifficultyToLocalizedStr((Str *)v19, i + 1);
    SendMessageW(v10, 0x180u, 0, lParam);
    SendMessageW(v10, 0x19Au, i, i + 1);
    operator delete((void *)lParam);
  }
  v12 = *(_DWORD *)(*((_QWORD *)Game::G + 3) + 36LL);
  if ( v12 == 4 )
    v12 = 1;
  SendMessageW(v10, 0x186u, v12 - 1, 0);
  v13 = GetDlgItem(a1, 1018);
  PostMessageW(a1, 0x28u, (WPARAM)v13, 1);
  RequestGetUsername(v17, 64);
  Str::Str((Str *)v19, &String);
  if ( Block )
    v14 = Str::Equals((Str *)v17, (const struct Str *)v19);
  else
    v14 = 0;
  v15 = !v14;
  operator delete((void *)lParam);
  if ( v15 )
    v16 = LocalizeMessage(
            L"|47675|UI_STATS|Minesweeper Statistics - %1//statistics dialog title (with username)",
            Block);
  else
    v16 = LocalizeMessage(L"|57833|UI_STATS|Minesweeper Statistics//statistics dialog title (no username)", Block);
  SetWindowTextW(a1, v16);
  LocalFree(v16);
  UIDialogs::UpdateStatsDlg(a1, v10);
  operator delete(Block);
  return 0;
}

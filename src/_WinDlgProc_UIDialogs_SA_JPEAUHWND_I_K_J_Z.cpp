// Hidden C++ exception states: #wind=1
__int64 __fastcall UIDialogs::WinDlgProc(HWND a1, int a2, __int64 a3, HWND a4)
{
  int v5; // edx
  int v6; // edx
  HWND v7; // rdx
  WCHAR *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  WCHAR *v12; // rbx
  WCHAR *v13; // rbx
  unsigned int PercentWon; // eax
  WCHAR *v15; // rbx
  WCHAR *v16; // rbx
  float v17; // xmm0_4
  WCHAR *v18; // rbx
  HWND v19; // rax
  HWND DlgItem; // rbx
  LONG WindowLongW; // eax
  HWND v22; // rax
  HWND v23; // rax
  HWND v24; // rax
  HWND v25; // rax
  HWND v26; // rax
  HWND v27; // rax
  HMODULE ModuleHandleW; // rax
  LONG top; // r11d
  Game *v30; // rcx
  int v31; // r8d
  __int64 v32; // [rsp+20h] [rbp-10B8h]
  bool nShowCmd; // [rsp+28h] [rbp-10B0h]
  __time64_t Time; // [rsp+30h] [rbp-10A8h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-10A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1070h]
  WCHAR Buffer[2088]; // [rsp+70h] [rbp-1068h] BYREF

  v36 = -2;
  v5 = a2 - 16;
  if ( v5 )
  {
    v6 = v5 - 62;
    if ( !v6 )
    {
      if ( a3 == 1052 && a4 && (*((_DWORD *)a4 + 4) == -4 || *((_DWORD *)a4 + 4) == -2) )
      {
        ModuleHandleW = GetModuleHandleW(0);
        if ( LoadStringW(ModuleHandleW, 0xA9u, Buffer, 2084) > 0 )
        {
          ShellExecuteW(0, L"open", Buffer, 0, 0, 1);
          return 1;
        }
      }
      return 0;
    }
    v7 = (HWND)(unsigned int)(v6 - 194);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        UIDialogs::OnWinCommand(a1, (unsigned __int16)a3, a4);
        return 1;
      }
      return 0;
    }
    DialogHelper::CenterDialog(a1, v7);
    memset(&wndpl, 0, 24);
    Str::Format((Str *)&wndpl, L"|43236|CLA_UI_dialog|Game Won// dialog for winning");
    v9 = LocalizeMessage(*(const unsigned __int16 **)&wndpl.ptMinPosition.y);
    SetWindowTextW(a1, v9);
    LocalFree(v9);
    v10 = *((_QWORD *)Game::G + 3);
    if ( *(_DWORD *)(v10 + 36) == 4 )
    {
      DlgItem = GetDlgItem(a1, 1047);
      WindowLongW = GetWindowLongW(DlgItem, -16);
      SetWindowLongW(DlgItem, -16, WindowLongW | 0x201);
      v22 = GetDlgItem(a1, 1022);
      ShowWindow(v22, 0);
      v23 = GetDlgItem(a1, 1023);
      ShowWindow(v23, 0);
      v24 = GetDlgItem(a1, 1024);
      ShowWindow(v24, 0);
      v25 = GetDlgItem(a1, 1021);
      ShowWindow(v25, 0);
      v26 = GetDlgItem(a1, 1025);
      ShowWindow(v26, 0);
      v27 = GetDlgItem(a1, 1020);
      ShowWindow(v27, 0);
    }
    else
    {
      v11 = *(_QWORD *)(*((_QWORD *)Game::G + 32) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 36) - 1));
      v12 = LocalizeMessage(L"|59264|UI_WINDLG|Games played: %1!d!//games played", *(unsigned int *)(v11 + 12));
      SetDlgItemTextW(a1, 1022, v12);
      LocalFree(v12);
      v13 = LocalizeMessage(L"|59196|UI_WINDLG|Games won: %1!d!//games won", *(unsigned int *)(v11 + 8));
      SetDlgItemTextW(a1, 1023, v13);
      LocalFree(v13);
      PercentWon = GameStat::GetPercentWon((GameStat *)v11);
      v15 = LocalizeMessage(L"|55124|UI_WINDLG|Percentage: %1!d!%%//percent won", PercentWon);
      SetDlgItemTextW(a1, 1024, v15);
      LocalFree(v15);
      v16 = LocalizeMessage(
              L"|52894|UI_WINDLG|Best time: %1!d! seconds//best time (sec)",
              *(unsigned int *)(**(_QWORD **)(v11 + 64) + 8LL));
      SetDlgItemTextW(a1, 1021, v16);
      LocalFree(v16);
      _time64(&Time);
      LOBYTE(v32) = 1;
      DialogHelper::SetStaticTextDate(
        a1,
        (HWND)0x401,
        L"|49826|UI_WINDLG|Date: %1//current date",
        (const unsigned __int16 *)Time,
        v32,
        nShowCmd);
      v17 = floorf(*(float *)(*((_QWORD *)Game::G + 3) + 32LL));
      v18 = LocalizeMessage(L"|63615|UI_WINDLG|Time: %1!d! seconds//time (sec)", (unsigned int)(int)v17);
      SetDlgItemTextW(a1, 1020, v18);
      LocalFree(v18);
      if ( *((_BYTE *)Game::G + 293) )
      {
        v19 = GetDlgItem(a1, 1046);
        ShowWindow(v19, 5);
      }
    }
    operator delete(*(void **)&wndpl.ptMinPosition.y);
    return 1;
  }
  else
  {
    wndpl.length = 44;
    GetWindowPlacement(a1, &wndpl);
    top = wndpl.rcNormalPosition.top;
    v30 = Game::G;
    *((_DWORD *)Game::G + 12) = wndpl.rcNormalPosition.left;
    *((_DWORD *)v30 + 13) = top;
    Game::Reset(v30, 1, 0, 1);
    DialogHelper::DismissDialog(a1, 0, v31);
    return 1;
  }
}

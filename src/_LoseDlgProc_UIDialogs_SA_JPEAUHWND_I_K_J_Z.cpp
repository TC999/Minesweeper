// Hidden C++ exception states: #wind=1
__int64 __fastcall UIDialogs::LoseDlgProc(HWND a1, int a2, __int64 a3, HWND a4)
{
  int v5; // edx
  int v6; // edx
  HWND v7; // rdx
  WCHAR *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  WCHAR *v12; // rbx
  WCHAR *v13; // rbx
  unsigned int PercentWon; // eax
  WCHAR *v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rcx
  WCHAR *v18; // rbx
  __int64 v19; // rbx
  float v20; // xmm0_4
  WCHAR *v21; // rbx
  float v22; // xmm0_4
  HWND v23; // rax
  HWND v24; // rax
  HWND DlgItem; // rbx
  LONG WindowLongW; // eax
  HWND v27; // rax
  HWND v28; // rax
  HWND v29; // rax
  HWND v30; // rax
  HWND v31; // rax
  HWND v32; // rax
  HMODULE ModuleHandleW; // rax
  LONG top; // r11d
  Game *v35; // rcx
  int v36; // r8d
  __int64 v37; // [rsp+20h] [rbp-10B8h]
  bool nShowCmd; // [rsp+28h] [rbp-10B0h]
  __time64_t Time; // [rsp+30h] [rbp-10A8h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-10A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-1070h]
  WCHAR Buffer[2088]; // [rsp+70h] [rbp-1068h] BYREF

  v41 = -2;
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
        UIDialogs::OnLoseCommand(a1, (unsigned __int16)a3, a4);
        return 1;
      }
      return 0;
    }
    DialogHelper::CenterDialog(a1, v7);
    memset(&wndpl, 0, 24);
    Str::Format((Str *)&wndpl, L"|44981|CLA_UI_dialog|Game Lost// dialog for losing");
    v9 = LocalizeMessage(*(const unsigned __int16 **)&wndpl.ptMinPosition.y);
    SetWindowTextW(a1, v9);
    LocalFree(v9);
    v10 = *((_QWORD *)Game::G + 3);
    if ( *(_DWORD *)(v10 + 36) == 4 )
    {
      DlgItem = GetDlgItem(a1, 1057);
      WindowLongW = GetWindowLongW(DlgItem, -16);
      SetWindowLongW(DlgItem, -16, WindowLongW | 0x201);
      v27 = GetDlgItem(a1, 1028);
      ShowWindow(v27, 0);
      v28 = GetDlgItem(a1, 1029);
      ShowWindow(v28, 0);
      v29 = GetDlgItem(a1, 1030);
      ShowWindow(v29, 0);
      v30 = GetDlgItem(a1, 1032);
      ShowWindow(v30, 0);
      v31 = GetDlgItem(a1, 1033);
      ShowWindow(v31, 0);
      v32 = GetDlgItem(a1, 1031);
      ShowWindow(v32, 0);
    }
    else
    {
      v11 = *(_QWORD *)(*((_QWORD *)Game::G + 32) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 36) - 1));
      v12 = LocalizeMessage(L"|42103|UI_LOSEDLG|Games played: %1!d!//games played", *(unsigned int *)(v11 + 12));
      SetDlgItemTextW(a1, 1028, v12);
      LocalFree(v12);
      v13 = LocalizeMessage(L"|63054|UI_LOSEDLG|Games won: %1!d!//games won", *(unsigned int *)(v11 + 8));
      SetDlgItemTextW(a1, 1029, v13);
      LocalFree(v13);
      PercentWon = GameStat::GetPercentWon((GameStat *)v11);
      v15 = LocalizeMessage(L"|44696|UI_LOSEDLG|Percentage: %1!d!%%//percent won", PercentWon);
      SetDlgItemTextW(a1, 1030, v15);
      LocalFree(v15);
      v16 = *(__int64 **)(v11 + 64);
      v17 = *v16;
      if ( *(_DWORD *)(*v16 + 8) == 1 )
        v18 = LocalizeMessage(
                L"|52125|UI_LOSEDLG|Best time: %1!d! second//best time (sec) single",
                *(unsigned int *)(v17 + 8));
      else
        v18 = LocalizeMessage(
                L"|52124|UI_LOSEDLG|Best time: %1!d! seconds//best time (sec) plural",
                *(unsigned int *)(v17 + 8));
      SetDlgItemTextW(a1, 1032, v18);
      LocalFree(v18);
      _time64(&Time);
      LOBYTE(v37) = 1;
      DialogHelper::SetStaticTextDate(
        a1,
        (HWND)0x409,
        L"|50159|UI_LOSEDLG|Date: %1//current date",
        (const unsigned __int16 *)Time,
        v37,
        nShowCmd);
      v19 = *((_QWORD *)Game::G + 3);
      if ( (int)floorf(*(float *)(v19 + 32)) == 1 )
      {
        v22 = floorf(*(float *)(v19 + 32));
        v21 = LocalizeMessage(L"|56311|UI_LOSEDLG|Time: %1!d! second//time (sec) single", (unsigned int)(int)v22);
      }
      else
      {
        v20 = floorf(*(float *)(v19 + 32));
        v21 = LocalizeMessage(L"|56310|UI_LOSEDLG|Time: %1!d! seconds//time (sec) plural", (unsigned int)(int)v20);
      }
      SetDlgItemTextW(a1, 1031, v21);
      LocalFree(v21);
      if ( !*(_DWORD *)(**(_QWORD **)(v11 + 64) + 8LL) )
      {
        v23 = GetDlgItem(a1, 1032);
        ShowWindow(v23, 0);
        v24 = GetDlgItem(a1, 1033);
        ShowWindow(v24, 0);
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
    v35 = Game::G;
    *((_DWORD *)Game::G + 12) = wndpl.rcNormalPosition.left;
    *((_DWORD *)v35 + 13) = top;
    Game::Reset(v35, 1, 0, 1);
    DialogHelper::DismissDialog(a1, 0, v36);
    return 1;
  }
}

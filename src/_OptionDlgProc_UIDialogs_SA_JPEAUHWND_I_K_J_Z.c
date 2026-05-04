__int64 __fastcall UIDialogs::OptionDlgProc(HWND this, int a2, int a3, HWND a4)
{
  int v4; // edx
  HWND v6; // rdx
  UINT v8; // esi
  HWND DlgItem; // rax
  HWND v10; // rax
  int v11; // ebx
  BOOL v12; // ebx
  HWND v13; // rax
  HWND v14; // rax
  HWND v15; // rax
  HWND v16; // rax
  HWND v17; // rax
  HWND v18; // rax
  _DWORD v19[76]; // [rsp+30h] [rbp-138h] BYREF
  int pvParam; // [rsp+178h] [rbp+10h] BYREF

  v4 = a2 - 16;
  if ( v4 )
  {
    v6 = (HWND)(unsigned int)(v4 - 256);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
        return 0;
      UIDialogs::OnOptionCommand(this, (unsigned __int16)a3, a4, HIWORD(a3));
    }
    else
    {
      DialogHelper::CenterDialog(this, v6);
      v8 = 0;
      SendDlgItemMessageW(this, 1012, 0xC5u, 5u, 0);
      SendDlgItemMessageW(this, 1011, 0xC5u, 5u, 0);
      SendDlgItemMessageW(this, 1019, 0xC5u, 5u, 0);
      SetDlgItemInt(this, 1012, *((_DWORD *)Game::G + 72), 0);
      SetDlgItemInt(this, 1011, *((_DWORD *)Game::G + 70), 0);
      SetDlgItemInt(this, 1019, *((_DWORD *)Game::G + 71), 0);
      if ( !*((_QWORD *)g_pAudio + 2) )
      {
        DlgItem = GetDlgItem(this, 1017);
        EnableWindow(DlgItem, 0);
      }
      CheckDlgButton(this, 1017, *((_BYTE *)Game::G + 42) != 0);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)g_pRenderManager + 10) + 56LL))(
        *((_QWORD *)g_pRenderManager + 10),
        v19);
      if ( v19[0] == 3 || (pvParam = 1, SystemParametersInfoW(0x1042u, 0, &pvParam, 0), !pvParam) )
      {
        v10 = GetDlgItem(this, 1002);
        EnableWindow(v10, 0);
      }
      CheckDlgButton(this, 1002, *((_BYTE *)Game::G + 43) != 0);
      CheckDlgButton(this, 1013, *((_BYTE *)Game::G + 44) != 0);
      CheckDlgButton(this, 1020, *((_BYTE *)Game::G + 270) != 0);
      CheckDlgButton(this, 1018, *((_BYTE *)Game::G + 45) != 0);
      CheckDlgButton(this, 1044, *((_BYTE *)Game::G + 272) != 0);
      v11 = *((_DWORD *)Game::G + 69);
      CheckDlgButton(this, 1014, v11 == 1);
      CheckDlgButton(this, 1015, v11 == 2);
      CheckDlgButton(this, 1016, v11 == 3);
      LOBYTE(v8) = v11 == 4;
      CheckDlgButton(this, 1010, v8);
      v12 = v11 == 4;
      v13 = GetDlgItem(this, 1011);
      EnableWindow(v13, v12);
      v14 = GetDlgItem(this, 1019);
      EnableWindow(v14, v12);
      v15 = GetDlgItem(this, 1012);
      EnableWindow(v15, v12);
      v16 = GetDlgItem(this, 1041);
      EnableWindow(v16, v12);
      v17 = GetDlgItem(this, 1042);
      EnableWindow(v17, v12);
      v18 = GetDlgItem(this, 1043);
      EnableWindow(v18, v12);
    }
  }
  else
  {
    DialogHelper::DismissDialog(this, 0, a3);
  }
  return 1;
}

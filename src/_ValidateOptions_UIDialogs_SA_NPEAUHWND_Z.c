char __fastcall UIDialogs::ValidateOptions(HWND hDlg)
{
  signed int IntFromEditControl; // esi
  signed int v3; // ebx
  signed int v4; // eax
  _DWORD *v5; // rcx
  signed int v6; // r8d
  int v7; // edx
  HWND DlgItem; // rax
  unsigned int v9; // r8d
  signed int v11; // r8d
  int v12; // edx
  signed int v13; // r8d
  signed int v14; // r8d
  __m128i v15; // xmm0
  signed int v16; // ebx
  UINT v17; // esi
  UINT v18; // eax
  unsigned __int16 *v19; // rbx
  HMODULE ModuleHandleW; // rax
  HWND v21; // rax
  LPARAM lParam[3]; // [rsp+20h] [rbp-248h] BYREF
  int v23; // [rsp+38h] [rbp-230h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-228h] BYREF

  IntFromEditControl = UIDialogs::GetIntFromEditControl(hDlg, 0x3F3u);
  v3 = UIDialogs::GetIntFromEditControl(hDlg, 0x3FBu);
  v4 = UIDialogs::GetIntFromEditControl(hDlg, 0x3F4u);
  v5 = (_DWORD *)*((_QWORD *)Game::G + 2);
  v6 = v5[56];
  if ( IntFromEditControl > v6 )
  {
    SetDlgItemInt(hDlg, 1011, v6, 0);
    v7 = 1011;
LABEL_3:
    DlgItem = GetDlgItem(hDlg, v7);
    v9 = 110;
LABEL_4:
    DialogHelper::ShowEditBalloonTip(DlgItem, (HWND)0x6D, v9, 1u, lParam[0]);
    return 0;
  }
  v11 = v5[55];
  if ( IntFromEditControl < v11 )
  {
    SetDlgItemInt(hDlg, 1011, v11, 0);
    v12 = 1011;
LABEL_8:
    DlgItem = GetDlgItem(hDlg, v12);
    v9 = 111;
    goto LABEL_4;
  }
  v13 = v5[54];
  if ( v3 > v13 )
  {
    SetDlgItemInt(hDlg, 1019, v13, 0);
    v7 = 1019;
    goto LABEL_3;
  }
  v14 = v5[53];
  if ( v3 < v14 )
  {
    SetDlgItemInt(hDlg, 1019, v14, 0);
    v12 = 1019;
    goto LABEL_8;
  }
  v15 = _mm_cvtsi32_si128(IntFromEditControl * v3 - 9);
  v16 = v5[57];
  v17 = (int)(float)((float)((float)(int)v5[59] / 100.0) * _mm_cvtepi32_ps(v15).m128_f32[0]);
  if ( v4 <= (int)v17 )
  {
    if ( v4 >= v16 )
      return 1;
    v18 = v5[57];
  }
  else
  {
    v18 = v17;
  }
  if ( v18 )
  {
    SetDlgItemInt(hDlg, 1012, v17, 0);
    Buffer[0] = 0;
    v19 = LocalizeMessage(
            L"|58436|OPTIONS|The number of mines must be between %1!d! and %2!d! based on your current width and height settings.",
            (unsigned int)v16,
            v17);
    memset(&Buffer[1], 0, 0x1FEu);
    ModuleHandleW = GetModuleHandleW(0);
    LoadStringW(ModuleHandleW, 0x6Du, Buffer, 256);
    LODWORD(lParam[0]) = 32;
    lParam[2] = (LPARAM)v19;
    lParam[1] = (LPARAM)Buffer;
    v23 = 1;
    v21 = GetDlgItem(hDlg, 1012);
    SendMessageW(v21, 0x1503u, 0, (LPARAM)lParam);
    LocalFree(v19);
    return 0;
  }
  return 1;
}

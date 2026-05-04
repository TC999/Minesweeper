__int64 __fastcall UIDialogs::GetIntFromEditControl(HWND hDlg, unsigned __int16 a2)
{
  int v2; // ebp
  unsigned int v4; // ebx
  wchar_t v5; // ax
  unsigned __int16 v6; // di
  int v7; // eax
  int v8; // edx
  LPARAM *v9; // rcx
  wchar_t lParam[16]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = SendDlgItemMessageW(hDlg, a2, 0xC1u, 0, 0);
  v6 = v5;
  if ( v5 )
  {
    lParam[0] = v5;
    SendDlgItemMessageW(hDlg, v2, 0xC4u, 0, (LPARAM)lParam);
    lParam[v6] = 0;
    v7 = wcstol(lParam, 0, 10);
    v8 = 0;
    v4 = v7;
    if ( v7 )
    {
      v9 = (LPARAM *)lParam;
      do
      {
        if ( v8 >= v6 )
          break;
        if ( *(_WORD *)v9 < 0x30u || *(_WORD *)v9 > 0x39u )
          v4 = 0;
        ++v8;
        v9 = (LPARAM *)((char *)v9 + 2);
      }
      while ( v4 );
    }
  }
  return v4;
}

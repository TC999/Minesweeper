LRESULT __fastcall COberStatusbar::onSetTextEffect(HWND *this, UINT_PTR a2, const wchar_t *a3, int a4)
{
  WPARAM v7; // rsi
  HWND *v8; // rbx
  wchar_t *v9; // rbx
  wchar_t *v10; // rax
  int v11; // edx
  int v12; // ecx
  DWORD SysColor; // eax
  wchar_t *v15; // rcx
  LPARAM v16; // r9

  if ( a4 >= 12 || !a3 )
    return 0;
  v7 = a4;
  v8 = &this[36 * a4 + 18];
  v8[1] = 0;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 6) = 0;
  *v8 = (HWND)((char *)&COberStatusbar::_pane_effects + 16 * BYTE1(a2));
  if ( (unsigned int)BYTE1(a2) - 1 > 0x17 )
  {
    SysColor = GetSysColor(8);
    v15 = (wchar_t *)v8 + 14;
    if ( *((_DWORD *)v8 + 4) == SysColor )
    {
      wcscpy_s(v15, 0x80u, a3);
      v16 = (LPARAM)a3;
    }
    else
    {
      wcscpy_s(v15, 0x80u, a3);
      v7 |= 0x1000uLL;
      v16 = (LPARAM)v8;
    }
    return SendMessageW(this[1], 0x40Bu, v7, v16);
  }
  else
  {
    v9 = (wchar_t *)&this[36 * a4 + 21] + 2;
    v10 = v9;
    do
    {
      v11 = *(wchar_t *)((char *)v10 + (char *)a3 - (char *)v9);
      v12 = *v10 - v11;
      if ( v12 )
        break;
      ++v10;
    }
    while ( v11 );
    if ( v12 )
    {
      wcscpy_s(v9, 0x80u, a3);
      SetTimer(this[1], a2, 0x64u, 0);
    }
    return 1;
  }
}

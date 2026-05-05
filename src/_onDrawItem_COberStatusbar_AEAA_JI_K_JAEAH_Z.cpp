__int64 __fastcall COberStatusbar::onDrawItem(COberStatusbar *this)
{
  __int64 v1; // rsi
  _DWORD *v4; // rdi
  int v5; // r12d
  COLORREF SysColor; // edx
  int v7; // ebp
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edi
  int v11; // edi
  __int64 v12; // rcx
  _WORD *v13; // rdi
  bool v14; // zf
  struct tagRECT rc; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( !v1 )
    return 0;
  v4 = *(_DWORD **)(v1 + 8);
  v5 = SaveDC(*((HDC *)this + 4));
  SetBkMode(*((HDC *)this + 4), 1);
  rc = (struct tagRECT)_mm_loadu_si128((const __m128i *)((char *)this + 40));
  rc.left += 2;
  SysColor = GetSysColor(8);
  if ( !v4 )
  {
    SysColor = *(_DWORD *)(v1 + 16);
    goto LABEL_14;
  }
  if ( !*v4 )
  {
    SysColor = v4[1];
LABEL_14:
    SetTextColor(*((HDC *)this + 4), SysColor);
    v12 = -1;
    v13 = (_WORD *)(v1 + 28);
    do
    {
      if ( !v12 )
        break;
      v14 = *v13++ == 0;
      --v12;
    }
    while ( !v14 );
    DrawTextW(*((HDC *)this + 4), (LPCWSTR)(v1 + 28), -(int)v12 - 2, &rc, 0x40024u);
    goto LABEL_18;
  }
  if ( *v4 != 1 )
  {
    if ( *v4 == 2 )
    {
      v7 = v4[1];
      if ( v7 == -16777216 )
        v7 = *(_DWORD *)(v1 + 16);
      v8 = v4[2];
      if ( v8 == -16777216 )
        v8 = *(_DWORD *)(v1 + 16);
      v9 = (unsigned __int8)abs32((unsigned __int8)v7 - (unsigned __int8)v8)
         | ((unsigned __int8)abs32(BYTE2(v7) - BYTE2(v8)) << 16)
         | ((unsigned __int8)abs32(BYTE1(v7) - BYTE1(v8)) << 8);
      v10 = (int)((unsigned __int64)(1374389535LL * (int)v4[3]) >> 32) >> 5;
      v11 = (v10 >> 31) + v10;
      SysColor = (unsigned __int8)(v7 - *(_BYTE *)(v1 + 24) * ((unsigned __int8)v9 / v11))
               | ((unsigned __int8)(BYTE2(v7)
                                  - ((unsigned int)((unsigned __int8)((unsigned __int8)v9 / v11)
                                                  | ((unsigned __int8)(BYTE2(v9) / v11) << 16)
                                                  | ((unsigned __int8)(BYTE1(v9) / v11) << 8)) >> 16)
                                  * *(_BYTE *)(v1 + 24)) << 16)
               | ((unsigned __int8)(BYTE1(v7) - BYTE1(v9) / v11 * *(_BYTE *)(v1 + 24)) << 8);
    }
    goto LABEL_14;
  }
LABEL_18:
  RestoreDC(*((HDC *)this + 4), v5);
  return 1;
}

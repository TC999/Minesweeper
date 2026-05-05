__int64 __fastcall GetTemplateSize(const struct DLGTEMPLATE *a1)
{
  const struct DLGTEMPLATE *FontSizeField; // r9
  int v2; // r10d
  int *v3; // r11
  int v4; // eax
  __int64 v5; // rcx
  _WORD *v6; // r9
  _WORD *v7; // rdi
  bool v8; // zf
  __int16 v9; // dx
  unsigned __int16 *v10; // rcx
  unsigned __int16 v13; // ax

  FontSizeField = GetFontSizeField(a1);
  if ( *((_WORD *)v3 + 1) == 0xFFFF )
    v4 = v3[3];
  else
    v4 = *v3;
  if ( (v4 & 0x40) != 0 )
  {
    v5 = -1;
    v6 = (_WORD *)((char *)FontSizeField + 2 * (v2 != 0 ? 3 : 1));
    v7 = v6;
    do
    {
      if ( !v5 )
        break;
      v8 = *v7++ == 0;
      --v5;
    }
    while ( !v8 );
    FontSizeField = (const struct DLGTEMPLATE *)&v6[~v5];
  }
  if ( v2 )
    v9 = *((_WORD *)v3 + 8);
  else
    v9 = *((_WORD *)v3 + 4);
  if ( v9 )
  {
    do
    {
      v10 = (unsigned __int16 *)((v2 != 0 ? 24LL : 18LL)
                               + (((unsigned __int64)&FontSizeField->style + 3) & 0xFFFFFFFFFFFFFFFCuLL));
      if ( *v10 == 0xFFFF )
      {
        v10 += 2;
      }
      else
      {
        while ( *v10++ )
          ;
      }
      if ( *v10 == 0xFFFF )
      {
        v10 += 2;
      }
      else
      {
        while ( *v10++ )
          ;
      }
      v13 = *v10;
      if ( *v10 && !v2 )
        v13 -= 2;
      v8 = v9-- == 1;
      FontSizeField = (const struct DLGTEMPLATE *)((char *)v10 + v13 + 2);
    }
    while ( !v8 );
  }
  return (unsigned int)((_DWORD)FontSizeField - (_DWORD)v3);
}

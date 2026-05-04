char __fastcall SetFontSize(struct DLGTEMPLATE *a1, unsigned __int16 *Source, __int16 a3)
{
  int v6; // esi
  __int64 v7; // rcx
  char result; // al
  unsigned __int16 *v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // ebp
  const struct DLGTEMPLATE *FontSizeField; // rax
  char v14; // r10
  unsigned __int64 v15; // r11
  struct DLGTEMPLATE *v16; // r12
  char v17; // r9
  __int64 v18; // rcx
  _WORD *v19; // rdi
  int v20; // edx
  const void *v21; // r8
  void *v22; // rcx
  __int16 cy; // ax
  char *v24; // rdx

  GetTemplateSize(a1);
  v6 = 2 * (HIWORD(a1->style) == 0xFFFF ? 3 : 1);
  if ( HIWORD(a1->style) == 0xFFFF )
    *(_DWORD *)&a1->y |= 0x40u;
  else
    a1->style |= 0x40u;
  v7 = -1;
  result = 0;
  v9 = Source;
  do
  {
    if ( !v7 )
      break;
    v10 = *v9++ == 0;
    --v7;
  }
  while ( !v10 );
  v11 = -v7 - 2;
  if ( (int)v11 < 32 )
  {
    v12 = v6 + 2 * v11 + 2;
    if ( v12 >= v6 )
    {
      FontSizeField = GetFontSizeField(a1);
      v16 = (struct DLGTEMPLATE *)FontSizeField;
      if ( v17 )
      {
        v18 = -1;
        v19 = (_WORD *)((char *)FontSizeField + v6);
        do
        {
          if ( !v18 )
            break;
          v10 = *v19++ == 0;
          --v18;
        }
        while ( !v10 );
        v20 = v6 + 2 * ~(_DWORD)v18;
      }
      else
      {
        v20 = 0;
      }
      v21 = (const void *)(((unsigned __int64)&FontSizeField->style + v20 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v22 = (void *)(((unsigned __int64)&FontSizeField->style + v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v14 )
        cy = a1->cy;
      else
        cy = a1->cdit;
      if ( v12 != v20 && cy )
      {
        v24 = (char *)a1 + v15 - (_QWORD)v21;
        if ( (unsigned __int64)v24 > v15 )
          return 0;
        memmove_s(v22, (const rsize_t)v24, v21, (rsize_t)a1 + v15 - (_QWORD)v21);
      }
      LOWORD(v16->style) = a3;
      memmove_s((char *)v16 + v6, v12 - v6, Source, v12 - v6);
      return 1;
    }
  }
  return result;
}

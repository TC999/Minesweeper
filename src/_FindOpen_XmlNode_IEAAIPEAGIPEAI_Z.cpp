__int64 __fastcall XmlNode::FindOpen(XmlNode *this, unsigned __int16 *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r14d
  bool v5; // di
  unsigned int v6; // r9d
  unsigned int v8; // r11d
  _WORD *v9; // rbx
  _WORD *v10; // r12
  _WORD *v11; // r13
  _WORD *v12; // rsi
  _WORD *v13; // rbp
  unsigned int v14; // eax
  char v15; // dl
  char v16; // r8
  _WORD *v17; // r10

  v4 = (_DWORD)a2 - 1;
  v5 = 0;
  v6 = 0;
  v8 = (unsigned int)a2;
  if ( (_DWORD)a2 == 1 )
    return 0xFFFFFFFFLL;
  v9 = (_WORD *)((char *)this + 2);
  v10 = (_WORD *)((char *)this + 6);
  v11 = (_WORD *)((char *)this + 4);
  v12 = (_WORD *)((char *)this - 4);
  v13 = (_WORD *)((char *)this - 2);
  while ( 1 )
  {
    if ( v5 )
    {
      if ( *(_WORD *)this == 62 && *v13 == 45 )
        v5 = *v12 != 45;
      goto LABEL_31;
    }
    if ( *(_WORD *)this == 39 || *(_WORD *)this == 34 )
      return 0xFFFFFFFFLL;
    if ( *(_WORD *)this == 60 )
    {
      if ( *v9 == 33 && v6 < v8 - 3 && *v11 == 45 && *v10 == 45 )
      {
        v5 = 1;
        if ( v6 > v8 - 6 )
          return 0xFFFFFFFFLL;
        v6 += 5;
        v13 += 5;
        v12 += 5;
        this = (XmlNode *)((char *)this + 10);
        v11 += 5;
        v10 += 5;
        v9 += 5;
        goto LABEL_31;
      }
      if ( *v9 != 63 && *v9 != 33 && *v9 != 47 )
      {
        v14 = v6 + 1;
        v15 = 0;
        v16 = 0;
        if ( v6 + 1 < v8 )
          break;
      }
    }
LABEL_31:
    ++v6;
    ++v13;
    ++v12;
    this = (XmlNode *)((char *)this + 2);
    ++v11;
    ++v10;
    ++v9;
    if ( v6 >= v4 )
      return 0xFFFFFFFFLL;
  }
  v17 = v9;
  while ( 1 )
  {
    if ( *v17 == 39 )
    {
      if ( (v15 & 1) != 0 )
        goto LABEL_30;
      ++v16;
    }
    if ( *v17 != 34 )
      goto LABEL_27;
    if ( (v16 & 1) == 0 )
      break;
LABEL_30:
    ++v14;
    ++v17;
    if ( v14 >= v8 )
      goto LABEL_31;
  }
  ++v15;
LABEL_27:
  if ( *v17 != 62 || (v15 & 1) != 0 || (v16 & 1) != 0 )
    goto LABEL_30;
  *a3 = v14 - v6 + 1;
  return v6;
}

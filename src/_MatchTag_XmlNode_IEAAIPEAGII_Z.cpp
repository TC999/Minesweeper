__int64 __fastcall XmlNode::MatchTag(XmlNode *this, unsigned __int16 *a2, unsigned int a3, unsigned int a4)
{
  char v7; // r11
  unsigned int v8; // eax
  int v9; // r14d
  __int64 v10; // rdx
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // r12
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // r8
  unsigned __int16 *v15; // r15
  int v16; // r8d
  char v17; // bp
  XmlNode *v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // r11d
  __int64 v21; // r13
  unsigned int v22; // ebx
  bool v23; // zf
  unsigned int v24; // r8d
  unsigned __int16 *v25; // rcx
  unsigned __int16 *v26; // [rsp+0h] [rbp-58h]
  unsigned __int16 *v27; // [rsp+8h] [rbp-50h]
  unsigned __int16 *v28; // [rsp+10h] [rbp-48h]
  char v30; // [rsp+78h] [rbp+20h]

  if ( a4 < 2 )
    return 0;
  if ( a2[a4 - 2] == 47 )
  {
    *((_BYTE *)this + 48) = 1;
    return 0;
  }
  v7 = 0;
  v8 = a3 - 1;
  v9 = 0;
  v30 = 0;
  v10 = (int)a4;
  if ( a4 >= a3 - 1 )
    return 0xFFFFFFFFLL;
  v11 = &a2[a4 + 3];
  v12 = &a2[a4 + 1];
  v26 = &a2[a4 + 2];
  v13 = &a2[a4 - 1];
  v27 = v11;
  v14 = v26;
  v15 = &a2[a4 - 2];
  v28 = v13;
  while ( 1 )
  {
    if ( v7 == 1 )
    {
      if ( a2[v10] == 62 && *v13 == 45 && *v15 == 45 )
      {
        v7 = 0;
        v30 = 0;
      }
      goto LABEL_43;
    }
    if ( a2[v10] == 60 )
    {
      if ( *v12 == 33 )
      {
        if ( a4 < a3 - 3 && *v14 == 45 && *v11 == 45 )
        {
          v7 = 1;
          v30 = 1;
          if ( a4 > a3 - 6 )
            return 0xFFFFFFFFLL;
          a4 += 5;
          v10 += 5;
          v13 += 5;
          v15 += 5;
          v14 += 5;
          v11 += 5;
          v12 += 5;
          goto LABEL_42;
        }
        v8 = a3 - 1;
      }
      if ( a2[v10] == 60 )
        break;
    }
LABEL_43:
    ++v13;
    ++v14;
    ++v11;
    ++a4;
    ++v10;
    ++v15;
    ++v12;
    v28 = v13;
    v26 = v14;
    v27 = v11;
    if ( a4 >= v8 )
      return 0xFFFFFFFFLL;
  }
  v16 = 0;
  v17 = 1;
  if ( *v12 == 47 )
  {
    v17 = 0;
    v16 = 1;
  }
  v18 = this;
  v19 = 0;
  v20 = 0;
  v21 = v16;
  if ( *((_DWORD *)this + 18) )
  {
    v22 = v16 + a4 + 1;
    do
    {
      if ( v22 >= a3 )
        return 0xFFFFFFFFLL;
      v23 = a2[v16 + 1 + v10 + v19] == *(_WORD *)(*((_QWORD *)v18 + 8) + 2 * v19);
      v18 = this;
      if ( !v23 )
        break;
      ++v20;
      ++v22;
      ++v19;
    }
    while ( v20 < *((_DWORD *)this + 18) );
    v11 = v27;
    v13 = v28;
  }
  if ( v20 != *((_DWORD *)v18 + 18) || (v24 = v20 + v16 + a4 + 1, v24 >= a3) )
  {
LABEL_41:
    v7 = v30;
    v14 = v26;
LABEL_42:
    v8 = a3 - 1;
    goto LABEL_43;
  }
  v25 = &a2[v24];
  while ( *v25 != 62 )
  {
    if ( a2[v21 + 1 + v10 + (int)v20] == 32 )
    {
      ++v24;
      ++v25;
      if ( v24 < a3 )
        continue;
    }
    goto LABEL_40;
  }
  if ( v17 )
  {
    ++v9;
LABEL_40:
    v11 = v27;
    goto LABEL_41;
  }
  if ( v9 )
  {
    --v9;
    goto LABEL_40;
  }
  return a4;
}

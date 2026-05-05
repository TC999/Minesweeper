char __fastcall Font::BinSearchFont(
        Font *this,
        char *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 v15; // rdx
  char *v16; // r8
  unsigned __int16 *v17; // rcx
  int v18; // r9d
  int v19; // eax
  char *v20; // r9
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r9
  unsigned int v25; // ecx
  __int64 v26; // rax
  char *v27; // r8
  char *v28; // rbx
  int v29; // r11d
  int v30; // r10d
  __int64 v31; // rax
  char *v32; // r8
  char *v33; // r11
  int v34; // r10d
  int v35; // r9d

  v8 = *((_DWORD *)this + 2);
  while ( 1 )
  {
    if ( a8 > v8 )
      a8 = v8;
    if ( a8 == a7 )
    {
      *a6 = v8 != 0 ? a8 : 0;
      return 0;
    }
    v15 = a7 + ((a8 - a7) >> 1);
    v16 = *(char **)(*((_QWORD *)this + 3) + 48 * v15 + 8);
    v17 = (unsigned __int16 *)v16;
    do
    {
      v18 = *(unsigned __int16 *)((char *)v17 + a2 - v16);
      v19 = *v17 - v18;
      if ( v19 )
        break;
      ++v17;
    }
    while ( v18 );
    if ( !v19 )
      break;
    v20 = (char *)(a2 - v16);
    do
    {
      v21 = *(unsigned __int16 *)&v20[(_QWORD)v16];
      v22 = *(unsigned __int16 *)v16 - v21;
      if ( v22 )
        break;
      v16 += 2;
    }
    while ( v21 );
    if ( v22 >= 0 )
      a8 = a7 + ((a8 - a7) >> 1);
    else
      a7 = v15 + 1;
  }
  v23 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v23 + 48 * v15) == a5
    && *(_DWORD *)(v23 + 48 * v15 + 36) == a3
    && *(_DWORD *)(v23 + 48 * v15 + 40) == a4 )
  {
    *a6 = v15;
    return 1;
  }
  if ( (_DWORD)v15 )
  {
    v25 = v15 - 1;
    v26 = v23 + 48LL * ((int)v15 - 1);
    do
    {
      if ( *(_DWORD *)v26 == a5 && *(_DWORD *)(v26 + 36) == a3 && *(_DWORD *)(v26 + 40) == a4 )
      {
        v27 = *(char **)(v26 + 8);
        v28 = (char *)(a2 - v27);
        do
        {
          v29 = *(unsigned __int16 *)&v28[(_QWORD)v27];
          v30 = *(unsigned __int16 *)v27 - v29;
          if ( v30 )
            break;
          v27 += 2;
        }
        while ( v29 );
        if ( !v30 )
          goto LABEL_41;
      }
      --v25;
      v26 -= 48;
    }
    while ( v25 < (unsigned int)v15 );
  }
  v25 = v15 + 1;
  if ( (int)v15 + 1 < v8 )
  {
    v31 = v23 + 48LL * (int)v25;
    while ( 1 )
    {
      if ( *(_DWORD *)v31 == a5 && *(_DWORD *)(v31 + 36) == a3 && *(_DWORD *)(v31 + 40) == a4 )
      {
        v32 = *(char **)(v31 + 8);
        v33 = (char *)(a2 - v32);
        do
        {
          v34 = *(unsigned __int16 *)&v33[(_QWORD)v32];
          v35 = *(unsigned __int16 *)v32 - v34;
          if ( v35 )
            break;
          v32 += 2;
        }
        while ( v34 );
        if ( !v35 )
          break;
      }
      ++v25;
      v31 += 48;
      if ( v25 >= v8 )
        goto LABEL_40;
    }
LABEL_41:
    *a6 = v25;
    return 1;
  }
LABEL_40:
  *a6 = v15;
  return 0;
}

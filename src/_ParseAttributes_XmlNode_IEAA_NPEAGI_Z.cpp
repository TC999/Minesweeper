char __fastcall XmlNode::ParseAttributes(XmlNode *this, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // r15
  unsigned int v10; // r12d
  unsigned __int16 *i; // rcx
  unsigned int v12; // r12d
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned __int16 *v15; // rax
  char v16; // dl
  unsigned __int16 *v17; // rcx
  unsigned int v18; // r14d
  unsigned __int16 *v19; // rax
  bool v20; // zf
  unsigned __int16 v21; // ax
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  int v24; // ebx
  int v25; // ebx
  void *v26; // rdi
  void *v27; // rax
  void *v28; // r15
  int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int16 *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r15
  wchar_t *v38; // rcx
  __int64 v40; // [rsp+20h] [rbp-48h]
  unsigned __int16 v41; // [rsp+80h] [rbp+18h]
  wchar_t *Source; // [rsp+88h] [rbp+20h]

  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    v8 = a2;
    while ( *v8 == 32 || *v8 != **((_WORD **)this + 8) )
    {
      ++v7;
      ++v8;
      if ( v7 >= a3 )
        goto LABEL_8;
    }
    v6 = v7 + *((_DWORD *)this + 18);
  }
  while ( 1 )
  {
LABEL_8:
    if ( v6 >= a3 )
      return 1;
    v9 = &a2[v6];
    Source = v9;
    if ( *v9 != 32 && *v9 != 47 && *v9 != 62 )
      break;
LABEL_59:
    ++v6;
  }
  v10 = v6;
  for ( i = &a2[v6]; *i != 32 && *i != 61; ++i )
  {
    if ( ++v10 >= a3 )
      return 0;
  }
  v12 = v10 - v6;
  if ( v12 )
  {
    v13 = v12 + v6;
    v14 = v13;
    if ( (unsigned int)v13 < a3 )
    {
      v15 = &a2[(int)v13];
      do
      {
        if ( *v15 == 61 )
          break;
        ++v14;
        ++v15;
      }
      while ( v14 < a3 );
      if ( v14 < a3 )
      {
        v16 = 0;
        v17 = &a2[v14];
        while ( *v17 != 39 )
        {
          if ( *v17 != 34 )
          {
            ++v14;
            ++v17;
            if ( v14 < a3 )
              continue;
          }
          goto LABEL_29;
        }
        v16 = 1;
LABEL_29:
        if ( v14 < a3 )
        {
          v18 = v14 + 1;
          if ( v14 + 1 < a3 )
          {
            v19 = &a2[v18];
            do
            {
              if ( v16 )
                v20 = *v19 == 39;
              else
                v20 = *v19 == 34;
              if ( v20 )
                break;
              ++v18;
              ++v19;
            }
            while ( v18 < a3 );
            if ( v18 < a3 )
            {
              v21 = a2[v13];
              a2[v13] = 0;
              v40 = (unsigned int)v13;
              v41 = v21;
              if ( (int)SortedListW<TipManager::TipInfo *>::BinSearch(this, &a2[v6], 0, *((_DWORD *)this + 4)) < 0 )
              {
                v22 = operator new(0x18u);
                v23 = v22;
                if ( v22 )
                {
                  v22[1] = 0;
                  *(_BYTE *)v22 = 0;
                }
                else
                {
                  v23 = 0;
                }
                v23[1] = &a2[v14 + 1];
                *((_DWORD *)v23 + 4) = v18 - v14 - 1;
                v24 = SortedListW<TipManager::TipInfo *>::BinSearch(this, &a2[v6], 0, *((_DWORD *)this + 4));
                if ( v24 >= 0 )
                  goto LABEL_58;
                v25 = ~v24;
                if ( (unsigned int)(*((_DWORD *)this + 4) + 1) < *((_DWORD *)this + 5) )
                  goto LABEL_49;
                if ( !*((_DWORD *)this + 5) )
                  *((_DWORD *)this + 5) = 2;
                v26 = malloc(16LL * *((unsigned int *)this + 5));
                v27 = malloc(16LL * *((unsigned int *)this + 5));
                v28 = v27;
                if ( v27 && v26 )
                {
                  memcpy(v26, *(const void **)this, 8LL * *((unsigned int *)this + 4));
                  memcpy(v28, *((const void **)this + 1), 8LL * *((unsigned int *)this + 4));
                  free(*(void **)this);
                  free(*((void **)this + 1));
                  v29 = *((_DWORD *)this + 5);
                  *((_QWORD *)this + 1) = v28;
                  v9 = Source;
                  *(_QWORD *)this = v26;
                  *((_DWORD *)this + 5) = 2 * v29;
LABEL_49:
                  v30 = *((_DWORD *)this + 4) - 1;
                  if ( v30 >= v25 )
                  {
                    v31 = 8LL * (int)v30;
                    do
                    {
                      if ( v30 >= *((_DWORD *)this + 4) )
                        break;
                      --v30;
                      *(_QWORD *)(v31 + *(_QWORD *)this + 8) = *(_QWORD *)(v31 + *(_QWORD *)this);
                      v32 = *((_QWORD *)this + 1);
                      v33 = *(_QWORD *)(v32 + v31);
                      v31 -= 8;
                      *(_QWORD *)(v32 + v31 + 16) = v33;
                    }
                    while ( v30 >= v25 );
                  }
                  ++*((_DWORD *)this + 4);
                  v34 = -1;
                  v35 = v9;
                  do
                  {
                    if ( !v34 )
                      break;
                    v20 = *v35++ == 0;
                    --v34;
                  }
                  while ( !v20 );
                  v36 = ~v34;
                  v37 = v36 - 1;
                  *(_QWORD *)(*(_QWORD *)this + 8LL * v25) = malloc(8 * v36);
                  v38 = *(wchar_t **)(*(_QWORD *)this + 8LL * v25);
                  if ( v38 )
                  {
                    wcscpy_s(v38, v37 + 1, Source);
                    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v25) = v23;
LABEL_58:
                    v6 = v18 + 1;
                    a2[v40] = v41;
                    goto LABEL_59;
                  }
                }
                else
                {
                  CheckAllocation(v27);
                  v38 = (wchar_t *)v26;
                }
                CheckAllocation(v38);
                goto LABEL_58;
              }
              a2[v12 + v6] = v41;
            }
          }
        }
      }
    }
  }
  return 0;
}

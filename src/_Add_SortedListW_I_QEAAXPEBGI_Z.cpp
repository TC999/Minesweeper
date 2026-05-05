void __fastcall SortedListW<unsigned int>::Add(__int64 a1, const wchar_t *a2, int a3)
{
  int v6; // esi
  int v7; // esi
  wchar_t *v8; // rdi
  void *v9; // rax
  void *v10; // rbp
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  const wchar_t *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rbp
  wchar_t *v22; // rcx

  v6 = SortedListW<TipManager::TipInfo *>::BinSearch(a1, a2, 0, *(unsigned int *)(a1 + 16));
  if ( v6 < 0 )
  {
    v7 = ~v6;
    if ( (unsigned int)(*(_DWORD *)(a1 + 16) + 1) >= *(_DWORD *)(a1 + 20) )
    {
      if ( !*(_DWORD *)(a1 + 20) )
        *(_DWORD *)(a1 + 20) = 2;
      v8 = (wchar_t *)malloc(16LL * *(unsigned int *)(a1 + 20));
      v9 = malloc(8LL * *(unsigned int *)(a1 + 20));
      v10 = v9;
      if ( !v9 || !v8 )
      {
        CheckAllocation(v9);
        v22 = v8;
        goto LABEL_19;
      }
      memcpy(v8, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 16));
      memcpy(v10, *(const void **)(a1 + 8), 4LL * *(unsigned int *)(a1 + 16));
      free(*(void **)a1);
      free(*(void **)(a1 + 8));
      v11 = *(_DWORD *)(a1 + 20);
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v10;
      *(_DWORD *)(a1 + 20) = 2 * v11;
    }
    v12 = *(_DWORD *)(a1 + 16) - 1;
    if ( v12 >= v7 )
    {
      v13 = 4LL * (int)v12;
      v14 = 8LL * (int)v12;
      do
      {
        if ( v12 >= *(_DWORD *)(a1 + 16) )
          break;
        --v12;
        v15 = *(_QWORD *)(v14 + *(_QWORD *)a1);
        v14 -= 8;
        *(_QWORD *)(v14 + *(_QWORD *)a1 + 16) = v15;
        v16 = *(_QWORD *)(a1 + 8);
        LODWORD(v15) = *(_DWORD *)(v16 + v13);
        v13 -= 4;
        *(_DWORD *)(v16 + v13 + 8) = v15;
      }
      while ( v12 >= v7 );
    }
    ++*(_DWORD *)(a1 + 16);
    v17 = -1;
    v18 = a2;
    do
    {
      if ( !v17 )
        break;
      v19 = *v18++ == 0;
      --v17;
    }
    while ( !v19 );
    v20 = ~v17;
    v21 = v20 - 1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = malloc(8 * v20);
    v22 = *(wchar_t **)(*(_QWORD *)a1 + 8LL * v7);
    if ( v22 )
    {
      wcscpy_s(v22, v21 + 1, a2);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * v7) = a3;
      return;
    }
LABEL_19:
    CheckAllocation(v22);
  }
}

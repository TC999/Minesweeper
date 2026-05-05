void __fastcall SortedListI<ResourceBase *>::Add(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // esi
  int v7; // edi
  int v8; // edi
  void *v9; // rsi
  void *v10; // rax
  void *v11; // rbp
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v7 = SortedListI<Event::RegisteredType>::BinSearch((__int64 *)a1, a2, 0, v3);
    if ( v7 < 0 )
    {
      v8 = ~v7;
      if ( v3 + 1 >= *(_DWORD *)(a1 + 20) )
      {
        if ( !*(_DWORD *)(a1 + 20) )
          *(_DWORD *)(a1 + 20) = 2;
        v9 = malloc(8LL * *(unsigned int *)(a1 + 20));
        v10 = malloc(16LL * *(unsigned int *)(a1 + 20));
        v11 = v10;
        if ( !v10 || !v9 )
        {
          CheckAllocation(v10);
          CheckAllocation(v9);
          return;
        }
        memcpy(v9, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 16));
        memcpy(v11, *(const void **)(a1 + 8), 8LL * *(unsigned int *)(a1 + 16));
        free(*(void **)a1);
        free(*(void **)(a1 + 8));
        v12 = *(_DWORD *)(a1 + 20);
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = v11;
        *(_DWORD *)(a1 + 20) = 2 * v12;
      }
      v13 = *(_DWORD *)(a1 + 16) - 1;
      if ( v13 >= v8 )
      {
        v14 = 8LL * (int)v13;
        v15 = 4LL * (int)v13;
        do
        {
          if ( v13 >= *(_DWORD *)(a1 + 16) )
            break;
          --v13;
          v16 = *(_DWORD *)(v15 + *(_QWORD *)a1);
          v15 -= 4;
          *(_DWORD *)(v15 + *(_QWORD *)a1 + 8) = v16;
          v17 = *(_QWORD *)(a1 + 8);
          v18 = *(_QWORD *)(v17 + v14);
          v14 -= 8;
          *(_QWORD *)(v17 + v14 + 16) = v18;
        }
        while ( v13 >= v8 );
      }
      v19 = *(_QWORD *)a1;
      ++*(_DWORD *)(a1 + 16);
      *(_DWORD *)(v19 + 4LL * v8) = a2;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v8) = *a3;
    }
  }
}

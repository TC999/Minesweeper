void __fastcall SortedListI<Timer::TimerEvent>::Add(__int64 a1, __int64 a2, const void *a3)
{
  unsigned int v3; // edi
  int v5; // r13d
  int v7; // esi
  int v8; // esi
  void *v9; // rdi
  void *v10; // rax
  void *v11; // rbp
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // r12
  _DWORD *v16; // rax

  v3 = *(_DWORD *)(a1 + 16);
  v5 = a2;
  v7 = SortedListI<Event::RegisteredType>::BinSearch(a1, a2, 0, v3);
  if ( v7 < 0 )
  {
    v8 = ~v7;
    if ( v3 + 1 >= *(_DWORD *)(a1 + 20) )
    {
      if ( !*(_DWORD *)(a1 + 20) )
        *(_DWORD *)(a1 + 20) = 2;
      v9 = malloc(8LL * *(unsigned int *)(a1 + 20));
      v10 = malloc((unsigned __int64)*(unsigned int *)(a1 + 20) << 6);
      v11 = v10;
      if ( !v10 || !v9 )
      {
        CheckAllocation(v10);
        CheckAllocation(v9);
        return;
      }
      memcpy(v9, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 16));
      memcpy(v11, *(const void **)(a1 + 8), 32LL * *(unsigned int *)(a1 + 16));
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
      v14 = 32LL * (int)v13;
      v15 = 4LL * (int)v13;
      do
      {
        if ( v13 >= *(_DWORD *)(a1 + 16) )
          break;
        *(_DWORD *)(v15 + *(_QWORD *)a1 + 4) = *(_DWORD *)(v15 + *(_QWORD *)a1);
        memcpy((void *)(v14 + *(_QWORD *)(a1 + 8) + 32), (const void *)(v14 + *(_QWORD *)(a1 + 8)), 0x20u);
        --v13;
        v15 -= 4;
        v14 -= 32;
      }
      while ( v13 >= v8 );
    }
    v16 = *(_DWORD **)a1;
    ++*(_DWORD *)(a1 + 16);
    v16[v8] = v5;
    memcpy((void *)(*(_QWORD *)(a1 + 8) + 32LL * v8), a3, 0x20u);
  }
}

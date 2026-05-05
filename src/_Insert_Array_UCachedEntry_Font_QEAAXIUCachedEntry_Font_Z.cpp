void __fastcall Array<Font::CachedEntry>::Insert(__int64 a1, unsigned int a2, const void *a3)
{
  unsigned int v4; // ecx
  __int64 v6; // rsi
  __int64 v7; // r9
  void *v8; // rcx
  void *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx

  ++*(_DWORD *)a1;
  v4 = *(_DWORD *)(a1 + 4);
  v6 = a2;
  if ( *(_DWORD *)a1 > v4 )
  {
    v7 = v4 + *(_DWORD *)(a1 + 8);
    v8 = *(void **)(a1 + 16);
    *(_DWORD *)(a1 + 4) = v7;
    v9 = realloc(v8, 48 * v7);
    if ( !v9 )
    {
      CheckAllocation(0);
      return;
    }
    *(_QWORD *)(a1 + 16) = v9;
  }
  v10 = *(_DWORD *)a1 - 1;
  if ( v10 > (unsigned int)v6 )
  {
    v11 = 48LL * v10;
    v12 = (unsigned int)(v10 - v6);
    do
    {
      v13 = v11 - 48;
      memcpy((void *)(v11 + *(_QWORD *)(a1 + 16)), (const void *)(v11 - 48 + *(_QWORD *)(a1 + 16)), 0x30u);
      --v12;
      v11 = v13;
    }
    while ( v12 );
  }
  memcpy((void *)(*(_QWORD *)(a1 + 16) + 48 * v6), a3, 0x30u);
}

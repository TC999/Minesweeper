__int64 __fastcall Array<_D3DCAPS9>::Add(__int64 a1, const void *a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // r8d
  void *v6; // rcx
  void *v7; // rax

  ++*(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)a1 > v3 )
  {
    v5 = v3 + *(_DWORD *)(a1 + 8);
    v6 = *(void **)(a1 + 16);
    *(_DWORD *)(a1 + 4) = v5;
    v7 = realloc(v6, 304LL * v5);
    if ( !v7 )
    {
      CheckAllocation(0);
      return 0xFFFFFFFFLL;
    }
    *(_QWORD *)(a1 + 16) = v7;
  }
  memcpy((void *)(*(_QWORD *)(a1 + 16) + 304LL * (unsigned int)(*(_DWORD *)a1 - 1)), a2, 0x130u);
  return (unsigned int)(*(_DWORD *)a1 - 1);
}

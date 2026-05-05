__int64 __fastcall Array<unsigned short>::Add(__int64 a1, __int16 a2)
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
    v7 = realloc(v6, 2LL * v5);
    if ( !v7 )
    {
      CheckAllocation(0);
      return 0xFFFFFFFFLL;
    }
    *(_QWORD *)(a1 + 16) = v7;
  }
  *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * (unsigned int)(*(_DWORD *)a1 - 1)) = a2;
  return (unsigned int)(*(_DWORD *)a1 - 1);
}

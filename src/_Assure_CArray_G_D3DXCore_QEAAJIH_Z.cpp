__int64 __fastcall D3DXCore::CArray<unsigned short>::Assure(__int64 a1, unsigned int a2, int a3)
{
  unsigned int i; // ebx
  size_t v6; // rax
  void *v7; // rax
  void *v8; // rsi

  i = *(_DWORD *)(a1 + 8);
  if ( a2 > i )
  {
    if ( i )
      goto LABEL_4;
    for ( i = 16; i < a2; i *= 2 )
LABEL_4:
      ;
    v6 = 2LL * i;
    if ( !is_mul_ok(i, 2u) )
      v6 = -1;
    v7 = operator new(v6, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v8 = v7;
    if ( !v7 )
      return 2147942414LL;
    if ( !a3 )
      memcpy(v7, *(const void **)a1, 2LL * *(unsigned int *)(a1 + 8));
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 8) = i;
  }
  return 0;
}

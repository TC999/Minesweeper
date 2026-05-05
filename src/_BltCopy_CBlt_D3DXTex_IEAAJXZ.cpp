__int64 __fastcall D3DXTex::CBlt::BltCopy(D3DXTex::CBlt *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r8
  size_t v4; // rax
  void *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int i; // ebp

  v2 = *((_QWORD *)this + 1);
  v3 = *(unsigned int *)(v2 + 136);
  if ( *(_QWORD *)(v2 + 136) != *(_QWORD *)(*(_QWORD *)this + 136LL)
    || *(_DWORD *)(v2 + 144) != *(_DWORD *)(*(_QWORD *)this + 144LL) )
  {
    return 2147500037LL;
  }
  v4 = 16 * v3;
  if ( !is_mul_ok(v3, 0x10u) )
    v4 = -1;
  v5 = operator new(v4, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v5 )
    return 2147500037LL;
  v6 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v6 + 20) && *(_DWORD *)(*(_QWORD *)this + 20LL) )
  {
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(*(_QWORD *)this + 20LL) = 0;
  }
  v7 = *((_QWORD *)this + 1);
  v8 = 0;
  if ( *(_DWORD *)(v7 + 144) )
  {
    v9 = *(_DWORD *)(v7 + 140);
    do
    {
      for ( i = 0; i < v9; v9 = *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, i, v8, v5);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          i++,
          v8,
          v5);
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(*((_QWORD *)this + 1) + 144LL) );
  }
  operator delete(v5);
  return 0;
}

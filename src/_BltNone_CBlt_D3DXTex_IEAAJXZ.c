__int64 __fastcall D3DXTex::CBlt::BltNone(D3DXTex::CBlt *this)
{
  _DWORD *v3; // rcx
  unsigned int v4; // r8d
  unsigned int v5; // r14d
  unsigned int v6; // edi
  __int64 v7; // rsi
  size_t v8; // rax
  void *v9; // r13
  __int64 v10; // r8
  size_t v11; // rax
  void *v12; // r12
  __int64 v13; // r11
  unsigned int i; // esi
  unsigned int j; // ebp
  unsigned int k; // ebp
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int m; // esi

  if ( *((_BYTE *)this + 16) != 1 )
    return 2147500037LL;
  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v4 = *(_DWORD *)(*(_QWORD *)this + 136LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 140LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 144LL);
  if ( v3[34] > v4 )
    v4 = v3[34];
  v7 = v4;
  if ( v3[35] < v5 )
    v5 = v3[35];
  if ( v3[36] < v6 )
    v6 = v3[36];
  v8 = 16LL * v4;
  if ( !is_mul_ok(v4, 0x10u) )
    v8 = -1;
  v9 = operator new(v8, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v9 )
    return 2147500037LL;
  v10 = *((_QWORD *)this + 1);
  v11 = 16LL * *(unsigned int *)(v10 + 136);
  if ( !is_mul_ok(*(unsigned int *)(v10 + 136), 0x10u) )
    v11 = -1;
  v12 = operator new(v11, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v12 )
  {
    operator delete(v9);
    return 2147500037LL;
  }
  memset(v9, 0, 16 * v7);
  memset(v12, 0, 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL));
  v13 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v13 + 20) && *(_DWORD *)(*(_QWORD *)this + 20LL) )
  {
    *(_DWORD *)(v13 + 20) = 0;
    *(_DWORD *)(*(_QWORD *)this + 20LL) = 0;
  }
  for ( i = 0; i < v6; ++i )
  {
    for ( j = 0; j < v5; ++j )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, j, i, v9);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**((_QWORD **)this + 1) + 16LL))(
        *((_QWORD *)this + 1),
        j,
        i,
        v9);
    }
    for ( k = v5; k < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL); ++k )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**((_QWORD **)this + 1) + 16LL))(
        *((_QWORD *)this + 1),
        k,
        i,
        v12);
  }
  v17 = *((_QWORD *)this + 1);
  if ( v6 < *(_DWORD *)(v17 + 144) )
  {
    v18 = *(_DWORD *)(v17 + 140);
    do
    {
      for ( m = 0; m < v18; v18 = *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          m++,
          v6,
          v12);
      ++v6;
    }
    while ( v6 < *(_DWORD *)(*((_QWORD *)this + 1) + 144LL) );
  }
  operator delete(v9);
  operator delete(v12);
  return 0;
}

__int64 __fastcall D3DXTex::CBlt::BltPoint(D3DXTex::CBlt *this)
{
  unsigned __int64 v3; // rcx
  size_t v4; // rax
  __m128i *v5; // rdi
  size_t v6; // rax
  __m128i *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r8
  unsigned int v10; // ebp
  int v11; // r9d
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r8d
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  __m128i *v20; // rcx
  unsigned __int64 v21; // rax
  int i; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+80h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  if ( *((_BYTE *)this + 16) != 2 )
    return 2147500037LL;
  v3 = *(unsigned int *)(*(_QWORD *)this + 136LL);
  v4 = 16 * v3;
  if ( !is_mul_ok(v3, 0x10u) )
    v4 = -1;
  v5 = (__m128i *)operator new(v4, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v5 )
    return 2147942414LL;
  v6 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
    v6 = -1;
  v7 = (__m128i *)operator new(v6, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v7 )
  {
    operator delete(v5);
    return 2147942414LL;
  }
  v8 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v8 + 20) && *(_DWORD *)(*(_QWORD *)this + 20LL) )
  {
    *(_DWORD *)(v8 + 20) = 0;
    *(_DWORD *)(*(_QWORD *)this + 20LL) = 0;
  }
  v9 = (_DWORD *)*((_QWORD *)this + 1);
  v10 = 0;
  v11 = (*(_DWORD *)(*(_QWORD *)this + 136LL) << 16) / v9[34];
  v23 = v11;
  v26 = (*(_DWORD *)(*(_QWORD *)this + 140LL) << 16) / v9[35];
  v12 = v9;
  v13 = (*(_DWORD *)(*(_QWORD *)this + 144LL) << 16) / v9[36];
  v14 = 0;
  v24 = 0;
  for ( i = v13; v10 < v12[36]; v24 = v14 )
  {
    v15 = -1;
    v16 = 0;
    v17 = 0;
    v25 = -1;
    if ( v12[35] )
    {
      do
      {
        v18 = 0;
        v19 = 0;
        if ( ((v16 ^ v15) & 0xFFFF0000) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**(_QWORD **)this + 8LL))(
            *(_QWORD *)this,
            HIWORD(v16),
            HIWORD(v14),
            v5);
          v11 = v23;
          v25 = v16;
        }
        if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
        {
          v20 = v7;
          do
          {
            v21 = v18;
            ++v19;
            v18 += v11;
            *v20++ = _mm_loadu_si128(&v5[v21 >> 16]);
          }
          while ( v19 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          v17,
          v10,
          v7);
        v16 += v26;
        v14 = v24;
        v15 = v25;
        v11 = v23;
        ++v17;
      }
      while ( v17 < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) );
      v13 = i;
    }
    v12 = (_DWORD *)*((_QWORD *)this + 1);
    v14 += v13;
    ++v10;
  }
  operator delete(v5);
  operator delete(v7);
  return 0;
}

__int64 __fastcall D3DXTex::CBlt::Blt(
        D3DXTex::CBlt *this,
        struct D3DX_BLT *a2,
        struct D3DX_BLT *a3,
        int a4,
        unsigned int a5)
{
  struct D3DXTex::CCodec *v8; // rax
  struct D3DXTex::CCodec *v9; // rax
  struct D3DXTex::CCodec *v10; // rsi
  __int64 v11; // rdi
  int v12; // eax
  size_t v13; // rax
  void *v14; // rax
  unsigned int v15; // edi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx

  if ( a5 > 5 || (a4 & 0xFF800000) != 0 )
    return 2289436780LL;
  *((_DWORD *)a3 + 19) = a4 & 0x200000;
  *((_DWORD *)a2 + 19) = a4 & 0x400000;
  *((_DWORD *)a2 + 18) = a4 & 0x100000;
  *((_DWORD *)a2 + 17) = a4 & 0x80000;
  v8 = D3DXTex::CCodec::Create(a2);
  *((_QWORD *)this + 1) = v8;
  if ( !v8 )
    goto LABEL_29;
  v9 = D3DXTex::CCodec::Create(a3);
  v10 = v9;
  *(_QWORD *)this = v9;
  if ( !v9 )
    goto LABEL_29;
  v11 = *((_QWORD *)this + 1);
  v12 = *((_DWORD *)v9 + 3);
  if ( *(_DWORD *)(v11 + 12) != v12 && *(_DWORD *)(v11 + 12) != 4 )
    *(_DWORD *)(v11 + 104) = v12;
  if ( !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 20) )
  {
LABEL_18:
    if ( (int)D3DXTex::CBlt::BltSame(this) >= 0
      || (int)D3DXTex::CBlt::BltCopy(this) >= 0
      || (int)D3DXTex::CBlt::BltNone(this) >= 0
      || (int)D3DXTex::CBlt::BltPoint(this) >= 0
      || (int)D3DXTex::CBlt::BltBox2D(this) >= 0
      || (int)D3DXTex::CBlt::BltBox3D(this) >= 0
      || (int)D3DXTex::CBlt::BltLinear2D(this) >= 0
      || (int)D3DXTex::CBlt::BltLinear3D(this) >= 0
      || (int)D3DXTex::CBlt::BltTriangle2D(this) >= 0
      || (int)D3DXTex::CBlt::BltTriangle3D(this) >= 0 )
    {
      v15 = 0;
      goto LABEL_30;
    }
LABEL_29:
    v15 = -2147467259;
    goto LABEL_30;
  }
  v13 = 16LL * *(unsigned int *)(v11 + 136);
  if ( !is_mul_ok(*(unsigned int *)(v11 + 136), 0x10u) )
    v13 = -1;
  v14 = operator new(v13, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  *(_QWORD *)(v11 + 112) = v14;
  if ( v14 )
  {
    if ( *(_DWORD *)(v11 + 20) && *((_DWORD *)v10 + 5) )
    {
      *((_DWORD *)v10 + 6) = 1;
      *(_DWORD *)(v11 + 24) = 1;
    }
    goto LABEL_18;
  }
  v15 = -2147024882;
LABEL_30:
  v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v16 )
  {
    (**v16)(v16, 1);
    *((_QWORD *)this + 1) = 0;
  }
  if ( *(_QWORD *)this )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))this)(*(_QWORD *)this, 1);
    *(_QWORD *)this = 0;
  }
  return v15;
}

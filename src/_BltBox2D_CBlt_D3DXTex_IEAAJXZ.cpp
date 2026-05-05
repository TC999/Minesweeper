__int64 __fastcall D3DXTex::CBlt::BltBox2D(D3DXTex::CBlt *this)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // r8
  unsigned int v4; // edx
  int v5; // r9d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  size_t v29; // rax
  __m128i *v30; // rbp
  __int64 v31; // rax
  size_t v32; // rax
  unsigned __int64 v33; // kr00_8
  float *v34; // rdi
  float *v35; // rsi
  size_t v36; // rax
  unsigned __int64 v37; // kr10_8
  float *v38; // r14
  char *v39; // r15
  unsigned int i; // r12d
  unsigned int v41; // r8d
  __m128i *v42; // rdx
  __int64 v43; // rcx
  __int32 v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm3_4
  __m128i v48; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_BYTE *)this + 16) != 5 )
    return 2147500037LL;
  v2 = *(_DWORD **)this;
  v3 = (_DWORD *)*((_QWORD *)this + 1);
  v4 = v2[34];
  v5 = v3[34];
  if ( v5 != v4 >> 1 && (v5 != 1 || v4 != 1) )
    return 2147500037LL;
  v6 = v3[35];
  if ( v6 != v2[35] >> 1 && (v6 != 1 || v2[35] != 1) )
    return 2147500037LL;
  if ( v3[36] != 1 || v2[36] != 1 )
    return 2147500037LL;
  if ( v4 > 1 && (v4 & 1) != 0 )
  {
    v2[34] &= ~1u;
    *(_DWORD *)(*(_QWORD *)this + 148LL) -= *(_DWORD *)(*(_QWORD *)this + 152LL);
  }
  if ( *(_DWORD *)(*(_QWORD *)this + 140LL) > 1u )
    *(_DWORD *)(*(_QWORD *)this + 140LL) &= ~1u;
  if ( _bittest((const signed __int32 *)this + 4, 0x13u) )
    goto LABEL_54;
  v7 = *(_QWORD *)this;
  v8 = *((_QWORD *)this + 1);
  v9 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  if ( v9 != *(_DWORD *)(v8 + 8) )
    goto LABEL_54;
  v10 = *(_DWORD *)(v7 + 136);
  if ( v10 < 2 )
    goto LABEL_54;
  v11 = *(_DWORD *)(v7 + 140);
  if ( v11 < 2 || *(_DWORD *)(v8 + 20) || *(_DWORD *)(v7 + 20) )
    goto LABEL_54;
  if ( v9 > 29 )
  {
    v21 = v9 - 30;
    if ( v21 )
    {
      v22 = v21 - 2;
      if ( !v22 )
      {
LABEL_39:
        v20 = D3DXTex::g_pBoxFilter2D_A8R8G8B8(
                *(_QWORD *)(v8 + 40),
                *(_QWORD *)(v7 + 40),
                v10,
                v11,
                *(_DWORD *)(v7 + 128),
                *(_DWORD *)(v8 + 128));
        goto LABEL_52;
      }
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_38;
      v24 = v23 - 7;
      if ( !v24 )
        goto LABEL_54;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_54;
      v26 = v25 - 9;
      if ( !v26 )
        goto LABEL_32;
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 1 )
          goto LABEL_54;
        v20 = D3DXTex::CBlt::BltBox2D_A4L4(this);
      }
      else
      {
        v20 = D3DXTex::CBlt::BltBox2D_A8L8(this);
      }
    }
    else
    {
      v20 = D3DXTex::CBlt::BltBox2D_X4R4G4B4(this);
    }
LABEL_52:
    if ( v20 >= 0 )
      return 0;
    goto LABEL_54;
  }
  if ( v9 == 29 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_A8R3G3B2(this);
    goto LABEL_52;
  }
  v12 = v9 - 20;
  if ( !v12 )
    goto LABEL_54;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_39;
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_38:
    v20 = D3DXTex::g_pBoxFilter2D_X8R8G8B8(
            *(_QWORD *)(v8 + 40),
            *(_QWORD *)(v7 + 40),
            v10,
            v11,
            *(_DWORD *)(v7 + 128),
            *(_DWORD *)(v8 + 128));
    goto LABEL_52;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_R5G6B5(this);
    goto LABEL_52;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_X1R5G5B5(this);
    goto LABEL_52;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_A1R5G5B5(this);
    goto LABEL_52;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_A4R4G4B4(this);
    goto LABEL_52;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v20 = D3DXTex::CBlt::BltBox2D_R3G3B2(this);
    goto LABEL_52;
  }
  if ( v19 == 1 )
  {
LABEL_32:
    v20 = D3DXTex::CBlt::BltBox2D_A8(this);
    goto LABEL_52;
  }
LABEL_54:
  v29 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
    v29 = -1;
  v30 = (__m128i *)operator new(v29, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( v30 )
  {
    v31 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 140LL) == 1 )
    {
      v33 = *(unsigned int *)(v31 + 136);
      v32 = 16 * v33;
      if ( !is_mul_ok(v33, 0x10u) )
        v32 = -1;
      v34 = (float *)operator new(v32, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v35 = v34;
    }
    else
    {
      v37 = (unsigned int)(2 * *(_DWORD *)(v31 + 136));
      v36 = 16 * v37;
      if ( !is_mul_ok(v37, 0x10u) )
        v36 = -1;
      v34 = (float *)operator new(v36, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      v35 = &v34[4 * *(unsigned int *)(*(_QWORD *)this + 136LL)];
    }
    if ( v34 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 136LL) == 1 )
      {
        v38 = v34;
        v39 = (char *)v35;
      }
      else
      {
        v38 = v34 + 4;
        v39 = (char *)(v35 + 4);
      }
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL); ++i )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, float *))(**(_QWORD **)this + 8LL))(
          *(_QWORD *)this,
          2 * i,
          0,
          v34);
        if ( v35 != v34 )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, float *))(**(_QWORD **)this + 8LL))(
            *(_QWORD *)this,
            2 * i + 1,
            0,
            v35);
        v41 = 0;
        if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
        {
          v42 = v30;
          do
          {
            v43 = 2 * v41++;
            v43 *= 2;
            *(float *)&v44 = (float)((float)((float)(v38[2 * v43 + 1] + v34[2 * v43 + 1]) + v35[2 * v43 + 1])
                                   + *(float *)&v39[8 * v43 + 4])
                           * 0.25;
            v45 = v38[2 * v43 + 3] + v34[2 * v43 + 3];
            v46 = (float)((float)(v38[2 * v43 + 2] + v34[2 * v43 + 2]) + v35[2 * v43 + 2]) + *(float *)&v39[8 * v43 + 8];
            *(float *)v48.m128i_i32 = (float)((float)((float)(v34[2 * v43] + v38[2 * v43]) + v35[2 * v43])
                                            + *(float *)&v39[8 * v43])
                                    * 0.25;
            v47 = v45 + v35[2 * v43 + 3];
            v48.m128i_i32[1] = v44;
            *(float *)&v48.m128i_i32[2] = v46 * 0.25;
            *(float *)&v48.m128i_i32[3] = (float)(v47 + *(float *)&v39[8 * v43 + 12]) * 0.25;
            *v42++ = _mm_loadu_si128(&v48);
          }
          while ( v41 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          i,
          0,
          v30);
      }
      operator delete(v34);
      operator delete(v30);
      return 0;
    }
    operator delete(v30);
  }
  return 2147942414LL;
}

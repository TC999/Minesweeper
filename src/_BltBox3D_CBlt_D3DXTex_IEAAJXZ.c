__int64 __fastcall D3DXTex::CBlt::BltBox3D(D3DXTex::CBlt *this)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // r8
  unsigned int v5; // edx
  int v6; // r9d
  int v7; // r9d
  size_t v8; // rax
  unsigned int v9; // esi
  __m128i *v10; // r15
  __int64 v11; // rax
  size_t v12; // rax
  unsigned __int64 v13; // kr00_8
  char *v14; // rax
  _DWORD *v15; // rdx
  char *v16; // r12
  char *v17; // rdi
  char *v18; // r13
  unsigned __int64 v19; // rcx
  size_t v20; // rax
  float *v21; // rbp
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // r8
  unsigned int v25; // r15d
  unsigned int v26; // r8d
  __m128i *v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // xmm1_4
  unsigned int v30; // xmm2_4
  float v31; // xmm3_4
  char *v32; // [rsp+20h] [rbp-88h]
  char *v33; // [rsp+28h] [rbp-80h]
  char *v34; // [rsp+30h] [rbp-78h]
  __m128i v35; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+8h]
  int v37; // [rsp+B8h] [rbp+10h]
  __m128i *v38; // [rsp+C0h] [rbp+18h]
  char *v39; // [rsp+C8h] [rbp+20h]

  if ( *((_BYTE *)this + 16) != 5 )
    return 2147500037LL;
  v3 = *(_DWORD **)this;
  v4 = (_DWORD *)*((_QWORD *)this + 1);
  v5 = v3[34];
  v6 = v4[34];
  if ( v6 != v5 >> 1 && (v6 != 1 || v5 != 1) )
    return 2147500037LL;
  v7 = v4[35];
  if ( v7 != v3[35] >> 1 && (v7 != 1 || v3[35] != 1) )
    return 2147500037LL;
  if ( v4[36] != v3[36] >> 1 )
    return 2147500037LL;
  if ( v5 > 1 && (v5 & 1) != 0 )
  {
    v3[34] &= ~1u;
    *(_DWORD *)(*(_QWORD *)this + 148LL) -= *(_DWORD *)(*(_QWORD *)this + 152LL);
  }
  if ( *(_DWORD *)(*(_QWORD *)this + 140LL) > 1u )
    *(_DWORD *)(*(_QWORD *)this + 140LL) &= ~1u;
  if ( *(_DWORD *)(*(_QWORD *)this + 144LL) > 1u )
    *(_DWORD *)(*(_QWORD *)this + 144LL) &= ~1u;
  v8 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
    v8 = -1;
  v9 = 0;
  v10 = (__m128i *)operator new(v8, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v38 = v10;
  if ( !v10 )
    return 2147942414LL;
  v11 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 140LL) == 1 )
  {
    v13 = (unsigned int)(2 * *(_DWORD *)(v11 + 136));
    v12 = 16 * v13;
    if ( !is_mul_ok(v13, 0x10u) )
      v12 = -1;
    v14 = (char *)operator new(v12, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v15 = (_DWORD *)(*(_QWORD *)this + 136LL);
    v16 = v14;
    v17 = &v14[16 * *v15];
    v18 = v17;
  }
  else
  {
    v19 = (unsigned int)(4 * *(_DWORD *)(v11 + 136));
    v20 = 16 * v19;
    if ( !is_mul_ok(v19, 0x10u) )
      v20 = -1;
    v14 = (char *)operator new(v20, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    v15 = (_DWORD *)(*(_QWORD *)this + 136LL);
    v17 = &v14[16 * *v15];
    v16 = &v14[32 * *v15];
    v18 = &v14[48 * *v15];
  }
  v21 = (float *)v14;
  if ( v14 )
  {
    if ( *v15 == 1 )
    {
      v39 = v14;
      v32 = v17;
      v33 = v16;
      v34 = v18;
    }
    else
    {
      v39 = v14 + 16;
      v32 = v17 + 16;
      v33 = v16 + 16;
      v34 = v18 + 16;
    }
    v22 = *((_QWORD *)this + 1);
    v23 = 0;
    v37 = 0;
    if ( *(_DWORD *)(v22 + 144) )
    {
      do
      {
        v24 = 2 * v23;
        v25 = 0;
        v36 = 0;
        if ( *(_DWORD *)(v22 + 140) )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)this + 8LL))(
              *(_QWORD *)this,
              2 * v25,
              v24,
              v21);
            if ( v17 != (char *)v21 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                2 * v25,
                2 * v23 + 1,
                v17);
            if ( v16 != (char *)v21 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                2 * v25 + 1,
                2 * v23,
                v16);
            if ( v18 != v17 && v18 != v16 )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                2 * v25 + 1,
                2 * v23 + 1,
                v18);
            v26 = 0;
            if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
            {
              v27 = v38;
              do
              {
                v28 = 2 * v26++;
                v28 *= 2;
                *(float *)&v29 = (float)((float)((float)((float)((float)((float)((float)(*(float *)&v39[8 * v28 + 4]
                                                                                       + v21[2 * v28 + 1])
                                                                               + *(float *)&v17[8 * v28 + 4])
                                                                       + *(float *)&v32[8 * v28 + 4])
                                                               + *(float *)&v16[8 * v28 + 4])
                                                       + *(float *)&v33[8 * v28 + 4])
                                               + *(float *)&v18[8 * v28 + 4])
                                       + *(float *)&v34[8 * v28 + 4])
                               * 0.125;
                *(float *)&v30 = (float)((float)((float)((float)((float)((float)((float)(*(float *)&v39[8 * v28 + 8]
                                                                                       + v21[2 * v28 + 2])
                                                                               + *(float *)&v17[8 * v28 + 8])
                                                                       + *(float *)&v32[8 * v28 + 8])
                                                               + *(float *)&v16[8 * v28 + 8])
                                                       + *(float *)&v33[8 * v28 + 8])
                                               + *(float *)&v18[8 * v28 + 8])
                                       + *(float *)&v34[8 * v28 + 8])
                               * 0.125;
                v31 = (float)((float)(*(float *)&v39[8 * v28 + 12] + v21[2 * v28 + 3]) + *(float *)&v17[8 * v28 + 12])
                    + *(float *)&v32[8 * v28 + 12];
                *(float *)v35.m128i_i32 = (float)((float)((float)((float)((float)((float)((float)(v21[2 * v28]
                                                                                                + *(float *)&v39[8 * v28])
                                                                                        + *(float *)&v17[8 * v28])
                                                                                + *(float *)&v32[8 * v28])
                                                                        + *(float *)&v16[8 * v28])
                                                                + *(float *)&v33[8 * v28])
                                                        + *(float *)&v18[8 * v28])
                                                + *(float *)&v34[8 * v28])
                                        * 0.125;
                *(__int64 *)((char *)v35.m128i_i64 + 4) = __PAIR64__(v30, v29);
                *(float *)&v35.m128i_i32[3] = (float)((float)((float)((float)(v31 + *(float *)&v16[8 * v28 + 12])
                                                                    + *(float *)&v33[8 * v28 + 12])
                                                            + *(float *)&v18[8 * v28 + 12])
                                                    + *(float *)&v34[8 * v28 + 12])
                                            * 0.125;
                *v27++ = _mm_loadu_si128(&v35);
              }
              while ( v26 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
              v23 = v37;
              v25 = v36;
              v9 = 0;
            }
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**((_QWORD **)this + 1) + 16LL))(
              *((_QWORD *)this + 1),
              v25++,
              v23,
              v38);
            v36 = v25;
            v24 = 2 * v23;
          }
          while ( v25 < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) );
        }
        v22 = *((_QWORD *)this + 1);
        v37 = ++v23;
      }
      while ( v23 < *(_DWORD *)(v22 + 144) );
      v10 = v38;
    }
    operator delete(v21);
  }
  else
  {
    v9 = -2147024882;
  }
  operator delete(v10);
  return v9;
}

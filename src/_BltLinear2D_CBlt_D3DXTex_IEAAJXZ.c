__int64 __fastcall D3DXTex::CBlt::BltLinear2D(D3DXTex::CBlt *this)
{
  int v1; // esi
  unsigned int v2; // edi
  __m128i *v4; // r13
  char *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  float *v8; // rbp
  float *v9; // rax
  unsigned int *v10; // r14
  size_t v11; // rax
  int v12; // ecx
  size_t v13; // rax
  char *v14; // rax
  unsigned int v15; // r15d
  int v16; // ebp
  char *v17; // rsi
  unsigned int *v18; // r14
  char *v19; // rax
  __m128i *v20; // r9
  float *v21; // r8
  float v22; // xmm10_4
  float v23; // xmm11_4
  __int64 v24; // rcx
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  unsigned int v33; // xmm4_4
  unsigned int v34; // xmm5_4
  __int32 v35; // xmm11_4
  char *v37; // [rsp+20h] [rbp-C8h]
  float *v38; // [rsp+28h] [rbp-C0h]
  __m128i v39; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+F0h] [rbp+8h]
  float *v41; // [rsp+100h] [rbp+18h]
  float *Block; // [rsp+108h] [rbp+20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( (_BYTE)v1 != 3 )
    return 2147500037LL;
  v6 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v6 + 144) != 1 )
    return 2147500037LL;
  v7 = *(_QWORD *)this;
  if ( *(_DWORD *)(v7 + 144) != 1 )
    return 2147500037LL;
  v8 = D3DXTex::LF_SetupLinear(*(_DWORD *)(v7 + 136), *(_DWORD *)(v6 + 136), (v1 & 0x10000) == 0);
  Block = v8;
  v9 = D3DXTex::LF_SetupLinear(
         *(_DWORD *)(*(_QWORD *)this + 140LL),
         *(_DWORD *)(*((_QWORD *)this + 1) + 140LL),
         (v1 & 0x20000) == 0);
  v10 = (unsigned int *)v9;
  v38 = v9;
  if ( !v8 || !v9 )
    goto LABEL_27;
  v11 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
    v11 = -1;
  v4 = (__m128i *)operator new(v11, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v4 )
    goto LABEL_27;
  v12 = *(_DWORD *)(*(_QWORD *)this + 136LL);
  v13 = 16LL * (unsigned int)(2 * v12);
  if ( !is_mul_ok((unsigned int)(2 * v12), 0x10u) )
    v13 = -1;
  v14 = (char *)operator new(v13, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v5 = v14;
  v37 = v14;
  if ( v14 )
  {
    v41 = (float *)v14;
    v15 = -1;
    v16 = -1;
    v40 = 0;
    v17 = &v14[16 * *(unsigned int *)(*(_QWORD *)this + 136LL)];
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) )
    {
      v18 = v10 + 2;
      do
      {
        if ( *(v18 - 2) != v15 )
        {
          if ( *(v18 - 2) == v16 )
          {
            v19 = v5;
            v15 = v16;
            v41 = (float *)v17;
            v5 = v17;
            v16 = -1;
            v17 = v19;
          }
          else
          {
            v15 = *(v18 - 2);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
              *(_QWORD *)this,
              v15,
              0,
              v5);
          }
        }
        if ( *v18 != v16 )
        {
          v16 = *v18;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
            *(_QWORD *)this,
            *v18,
            0,
            v17);
        }
        if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
        {
          v20 = v4;
          v21 = Block + 2;
          do
          {
            v22 = v21[1];
            v23 = *(v21 - 1);
            v24 = 2LL * *(unsigned int *)v21;
            ++v2;
            v25 = 2LL * *((unsigned int *)v21 - 2);
            v21 += 4;
            v26 = *((float *)v18 + 1);
            v27 = (float)((float)(v23 * *(float *)&v17[8 * v25]) + (float)(v22 * *(float *)&v17[8 * v24])) * v26;
            v28 = (float)((float)(v23 * *(float *)&v17[8 * v25 + 4]) + (float)(v22 * *(float *)&v17[8 * v24 + 4])) * v26;
            v29 = (float)((float)(v23 * *(float *)&v17[8 * v25 + 8]) + (float)(v22 * *(float *)&v17[8 * v24 + 8])) * v26;
            v30 = (float)((float)(v23 * *(float *)&v17[8 * v25 + 12]) + (float)(v22 * *(float *)&v17[8 * v24 + 12]))
                * v26;
            v31 = (float)(v23 * v41[2 * v25]) + (float)(v22 * v41[2 * v24]);
            v32 = *((float *)v18 - 1);
            *(float *)&v33 = (float)((float)((float)(v23 * v41[2 * v25 + 1]) + (float)(v22 * v41[2 * v24 + 1])) * v32)
                           + v28;
            *(float *)&v34 = (float)((float)((float)(v23 * v41[2 * v25 + 2]) + (float)(v22 * v41[2 * v24 + 2])) * v32)
                           + v29;
            *(float *)&v35 = (float)((float)((float)(v23 * v41[2 * v25 + 3]) + (float)(v22 * v41[2 * v24 + 3])) * v32)
                           + v30;
            *(float *)v39.m128i_i32 = (float)(v31 * v32) + v27;
            *(__int64 *)((char *)v39.m128i_i64 + 4) = __PAIR64__(v34, v33);
            v39.m128i_i32[3] = v35;
            *v20++ = _mm_loadu_si128(&v39);
          }
          while ( v2 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
          v2 = 0;
          v5 = (char *)v41;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**((_QWORD **)this + 1) + 16LL))(
          *((_QWORD *)this + 1),
          v40,
          0,
          v4);
        v18 += 4;
        ++v40;
      }
      while ( v40 < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL) );
      v5 = v37;
      v10 = (unsigned int *)v38;
    }
    v8 = Block;
  }
  else
  {
LABEL_27:
    v2 = -2147024882;
  }
  operator delete(v8);
  operator delete(v10);
  operator delete(v4);
  operator delete(v5);
  return v2;
}

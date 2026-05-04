__int64 __fastcall D3DXTex::CBlt::BltLinear3D(D3DXTex::CBlt *this)
{
  int v1; // ebp
  unsigned int v2; // esi
  __m128i *v4; // r14
  void *v5; // r12
  float *v7; // r13
  float *v8; // rbx
  float *v9; // rax
  unsigned int *v10; // r15
  size_t v11; // rax
  size_t v12; // rax
  char *v13; // rax
  float *v14; // r9
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  char *v18; // rbp
  char *v19; // r13
  char *v20; // rbx
  float *v21; // r15
  __m128i *v22; // r12
  int v23; // ecx
  unsigned int v24; // r14d
  unsigned int *v25; // r8
  __int64 v26; // rdx
  char *v27; // rax
  __m128i *v28; // r10
  float *v29; // r9
  float v30; // xmm9_4
  float v31; // xmm11_4
  __int64 v32; // rcx
  __int64 v33; // rax
  float v34; // xmm10_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm12_4
  float v38; // xmm15_4
  float v39; // xmm13_4
  float v40; // xmm14_4
  float v41; // xmm9_4
  float v42; // xmm6_4
  float v43; // xmm4_4
  float v44; // xmm8_4
  float v45; // xmm7_4
  float v46; // xmm3_4
  float v47; // xmm5_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  unsigned int v50; // xmm4_4
  unsigned int v51; // xmm6_4
  unsigned int v52; // xmm5_4
  bool v53; // cf
  unsigned int *v54; // [rsp+20h] [rbp-138h]
  float *v55; // [rsp+28h] [rbp-130h]
  __m128i *v56; // [rsp+30h] [rbp-128h]
  float *v57; // [rsp+38h] [rbp-120h]
  float *Block; // [rsp+40h] [rbp-118h]
  void *v59; // [rsp+48h] [rbp-110h]
  float *v60; // [rsp+50h] [rbp-108h]
  __m128i v61; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v62; // [rsp+160h] [rbp+8h]
  unsigned int v63; // [rsp+168h] [rbp+10h]
  unsigned int v64; // [rsp+170h] [rbp+18h]
  float v65; // [rsp+178h] [rbp+20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( (_BYTE)v1 != 3 )
    return 2147500037LL;
  v7 = D3DXTex::LF_SetupLinear(
         *(_DWORD *)(*(_QWORD *)this + 136LL),
         *(_DWORD *)(*((_QWORD *)this + 1) + 136LL),
         (v1 & 0x10000) == 0);
  Block = v7;
  v8 = D3DXTex::LF_SetupLinear(
         *(_DWORD *)(*(_QWORD *)this + 140LL),
         *(_DWORD *)(*((_QWORD *)this + 1) + 140LL),
         (v1 & 0x20000) == 0);
  v57 = v8;
  v9 = D3DXTex::LF_SetupLinear(
         *(_DWORD *)(*(_QWORD *)this + 144LL),
         *(_DWORD *)(*((_QWORD *)this + 1) + 144LL),
         (v1 & 0x40000) == 0);
  v10 = (unsigned int *)v9;
  v60 = v9;
  if ( !v7 || !v8 || !v9 )
    goto LABEL_31;
  v11 = 16LL * *(unsigned int *)(*((_QWORD *)this + 1) + 136LL);
  if ( !is_mul_ok(*(unsigned int *)(*((_QWORD *)this + 1) + 136LL), 0x10u) )
    v11 = -1;
  v4 = (__m128i *)operator new(v11, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v56 = v4;
  if ( !v4 )
    goto LABEL_31;
  v12 = 16LL * (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)this + 136LL));
  if ( !is_mul_ok((unsigned int)(4 * *(_DWORD *)(*(_QWORD *)this + 136LL)), 0x10u) )
    v12 = -1;
  v13 = (char *)operator new(v12, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v5 = v13;
  v59 = v13;
  if ( v13 )
  {
    v14 = (float *)v13;
    v55 = (float *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)this + 136LL);
    v16 = *((_QWORD *)this + 1);
    v17 = 0;
    v18 = (char *)&v14[8 * v15];
    v19 = (char *)&v14[12 * v15];
    v20 = (char *)&v14[4 * v15];
    v64 = 0;
    if ( *(_DWORD *)(v16 + 144) )
    {
      v21 = (float *)(v10 + 2);
      v22 = v4;
      do
      {
        v23 = -1;
        v63 = 0;
        v24 = -1;
        v62 = -1;
        if ( *(_DWORD *)(v16 + 140) )
        {
          v25 = (unsigned int *)(v57 + 2);
          v54 = (unsigned int *)(v57 + 2);
          do
          {
            v26 = *(v25 - 2);
            if ( (_DWORD)v26 != v23 )
            {
              if ( (_DWORD)v26 == v24 )
              {
                v27 = v18;
                v62 = v24;
                v55 = (float *)v20;
                v18 = v19;
                v24 = -1;
                v20 = (char *)v14;
                v19 = v27;
              }
              else
              {
                v62 = *(v25 - 2);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)this + 8LL))(
                  *(_QWORD *)this,
                  v26,
                  *((unsigned int *)v21 - 2));
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                  *(_QWORD *)this,
                  v62,
                  *(unsigned int *)v21,
                  v18);
                v25 = v54;
              }
            }
            if ( *v25 != v24 )
            {
              v24 = *v25;
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                *v25,
                *((unsigned int *)v21 - 2),
                v20);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)this + 8LL))(
                *(_QWORD *)this,
                v24,
                *(unsigned int *)v21,
                v19);
              v25 = v54;
            }
            if ( *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) )
            {
              v28 = v22;
              v29 = Block + 2;
              do
              {
                v30 = *(v29 - 1);
                v31 = *((float *)v25 + 1);
                v32 = 2LL * *(unsigned int *)v29;
                v33 = 2LL * *((unsigned int *)v29 - 2);
                v34 = *((float *)v25 - 1);
                v35 = v21[1];
                v36 = v29[1] * *(float *)&v20[16 * *(unsigned int *)v29 + 8];
                v37 = (float)((float)((float)((float)(v30 * *(float *)&v18[16 * *((unsigned int *)v29 - 2)])
                                            + (float)(v29[1] * *(float *)&v18[16 * *(unsigned int *)v29]))
                                    * v34)
                            + (float)((float)((float)(v30 * *(float *)&v19[16 * *((unsigned int *)v29 - 2)])
                                            + (float)(v29[1] * *(float *)&v19[16 * *(unsigned int *)v29]))
                                    * v31))
                    * v35;
                v38 = (float)((float)((float)((float)(v30 * *(float *)&v18[16 * *((unsigned int *)v29 - 2) + 12])
                                            + (float)(v29[1] * *(float *)&v18[16 * *(unsigned int *)v29 + 12]))
                                    * v34)
                            + (float)((float)((float)(v30 * *(float *)&v19[16 * *((unsigned int *)v29 - 2) + 12])
                                            + (float)(v29[1] * *(float *)&v19[16 * *(unsigned int *)v29 + 12]))
                                    * v31))
                    * v35;
                v39 = (float)((float)((float)((float)(v30 * *(float *)&v18[16 * *((unsigned int *)v29 - 2) + 4])
                                            + (float)(v29[1] * *(float *)&v18[16 * *(unsigned int *)v29 + 4]))
                                    * v34)
                            + (float)((float)((float)(v30 * *(float *)&v19[16 * *((unsigned int *)v29 - 2) + 4])
                                            + (float)(v29[1] * *(float *)&v19[16 * *(unsigned int *)v29 + 4]))
                                    * v31))
                    * v35;
                v40 = (float)((float)((float)((float)(v30 * *(float *)&v18[16 * *((unsigned int *)v29 - 2) + 8])
                                            + (float)(v29[1] * *(float *)&v18[16 * *(unsigned int *)v29 + 8]))
                                    * v34)
                            + (float)((float)((float)(v30 * *(float *)&v19[16 * *((unsigned int *)v29 - 2) + 8])
                                            + (float)(v29[1] * *(float *)&v19[16 * *(unsigned int *)v29 + 8]))
                                    * v31))
                    * v35;
                v41 = v30 * *(float *)&v20[16 * *((unsigned int *)v29 - 2) + 8];
                v42 = *(v29 - 1);
                v43 = (float)(v42 * *(float *)&v20[16 * *((unsigned int *)v29 - 2) + 12])
                    + (float)(v29[1] * *(float *)&v20[16 * *(unsigned int *)v29 + 12]);
                v44 = (float)(v42 * *(float *)&v20[16 * *((unsigned int *)v29 - 2) + 4])
                    + (float)(v29[1] * *(float *)&v20[16 * *(unsigned int *)v29 + 4]);
                v45 = (float)((float)(v42 * *(float *)&v20[16 * *((unsigned int *)v29 - 2)])
                            + (float)(v29[1] * *(float *)&v20[16 * *(unsigned int *)v29]))
                    * v31;
                ++v2;
                v29 += 4;
                v65 = v43 * v31;
                v46 = v42 * v55[2 * v33];
                v47 = v42 * v55[2 * v33 + 2];
                v48 = *(v29 - 3);
                v49 = *(v21 - 1);
                *(float *)&v50 = (float)((float)((float)((float)((float)(v42 * v55[2 * v33 + 1])
                                                               + (float)(v48 * v55[2 * v32 + 1]))
                                                       * v34)
                                               + (float)(v44 * v31))
                                       * v49)
                               + v39;
                *(float *)&v51 = (float)((float)((float)((float)((float)(v42 * v55[2 * v33 + 3])
                                                               + (float)(v48 * v55[2 * v32 + 3]))
                                                       * v34)
                                               + v65)
                                       * v49)
                               + v38;
                *(float *)&v52 = (float)((float)((float)((float)(v47 + (float)(v48 * v55[2 * v32 + 2])) * v34)
                                               + (float)((float)(v41 + v36) * v31))
                                       * v49)
                               + v40;
                v61.m128i_i64[0] = __PAIR64__(
                                     v50,
                                     (float)((float)((float)((float)(v46 + (float)(v48 * v55[2 * v32])) * v34) + v45)
                                           * v49)
                                   + v37);
                v61.m128i_i64[1] = __PAIR64__(v51, v52);
                *v28++ = _mm_loadu_si128(&v61);
              }
              while ( v2 < *(_DWORD *)(*((_QWORD *)this + 1) + 136LL) );
              v2 = 0;
            }
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __m128i *))(**((_QWORD **)this + 1) + 16LL))(
              *((_QWORD *)this + 1),
              v63,
              v64,
              v22);
            v23 = v62;
            v25 = v54 + 4;
            v53 = ++v63 < *(_DWORD *)(*((_QWORD *)this + 1) + 140LL);
            v14 = v55;
            v54 += 4;
          }
          while ( v53 );
          v17 = v64;
        }
        v16 = *((_QWORD *)this + 1);
        ++v17;
        v21 += 4;
        v64 = v17;
      }
      while ( v17 < *(_DWORD *)(v16 + 144) );
      v5 = v59;
      v4 = v56;
      v10 = (unsigned int *)v60;
    }
    v8 = v57;
    v7 = Block;
  }
  else
  {
LABEL_31:
    v2 = -2147024882;
  }
  operator delete(v7);
  operator delete(v8);
  operator delete(v10);
  operator delete(v4);
  operator delete(v5);
  return v2;
}

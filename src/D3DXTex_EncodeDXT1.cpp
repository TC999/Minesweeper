__int64 __fastcall D3DXTex::EncodeDXT1(__int64 a1, float *a2, int a3, int a4)
{
  float *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // esi
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  unsigned int v14; // r8d
  float *v15; // rdx
  __int64 v16; // rcx
  char *v17; // r9
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  int v26; // eax
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // dx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  float v37; // xmm10_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm13_4
  float v42; // xmm0_4
  float v43; // xmm6_4
  float v44; // xmm7_4
  float v45; // xmm8_4
  unsigned int v46; // ebp
  unsigned int v47; // r9d
  char *v48; // r14
  char *v49; // r13
  char *v50; // r15
  char *v51; // rbx
  char *v52; // r11
  float *v53; // rdx
  float *v54; // r10
  _BYTE *v55; // rcx
  char *v56; // rdi
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  float v60; // xmm2_4
  unsigned int v61; // r8d
  int v62; // eax
  float v63; // xmm3_4
  float v64; // xmm4_4
  float v65; // xmm5_4
  char *v66; // rcx
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm4_4
  float v70; // xmm5_4
  __m128i v72; // [rsp+20h] [rbp-388h] BYREF
  __m128i v73; // [rsp+30h] [rbp-378h] BYREF
  __m128i v74; // [rsp+40h] [rbp-368h]
  __m128i v75; // [rsp+50h] [rbp-358h]
  float v76; // [rsp+60h] [rbp-348h]
  float v77; // [rsp+64h] [rbp-344h]
  float v78; // [rsp+68h] [rbp-340h]
  float v79; // [rsp+6Ch] [rbp-33Ch]
  float v80; // [rsp+70h] [rbp-338h]
  float v81; // [rsp+74h] [rbp-334h]
  float v82; // [rsp+78h] [rbp-330h]
  float v83; // [rsp+7Ch] [rbp-32Ch]
  char *v84; // [rsp+80h] [rbp-328h] BYREF
  float v85; // [rsp+88h] [rbp-320h]
  __int64 *v86; // [rsp+90h] [rbp-318h]
  char *v87; // [rsp+98h] [rbp-310h] BYREF
  float v88; // [rsp+A0h] [rbp-308h]
  char *v89; // [rsp+A8h] [rbp-300h]
  _BYTE *v90; // [rsp+B0h] [rbp-2F8h]
  char *v91; // [rsp+B8h] [rbp-2F0h]
  char *v92; // [rsp+C0h] [rbp-2E8h]
  char *v93; // [rsp+C8h] [rbp-2E0h]
  char *v94; // [rsp+D0h] [rbp-2D8h]
  char *v95; // [rsp+D8h] [rbp-2D0h]
  _DWORD v96[64]; // [rsp+E0h] [rbp-2C8h] BYREF
  int v97; // [rsp+1E0h] [rbp-1C8h] BYREF
  int v98; // [rsp+1E4h] [rbp-1C4h] BYREF
  _BYTE v99[408]; // [rsp+1E8h] [rbp-1C0h] BYREF

  if ( a3 )
  {
    v7 = a2 + 3;
    v8 = 0;
    v9 = 16;
    do
    {
      if ( *v7 < 0.5 )
        ++v8;
      v7 += 4;
      --v9;
    }
    while ( v9 );
    if ( v8 == 16 )
    {
      *(_DWORD *)(a1 + 4) = -1;
      *(_WORD *)a1 = 0;
      *(_WORD *)(a1 + 2) = -1;
      return 0;
    }
    v10 = 4 - (v8 != 0);
  }
  else
  {
    v10 = 4;
  }
  if ( a4 )
    memset(v96, 0, sizeof(v96));
  v11 = *((float *)&xmmword_1000A7BD8 + 2);
  v12 = *((float *)&xmmword_1000A7BD8 + 1);
  v13 = *(float *)&xmmword_1000A7BD8;
  v14 = 0;
  v15 = a2 + 2;
  v16 = 0;
  v95 = (char *)((char *)v96 - (char *)a2);
  v17 = (char *)((char *)&v97 - (char *)a2);
  do
  {
    v18 = *(v15 - 2);
    v19 = *(v15 - 1);
    v20 = *v15;
    if ( a4 )
    {
      v18 = v18 + *(float *)&v96[v16];
      v19 = v19 + *(float *)&v96[v16 + 1];
      v20 = v20 + *(float *)((char *)v15 + (char *)v96 - (char *)a2);
    }
    *(float *)((char *)v15 + (char *)&v98 - (char *)a2) = 1.0;
    v21 = (float)(int)(float)((float)(v18 * 31.0) + 0.5) * 0.032258064;
    *(float *)((char *)&v97 + v16 * 4) = v21;
    v22 = (float)(int)(float)((float)(v19 * 63.0) + 0.5) * 0.015873017;
    *(float *)&v99[v16 * 4 - 4] = v22;
    v23 = (float)(int)(float)((float)(v20 * 31.0) + 0.5) * 0.032258064;
    *(float *)((char *)v15 + (_QWORD)v17) = v23;
    if ( a4 )
    {
      v24 = v18 - v21;
      v25 = v19 - v22;
      v26 = v14 & 3;
      v27 = v20 - v23;
      if ( v26 != 3 )
      {
        v28 = (float)(v25 * 0.4375) + *(float *)&v96[v16 + 5];
        *(float *)&v96[v16 + 4] = (float)(v24 * 0.4375) + *(float *)&v96[v16 + 4];
        *(float *)&v96[v16 + 5] = v28;
        *(float *)&v96[v16 + 6] = (float)(v27 * 0.4375) + *(float *)&v96[v16 + 6];
      }
      if ( v14 < 0xC )
      {
        if ( (v14 & 3) != 0 )
        {
          v29 = (float)(v25 * 0.1875) + *(float *)&v96[v16 + 13];
          *(float *)&v96[v16 + 12] = (float)(v24 * 0.1875) + *(float *)&v96[v16 + 12];
          *(float *)&v96[v16 + 13] = v29;
          *(float *)&v96[v16 + 14] = (float)(v27 * 0.1875) + *(float *)&v96[v16 + 14];
        }
        v30 = (float)(v25 * 0.3125) + *(float *)&v96[v16 + 17];
        *(float *)&v96[v16 + 16] = (float)(v24 * 0.3125) + *(float *)&v96[v16 + 16];
        *(float *)&v96[v16 + 17] = v30;
        *(float *)&v96[v16 + 18] = (float)(v27 * 0.3125) + *(float *)&v96[v16 + 18];
        if ( v26 != 3 )
        {
          v31 = (float)(v25 * 0.0625) + *(float *)&v96[v16 + 21];
          v32 = (float)(v27 * 0.0625) + *(float *)&v96[v16 + 22];
          *(float *)&v96[v16 + 20] = (float)(v24 * 0.0625) + *(float *)&v96[v16 + 20];
          *(float *)&v96[v16 + 21] = v31;
          *(float *)&v96[v16 + 22] = v32;
        }
      }
    }
    ++v14;
    v16 += 4;
    *(float *)&v96[v16 + 60] = v21 * v13;
    *(float *)&v96[v16 + 61] = v22 * v12;
    *(float *)((char *)v15 + (_QWORD)v17) = v23 * v11;
    v15 += 4;
  }
  while ( v14 < 0x10 );
  D3DXTex::OptimizeRGB((float *)v72.m128i_i32, (float *)v73.m128i_i32, (__int64)&v97, v10);
  *(float *)&v87 = *(float *)&dword_1000A7BE8 * *(float *)v72.m128i_i32;
  *((float *)&v87 + 1) = *(float *)&v72.m128i_i32[1] * *(float *)&dword_1000A7BEC;
  v88 = *(float *)&v72.m128i_i32[2] * *(float *)&dword_1000A7BF0;
  *((float *)&v84 + 1) = *(float *)&v73.m128i_i32[1] * *(float *)&dword_1000A7BEC;
  *(float *)&v84 = *(float *)v73.m128i_i32 * *(float *)&dword_1000A7BE8;
  v85 = *(float *)&v73.m128i_i32[2] * *(float *)&dword_1000A7BF0;
  D3DXTex::Encode565((float *)&v87);
  v33 = D3DXTex::Encode565((float *)&v84);
  if ( v10 == 4 && v34 == v33 )
  {
    *(_WORD *)a1 = v34;
    *(_WORD *)(a1 + 2) = v33;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    *(float *)v72.m128i_i32 = v13 * (float)((float)(v34 >> 11) * 0.032258064);
    *(float *)&v72.m128i_i32[1] = (float)((float)((v34 >> 5) & 0x3F) * 0.015873017) * v12;
    *(float *)&v72.m128i_i32[2] = (float)((float)(v34 & 0x1F) * 0.032258064) * v11;
    *(float *)v73.m128i_i32 = (float)((float)(v33 >> 11) * 0.032258064) * v13;
    *(float *)&v73.m128i_i32[1] = (float)((float)((v33 >> 5) & 0x3F) * 0.015873017) * v12;
    *(float *)&v73.m128i_i32[2] = (float)((float)(v33 & 0x1F) * 0.032258064) * v11;
    if ( (v10 == 3) == v34 <= v33 )
    {
      v35 = _mm_loadu_si128(&v72);
      v36 = _mm_loadu_si128(&v73);
      *(_WORD *)a1 = v34;
      *(_WORD *)(a1 + 2) = v33;
    }
    else
    {
      v35 = _mm_loadu_si128(&v73);
      v36 = _mm_loadu_si128(&v72);
      *(_WORD *)a1 = v33;
      *(_WORD *)(a1 + 2) = v34;
    }
    v74 = v35;
    v37 = *(float *)v35.m128i_i32;
    v75 = v36;
    v38 = *(float *)v36.m128i_i32 - *(float *)v35.m128i_i32;
    v39 = *(float *)&v36.m128i_i32[1] - *(float *)&v35.m128i_i32[1];
    v40 = *(float *)&v36.m128i_i32[2] - *(float *)&v35.m128i_i32[2];
    if ( v10 == 3 )
    {
      v86 = qword_1000236A8;
      v76 = (float)(v38 * 0.5) + *(float *)v35.m128i_i32;
      v79 = (float)((float)(*(float *)&v75.m128i_i32[3] - *(float *)&v74.m128i_i32[3]) * 0.5)
          + *(float *)&v74.m128i_i32[3];
      v77 = (float)(v39 * 0.5) + *(float *)&v35.m128i_i32[1];
      v78 = (float)(v40 * 0.5) + *(float *)&v35.m128i_i32[2];
    }
    else
    {
      v86 = qword_1000236B8;
      v76 = (float)(v38 * 0.33333334) + *(float *)v35.m128i_i32;
      v77 = (float)(v39 * 0.33333334) + *(float *)&v35.m128i_i32[1];
      v78 = (float)(v40 * 0.33333334) + *(float *)&v35.m128i_i32[2];
      v83 = (float)((float)(*(float *)&v75.m128i_i32[3] - *(float *)&v74.m128i_i32[3]) * 0.66666669)
          + *(float *)&v74.m128i_i32[3];
      v79 = (float)((float)(*(float *)&v75.m128i_i32[3] - *(float *)&v74.m128i_i32[3]) * 0.33333334)
          + *(float *)&v74.m128i_i32[3];
      v80 = (float)(v38 * 0.66666669) + *(float *)v35.m128i_i32;
      v81 = (float)(v39 * 0.66666669) + *(float *)&v35.m128i_i32[1];
      v82 = (float)(v40 * 0.66666669) + *(float *)&v35.m128i_i32[2];
    }
    v41 = (float)(int)(v10 - 1);
    if ( v34 == v33 )
      v42 = 0.0;
    else
      v42 = v41 / (float)((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    v43 = v38 * v42;
    v44 = v39 * v42;
    v45 = v40 * v42;
    v46 = 0;
    if ( a4 )
      memset(v96, 0, sizeof(v96));
    v47 = 0;
    v48 = (char *)((char *)&v96[20] - (char *)a2);
    v94 = (char *)((char *)&v96[3] - (char *)a2);
    v49 = (char *)((char *)&v96[19] - (char *)a2);
    v92 = (char *)((char *)&v96[4] - (char *)a2);
    v50 = (char *)((char *)&v96[21] - (char *)a2);
    v51 = (char *)((char *)&v96[4] - (char *)a2);
    v52 = (char *)((char *)&v96[1] - (char *)a2);
    v91 = (char *)((char *)&v96[5] - (char *)a2);
    v53 = a2 + 1;
    v54 = (float *)v96;
    v93 = (char *)((char *)&v96[11] - (char *)a2);
    v89 = (char *)((char *)&v96[12] - (char *)a2);
    v84 = (char *)((char *)&v96[13] - (char *)a2);
    v87 = (char *)((char *)&v96[15] - (char *)a2);
    v72.m128i_i64[0] = (char *)&v96[16] - (char *)a2;
    v73.m128i_i64[0] = (char *)&v96[17] - (char *)a2;
    v55 = (_BYTE *)(v99 - (_BYTE *)a2);
    v56 = (char *)((char *)&v96[3] - (char *)a2);
    v90 = v55;
    do
    {
      if ( v10 == 3 && v53[2] < 0.5 )
      {
        v46 = (v46 >> 2) | 0xC0000000;
      }
      else
      {
        v57 = *(float *)&xmmword_1000A7BD8 * *(v53 - 1);
        v58 = *((float *)&xmmword_1000A7BD8 + 1) * *v53;
        v59 = *((float *)&xmmword_1000A7BD8 + 2) * v53[1];
        if ( a4 )
        {
          v57 = v57 + *v54;
          v59 = v59 + *(float *)((char *)v53 + (_QWORD)v52);
          v58 = v58 + *(float *)((char *)v53 + (_QWORD)v95);
        }
        v60 = (float)((float)((float)(v58 - *(float *)&v35.m128i_i32[1]) * v44) + (float)((float)(v57 - v37) * v43))
            + (float)((float)(v59 - *(float *)&v35.m128i_i32[2]) * v45);
        if ( v60 > 0.0 )
        {
          if ( v60 < v41 )
            v61 = *((_DWORD *)v86 + (int)(float)(v60 + 0.5));
          else
            v61 = 1;
        }
        else
        {
          v61 = 0;
        }
        v46 = (v46 >> 2) | (v61 << 30);
        if ( a4 )
        {
          v62 = v47 & 3;
          v63 = (float)(v57 - *(float *)&v74.m128i_i32[4 * v61]) * *(float *)((char *)v53 + (_QWORD)v90);
          v64 = (float)(v58 - *(float *)&v74.m128i_i32[4 * v61 + 1]) * *(float *)((char *)v53 + (_QWORD)v90);
          v65 = (float)(v59 - *(float *)&v74.m128i_i32[4 * v61 + 2]) * *(float *)((char *)v53 + (_QWORD)v90);
          if ( v62 != 3 )
          {
            v66 = v91;
            v67 = (float)(v64 * 0.4375) + *(float *)((char *)v53 + (_QWORD)v51);
            *(float *)((char *)v53 + (_QWORD)v56) = (float)(v63 * 0.4375) + *(float *)((char *)v53 + (_QWORD)v56);
            v68 = (float)(v65 * 0.4375) + *(float *)((char *)v53 + (_QWORD)v66);
            *(float *)((char *)v53 + (_QWORD)v51) = v67;
            *(float *)((char *)v53 + (_QWORD)v66) = v68;
          }
          if ( v47 < 0xC )
          {
            if ( (v47 & 3) != 0 )
            {
              *(float *)((char *)v53 + (_QWORD)v93) = (float)(v63 * 0.1875) + *(float *)((char *)v53 + (_QWORD)v93);
              *(float *)((char *)v53 + (_QWORD)v89) = (float)(v64 * 0.1875) + *(float *)((char *)v53 + (_QWORD)v89);
              *(float *)((char *)v53 + (_QWORD)v84) = (float)(v65 * 0.1875) + *(float *)((char *)v53 + (_QWORD)v84);
            }
            *(float *)((char *)v53 + (_QWORD)v87) = (float)(v63 * 0.3125) + *(float *)((char *)v53 + (_QWORD)v87);
            *(float *)((char *)v53 + v72.m128i_i64[0]) = (float)(v64 * 0.3125)
                                                       + *(float *)((char *)v53 + v72.m128i_i64[0]);
            *(float *)((char *)v53 + v73.m128i_i64[0]) = (float)(v65 * 0.3125)
                                                       + *(float *)((char *)v53 + v73.m128i_i64[0]);
            if ( v62 != 3 )
            {
              v69 = (float)(v64 * 0.0625) + *(float *)((char *)v53 + (_QWORD)v48);
              v70 = (float)(v65 * 0.0625) + *(float *)((char *)v53 + (_QWORD)v50);
              *(float *)((char *)v53 + (_QWORD)v49) = (float)(v63 * 0.0625) + *(float *)((char *)v53 + (_QWORD)v49);
              *(float *)((char *)v53 + (_QWORD)v48) = v69;
              *(float *)((char *)v53 + (_QWORD)v50) = v70;
            }
          }
        }
      }
      ++v47;
      v53 += 4;
      v54 += 4;
    }
    while ( v47 < 0x10 );
    *(_DWORD *)(a1 + 4) = v46;
  }
  return 0;
}

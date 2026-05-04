float *__fastcall D3DXTex::OptimizeRGB(float *a1, float *a2, __int64 a3, unsigned int a4)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  float *v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float *result; // rax
  float v14; // xmm14_4
  float v15; // xmm11_4
  float v16; // xmm10_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm15_4
  float v24; // xmm14_4
  float *v25; // rax
  float v26; // xmm7_4
  float v27; // xmm12_4
  __int64 v28; // rcx
  float v29; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm11_4
  float v35; // xmm15_4
  float v36; // xmm14_4
  float v37; // xmm0_4
  float v38; // xmm8_4
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm4_4
  char v47; // r8
  float *v48; // rcx
  float v49; // xmm0_4
  float v50; // xmm6_4
  unsigned int v51; // r11d
  float v52; // xmm7_4
  float *v53; // rcx
  __int64 v54; // r9
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm15_4
  float v58; // xmm3_4
  float v59; // xmm4_4
  float v60; // xmm2_4
  float *v61; // r8
  __int64 v62; // r9
  float v63; // xmm11_4
  float v64; // xmm15_4
  float v65; // xmm14_4
  float v66; // xmm10_4
  float v67; // xmm13_4
  float v68; // xmm2_4
  unsigned int v69; // eax
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm5_4
  float v73; // xmm7_4
  float v74; // xmm6_4
  float v75; // xmm1_4
  float v76; // xmm4_4
  float v77; // xmm0_4
  float v78; // xmm3_4
  float v79; // xmm5_4
  float v80; // [rsp+0h] [rbp-148h]
  float v81; // [rsp+0h] [rbp-148h]
  float v82; // [rsp+4h] [rbp-144h]
  float v83; // [rsp+4h] [rbp-144h]
  float v84; // [rsp+8h] [rbp-140h]
  float v85; // [rsp+8h] [rbp-140h]
  float v86; // [rsp+Ch] [rbp-13Ch]
  float v87; // [rsp+Ch] [rbp-13Ch]
  float v88; // [rsp+10h] [rbp-138h]
  float v89; // [rsp+14h] [rbp-134h]
  float v90; // [rsp+18h] [rbp-130h]
  float v91; // [rsp+1Ch] [rbp-12Ch]
  float v92; // [rsp+20h] [rbp-128h]
  float v93; // [rsp+24h] [rbp-124h]
  float v94; // [rsp+28h] [rbp-120h]
  _DWORD v95[9]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v96[55]; // [rsp+54h] [rbp-F4h] BYREF
  float v97; // [rsp+168h] [rbp+20h]

  v4 = qword_100023688;
  v5 = qword_100023698;
  v6 = (float *)(a3 + 8);
  v8 = a4;
  v9 = 16;
  *(__m128i *)v95 = _mm_loadu_si128((const __m128i *)&xmmword_1000A7BD8);
  v10 = *(float *)&v95[2];
  v11 = *(float *)&v95[1];
  v12 = *(float *)v95;
  if ( a4 == 3 )
  {
    v4 = qword_100023668;
    v5 = qword_100023678;
  }
  result = (float *)(a3 + 8);
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  do
  {
    v17 = *(result - 2);
    if ( v12 > v17 )
      v12 = *(result - 2);
    v18 = *(result - 1);
    if ( v11 > v18 )
      v11 = *(result - 1);
    if ( v10 > *result )
      v10 = *result;
    if ( v17 > v14 )
      v14 = *(result - 2);
    if ( v18 > v15 )
      v15 = *(result - 1);
    if ( *result > v16 )
      v16 = *result;
    result += 4;
    --v9;
  }
  while ( v9 );
  v94 = v14;
  v80 = v12;
  v97 = v15;
  v19 = v14 - v12;
  v20 = v15 - v11;
  v21 = v16 - v10;
  v88 = v16;
  v22 = (float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21);
  v82 = v10;
  v84 = v22;
  if ( v22 >= 1.1754944e-38 )
  {
    v23 = v14 + v12;
    v24 = v15 + v11;
    v25 = (float *)(a3 + 8);
    v26 = 0.0;
    v27 = 0.0;
    v28 = 16;
    v29 = 1.0 / v22;
    v30 = 0.0;
    v31 = v29;
    v32 = v29;
    v33 = v29 * v21;
    v86 = v31 * v19;
    v34 = v32 * v20;
    v35 = v23 * 0.5;
    v36 = v24 * 0.5;
    v37 = v16 + v10;
    v38 = 0.0;
    do
    {
      v39 = *(v25 - 1);
      v40 = *(v25 - 2);
      v41 = *v25;
      v25 += 4;
      --v28;
      v42 = (float)(v40 - v35) * v86;
      v43 = (float)(v41 - (float)(v37 * 0.5)) * v33;
      v44 = (float)(v39 - v36) * v34;
      v45 = v44 + v42;
      v46 = v42 - v44;
      v26 = v26 + (float)((float)(v45 + v43) * (float)(v45 + v43));
      v38 = v38 + (float)((float)(v45 - v43) * (float)(v45 - v43));
      v27 = v27 + (float)((float)(v46 + v43) * (float)(v46 + v43));
      v30 = v30 + (float)((float)(v46 - v43) * (float)(v46 - v43));
    }
    while ( v28 );
    v15 = v97;
    LODWORD(result) = 1;
    v47 = 0;
    v48 = (float *)&v95[1];
    v14 = v94;
    *(float *)&v95[3] = v30;
    *(float *)&v95[2] = v27;
    v12 = v80;
    *(float *)&v95[1] = v38;
    v10 = v82;
    do
    {
      if ( *v48 > v26 )
      {
        v26 = *v48;
        v47 = (char)result;
      }
      result = (float *)(unsigned int)((_DWORD)result + 1);
      ++v48;
    }
    while ( (unsigned int)result < 4 );
    if ( (v47 & 2) != 0 )
    {
      v49 = v11;
      v11 = v97;
      v15 = v49;
      v97 = v49;
    }
    if ( (v47 & 1) != 0 )
    {
      v10 = v16;
      v16 = v82;
      v88 = v82;
    }
    v50 = FLOAT_0_00024414062;
    if ( v84 >= 0.00024414062 )
    {
      v51 = 0;
      result = (float *)(a4 - 1);
      v52 = (float)(int)result;
      v91 = (float)(int)result;
      do
      {
        if ( (_DWORD)v8 )
        {
          v53 = (float *)v4;
          result = (float *)v96;
          v54 = v8;
          do
          {
            v55 = *(float *)((char *)v53 + (char *)v5 - (char *)v4);
            v56 = *v53++;
            *(result - 1) = (float)(v55 * v14) + (float)(v56 * v12);
            *result = (float)(v55 * v15) + (float)(v56 * v11);
            result[1] = (float)(v55 * v16) + (float)(v56 * v10);
            result += 4;
            --v54;
          }
          while ( v54 );
        }
        v57 = v14 - v12;
        v58 = v15 - v11;
        v59 = v16 - v10;
        v60 = (float)((float)(v58 * v58) + (float)(v57 * v57)) + (float)(v59 * v59);
        if ( v50 > v60 )
          break;
        v61 = v6;
        v62 = 16;
        v63 = 0.0;
        v87 = 0.0;
        v93 = 0.0;
        v92 = 0.0;
        v90 = 0.0;
        v83 = 0.0;
        v64 = v57 * (float)(v52 / v60);
        v65 = v59 * (float)(v52 / v60);
        v81 = 0.0;
        v66 = 0.0;
        v67 = v58 * (float)(v52 / v60);
        do
        {
          v68 = (float)((float)((float)(*(v61 - 2) - v12) * v64) + (float)((float)(*(v61 - 1) - v11) * v67))
              + (float)((float)(*v61 - v10) * v65);
          if ( v68 < v52 )
            v69 = (int)(float)(v68 + 0.5);
          else
            v69 = v8 - 1;
          v70 = *((float *)v4 + v69);
          v71 = *((float *)v5 + v69);
          result = (float *)(2LL * v69);
          v72 = *(float *)&v95[2 * (_QWORD)result + 8] - *(v61 - 2);
          v73 = *(float *)&v96[2 * (_QWORD)result + 1] - *v61;
          v74 = *(float *)&v96[2 * (_QWORD)result] - *(v61 - 1);
          v61 += 4;
          --v62;
          v66 = v66 + (float)((float)(v70 * 0.125) * v72);
          v81 = v81 + (float)(v70 * (float)(v70 * 0.125));
          v90 = v90 + (float)((float)(v70 * 0.125) * v74);
          v75 = (float)(v71 * 0.125) * v74;
          v92 = v92 + (float)((float)(v70 * 0.125) * v73);
          v83 = v83 + (float)(v71 * (float)(v71 * 0.125));
          v76 = (float)(v71 * 0.125) * v73;
          v52 = v91;
          v77 = (float)(v71 * 0.125) * v72;
          v78 = v87 + v76;
          v79 = v93 + v75;
          v87 = v87 + v76;
          v63 = v63 + v77;
          v93 = v93 + v75;
        }
        while ( v62 );
        v14 = v94;
        v89 = v66;
        v16 = v88;
        v85 = v63;
        v15 = v97;
        if ( v81 > 0.0 )
        {
          v10 = v10 + (float)((float)(-1.0 / v81) * v92);
          v12 = v12 + (float)((float)(-1.0 / v81) * v89);
          v11 = v11 + (float)((float)(-1.0 / v81) * v90);
        }
        if ( v83 > 0.0 )
        {
          v16 = v88 + (float)((float)(-1.0 / v83) * v78);
          v14 = v94 + (float)((float)(-1.0 / v83) * v85);
          v15 = v97 + (float)((float)(-1.0 / v83) * v79);
          v88 = v16;
          v94 = v14;
          v97 = v15;
        }
        if ( (float)(v89 * v89) < 0.000015258789
          && (float)(v90 * v90) < 0.000015258789
          && (float)(v92 * v92) < 0.000015258789
          && (float)(v85 * v85) < 0.000015258789
          && (float)(v79 * v79) < 0.000015258789
          && (float)(v78 * v78) < 0.000015258789 )
        {
          break;
        }
        v50 = FLOAT_0_00024414062;
        v52 = v91;
        ++v51;
      }
      while ( v51 < 8 );
    }
  }
  *a1 = v12;
  a1[1] = v11;
  a1[2] = v10;
  *a2 = v14;
  a2[1] = v15;
  a2[2] = v16;
  return result;
}

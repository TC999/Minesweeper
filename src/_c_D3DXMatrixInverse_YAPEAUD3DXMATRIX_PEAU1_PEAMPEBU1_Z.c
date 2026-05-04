struct D3DXMATRIX *__fastcall c_D3DXMatrixInverse(struct D3DXMATRIX *a1, float *a2, const struct D3DXMATRIX *a3)
{
  float v3; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm11_4
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm12_4
  float v13; // xmm15_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm11_4
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm12_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm1_4
  float v29; // xmm15_4
  float v30; // xmm5_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm13_4
  float v34; // xmm1_4
  float v35; // xmm14_4
  float v36; // xmm15_4
  float v37; // xmm2_4
  struct D3DXMATRIX *result; // rax
  __m128 v39; // xmm6
  float v40; // xmm6_4
  float v41; // [rsp+20h] [rbp-C8h]
  float v42; // [rsp+24h] [rbp-C4h]
  float v43; // [rsp+28h] [rbp-C0h]
  float v44; // [rsp+2Ch] [rbp-BCh]
  float v45; // [rsp+30h] [rbp-B8h]
  float v46; // [rsp+34h] [rbp-B4h]
  float v47; // [rsp+F8h] [rbp+10h]
  float v48; // [rsp+F8h] [rbp+10h]
  float v49; // [rsp+100h] [rbp+18h]
  float v50; // [rsp+100h] [rbp+18h]
  float v51; // [rsp+108h] [rbp+20h]
  float v52; // [rsp+108h] [rbp+20h]

  v3 = *((float *)a3 + 3);
  v5 = *((float *)a3 + 7);
  v6 = *((float *)a3 + 15);
  v7 = *((float *)a3 + 2);
  v8 = *((float *)a3 + 14);
  v9 = *((float *)a3 + 11);
  v10 = *((float *)a3 + 9);
  v11 = *((float *)a3 + 13);
  v12 = *((float *)a3 + 10);
  v13 = *((float *)a3 + 1);
  v14 = (float)(*((float *)a3 + 5) * *(float *)a3) - (float)(*((float *)a3 + 4) * v13);
  v15 = (float)(v10 * *(float *)a3) - (float)(*((float *)a3 + 8) * v13);
  v47 = (float)(v11 * *(float *)a3) - (float)(*((float *)a3 + 12) * v13);
  v16 = (float)(v10 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 8) * *((float *)a3 + 5));
  v17 = (float)(v11 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 12) * *((float *)a3 + 5));
  v51 = (float)(v11 * *((float *)a3 + 8)) - (float)(*((float *)a3 + 12) * v10);
  v49 = *((float *)a3 + 6);
  v46 = (float)((float)(v7 * v16) - (float)(v49 * v15)) + (float)(v12 * v14);
  v45 = (float)((float)(v49 * v47) - (float)(v8 * v14)) - (float)(v7 * v17);
  v44 = (float)((float)(v7 * v51) - (float)(v12 * v47)) + (float)(v8 * v15);
  v43 = (float)((float)(v12 * v17) - (float)(v8 * v16)) - (float)(v49 * v51);
  v42 = (float)((float)(v15 * v5) - (float)(v14 * v9)) - (float)(v16 * v3);
  v41 = (float)((float)(v17 * v3) - (float)(v47 * v5)) + (float)(v14 * v6);
  v18 = (float)(v51 * v5) - (float)(v17 * v9);
  v19 = (float)(v7 * v5) - (float)(v49 * v3);
  v48 = (float)((float)(v47 * v9) - (float)(v15 * v6)) - (float)(v51 * v3);
  v52 = v18 + (float)(v16 * v6);
  v20 = (float)(v7 * v9) - (float)(v12 * v3);
  v21 = (float)(v7 * v6) - (float)(v8 * v3);
  v22 = (float)(v49 * v9) - (float)(v12 * v5);
  v23 = (float)(v49 * v6) - (float)(v8 * v5);
  v24 = *((float *)a3 + 4);
  v25 = (float)(v12 * v6) - (float)(v8 * v9);
  v26 = (float)((float)(v20 * *((float *)a3 + 5)) - (float)(v19 * v10)) - (float)(v22 * v13);
  v27 = (float)((float)(v23 * v13) - (float)(v21 * *((float *)a3 + 5))) + (float)(v19 * v11);
  v28 = v25 * v13;
  v29 = v23;
  v30 = *((float *)a3 + 8);
  v31 = (float)((float)(v21 * v10) - (float)(v20 * v11)) - v28;
  v32 = (float)((float)(v25 * *((float *)a3 + 5)) - (float)(v29 * v10)) + (float)(v22 * v11);
  v33 = (float)((float)(v22 * *(float *)a3) - (float)(v20 * v24)) + (float)(v19 * v30);
  v34 = *((float *)a3 + 12);
  v35 = (float)((float)(v21 * v24) - (float)(v19 * v34)) - (float)(v29 * *(float *)a3);
  v50 = (float)((float)(v25 * *(float *)a3) - (float)(v21 * v30)) + (float)(v20 * v34);
  v36 = (float)((float)(v29 * v30) - (float)(v22 * v34)) - (float)(v25 * v24);
  v37 = (float)((float)((float)(v26 * v34) + (float)(v27 * v30)) + (float)(v31 * v24)) + (float)(v32 * *(float *)a3);
  if ( a2 )
    *a2 = v37;
  if ( v37 == 0.0 )
    return 0;
  v39 = (__m128)0x3F800000u;
  v39.m128_f32[0] = 1.0 / v37;
  v40 = _mm_unpacklo_ps(v39, v39).m128_f32[0];
  if ( !finite(v40) )
    return 0;
  result = a1;
  *(float *)a1 = v32 * v40;
  *((float *)a1 + 4) = v40 * v36;
  *((float *)a1 + 1) = v31 * v40;
  *((float *)a1 + 5) = v40 * v50;
  *((float *)a1 + 6) = v40 * v35;
  *((float *)a1 + 2) = v27 * v40;
  *((float *)a1 + 3) = v26 * v40;
  *((float *)a1 + 8) = v52 * v40;
  *((float *)a1 + 7) = v40 * v33;
  *((float *)a1 + 9) = v48 * v40;
  *((float *)a1 + 10) = v41 * v40;
  *((float *)a1 + 11) = v42 * v40;
  *((float *)a1 + 12) = v43 * v40;
  *((float *)a1 + 13) = v44 * v40;
  *((float *)a1 + 14) = v45 * v40;
  *((float *)a1 + 15) = v46 * v40;
  return result;
}

struct D3DXVECTOR4 *__fastcall c_D3DXVec4Cross(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXVECTOR4 *a3,
        const struct D3DXVECTOR4 *a4)
{
  struct D3DXVECTOR4 *result; // rax
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm8_4
  float v13; // xmm11_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  __int32 v26; // xmm8_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  __m128i v29; // [rsp+0h] [rbp-78h] BYREF

  result = a1;
  v5 = *(float *)a4;
  v6 = *((float *)a4 + 2) * *((float *)a3 + 3);
  v7 = (float)(*((float *)a3 + 1) * *((float *)a4 + 3)) - (float)(*((float *)a4 + 1) * *((float *)a3 + 3));
  v8 = *((float *)a4 + 1) * *((float *)a3 + 2);
  v9 = (float)((float)(*((float *)a4 + 3) * *((float *)a3 + 2)) - v6) * *((float *)a2 + 1);
  v10 = (float)(*((float *)a3 + 1) * *((float *)a4 + 2)) - v8;
  v11 = *(float *)a3 * *((float *)a4 + 3);
  v12 = (float)(v6 - (float)(*((float *)a4 + 3) * *((float *)a3 + 2))) * *(float *)a2;
  v13 = (float)(v8 - (float)(*((float *)a3 + 1) * *((float *)a4 + 2))) * *(float *)a2;
  v14 = (float)(v9 - (float)(*((float *)a2 + 2) * v7)) + (float)(v10 * *((float *)a2 + 3));
  v15 = *(float *)a2;
  v16 = *(float *)a3 * *((float *)a4 + 1);
  v17 = (float)(*(float *)a4 * *((float *)a3 + 2)) - (float)(*(float *)a3 * *((float *)a4 + 2));
  *(float *)v29.m128i_i32 = v14;
  v18 = v5;
  v19 = v5 * *((float *)a3 + 1);
  v20 = v18 * *((float *)a3 + 3);
  v21 = v20 - v11;
  v22 = (float)(v11 - v20) * *((float *)a2 + 1);
  v23 = v12 - (float)(v21 * *((float *)a2 + 2));
  v24 = v17 * *((float *)a2 + 3);
  v25 = v17 * *((float *)a2 + 1);
  *(float *)&v26 = v23 + v24;
  v27 = v16 - v19;
  v29.m128i_i32[1] = v26;
  v28 = (float)(v19 - v16) * *((float *)a2 + 2);
  *(float *)&v29.m128i_i32[2] = (float)((float)(v15 * v7) - v22) + (float)(v27 * *((float *)a2 + 3));
  *(float *)&v29.m128i_i32[3] = (float)(v13 - v25) + v28;
  *(__m128i *)a1 = _mm_loadu_si128(&v29);
  return result;
}

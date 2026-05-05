struct D3DXVECTOR4 *__fastcall c_D3DXVec3Transform(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXMATRIX *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  struct D3DXVECTOR4 *result; // rax
  __m128i v18; // [rsp+0h] [rbp-28h] BYREF

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *(float *)a2;
  v6 = *(float *)a2 * *((float *)a3 + 1);
  v7 = v3 * *((float *)a3 + 5);
  v8 = v4 * *((float *)a3 + 9);
  *(float *)v18.m128i_i32 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                                  + (float)(v4 * *((float *)a3 + 8)))
                          + *((float *)a3 + 12);
  v9 = v5;
  v10 = v5 * *((float *)a3 + 3);
  v11 = v9 * *((float *)a3 + 2);
  v12 = (float)(v6 + v7) + v8;
  v13 = v3 * *((float *)a3 + 6);
  v14 = v3 * *((float *)a3 + 7);
  v15 = v4 * *((float *)a3 + 10);
  *(float *)&v18.m128i_i32[1] = v12 + *((float *)a3 + 13);
  v16 = v4 * *((float *)a3 + 11);
  *(float *)&v18.m128i_i32[2] = (float)((float)(v11 + v13) + v15) + *((float *)a3 + 14);
  *(float *)&v18.m128i_i32[3] = (float)((float)(v10 + v14) + v16) + *((float *)a3 + 15);
  result = a1;
  *(__m128i *)a1 = _mm_loadu_si128(&v18);
  return result;
}

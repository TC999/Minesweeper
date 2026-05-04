struct D3DXQUATERNION *__fastcall c_D3DXQuaternionMultiply(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm10_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  struct D3DXQUATERNION *result; // rax
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF

  v3 = *((float *)a3 + 3);
  v4 = *((float *)a3 + 1);
  v5 = *(float *)a3;
  v6 = *((float *)a3 + 2);
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a2 + 3);
  v9 = (float)(v7 * v3) - (float)(*((float *)a2 + 2) * *(float *)a3);
  *(float *)v17.m128i_i32 = (float)((float)((float)(*(float *)a3 * v8) + (float)(*(float *)a2 * v3))
                                  + (float)(v4 * *((float *)a2 + 2)))
                          - (float)(v6 * v7);
  v10 = v7 * v5;
  v11 = v5 * *(float *)a2;
  v12 = *((float *)a2 + 2);
  *(float *)&v17.m128i_i32[1] = (float)(v9 + (float)(v4 * v8)) + (float)(v6 * *(float *)a2);
  v13 = v10 + (float)(v12 * v3);
  v14 = v6;
  v15 = v6 * *((float *)a2 + 2);
  *(float *)&v17.m128i_i32[2] = (float)(v13 - (float)(v4 * *(float *)a2)) + (float)(v14 * v8);
  *(float *)&v17.m128i_i32[3] = (float)((float)((float)(v8 * v3) - v11) - (float)(v7 * v4)) - v15;
  result = a1;
  *(__m128i *)a1 = _mm_loadu_si128(&v17);
  return result;
}

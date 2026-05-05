struct D3DXVECTOR4 *__fastcall c_D3DXVec2Transform(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXMATRIX *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  struct D3DXVECTOR4 *result; // rax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  __int32 v9; // xmm4_4
  __m128i v10; // [rsp+0h] [rbp-18h] BYREF

  v3 = *((float *)a2 + 1);
  v4 = *(float *)a2;
  result = a1;
  v6 = *(float *)a2 * *((float *)a3 + 1);
  *(float *)v10.m128i_i32 = (float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                          + *((float *)a3 + 12);
  v7 = v4 * *((float *)a3 + 2);
  v8 = v4 * *((float *)a3 + 3);
  *(float *)&v10.m128i_i32[1] = (float)(v6 + (float)(v3 * *((float *)a3 + 5))) + *((float *)a3 + 13);
  *(float *)&v9 = (float)(v8 + (float)(v3 * *((float *)a3 + 7))) + *((float *)a3 + 15);
  *(float *)&v10.m128i_i32[2] = (float)(v7 + (float)(v3 * *((float *)a3 + 6))) + *((float *)a3 + 14);
  v10.m128i_i32[3] = v9;
  *(__m128i *)a1 = _mm_loadu_si128(&v10);
  return result;
}

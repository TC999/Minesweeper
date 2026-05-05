__m128i *__fastcall c_D3DXVec3TransformArray(
        __m128i *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  __m128i *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm5_4
  __m128i v23; // [rsp+0h] [rbp-28h] BYREF

  v6 = a1;
  if ( a6 )
  {
    v7 = a2;
    v8 = a6;
    do
    {
      v9 = *((float *)a3 + 1);
      v10 = *(float *)a3;
      v11 = *((float *)a3 + 2);
      a3 = (const struct D3DXVECTOR3 *)((char *)a3 + a4);
      v12 = (float)((float)(v9 * *((float *)a5 + 4)) + (float)(v10 * *(float *)a5)) + (float)(v11 * *((float *)a5 + 8));
      v13 = (float)(v10 * *((float *)a5 + 1)) + (float)(v9 * *((float *)a5 + 5));
      v14 = v11 * *((float *)a5 + 9);
      v15 = v9 * *((float *)a5 + 6);
      v16 = v9 * *((float *)a5 + 7);
      *(float *)v23.m128i_i32 = v12 + *((float *)a5 + 12);
      v17 = v13 + v14;
      v18 = v10 * *((float *)a5 + 2);
      v19 = v10 * *((float *)a5 + 3);
      v20 = v11 * *((float *)a5 + 10);
      *(float *)&v23.m128i_i32[1] = v17 + *((float *)a5 + 13);
      v21 = v11 * *((float *)a5 + 11);
      *(float *)&v23.m128i_i32[2] = (float)((float)(v18 + v15) + v20) + *((float *)a5 + 14);
      *(float *)&v23.m128i_i32[3] = (float)((float)(v19 + v16) + v21) + *((float *)a5 + 15);
      *a1 = _mm_loadu_si128(&v23);
      a1 = (__m128i *)((char *)a1 + v7);
      --v8;
    }
    while ( v8 );
  }
  return v6;
}

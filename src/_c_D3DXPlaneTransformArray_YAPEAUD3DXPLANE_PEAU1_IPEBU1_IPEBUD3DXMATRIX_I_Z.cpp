__m128i *__fastcall c_D3DXPlaneTransformArray(
        __m128i *a1,
        unsigned int a2,
        const struct D3DXPLANE *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  __m128i *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  __int32 v18; // xmm7_4
  __m128i v20; // [rsp+0h] [rbp-38h] BYREF

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
      v12 = *(float *)a3 * *((float *)a5 + 1);
      v13 = *((float *)a3 + 3);
      v14 = (float)(*(float *)a3 * *(float *)a5) + (float)(v9 * *((float *)a5 + 4));
      a3 = (const struct D3DXPLANE *)((char *)a3 + a4);
      v15 = v11 * *((float *)a5 + 9);
      *(float *)v20.m128i_i32 = (float)(v14 + (float)(v11 * *((float *)a5 + 8))) + (float)(v13 * *((float *)a5 + 12));
      v16 = v10 * *((float *)a5 + 2);
      v17 = v10 * *((float *)a5 + 3);
      *(float *)&v20.m128i_i32[1] = (float)((float)(v12 + (float)(v9 * *((float *)a5 + 5))) + v15)
                                  + (float)(v13 * *((float *)a5 + 13));
      *(float *)&v18 = (float)((float)(v17 + (float)(v9 * *((float *)a5 + 7))) + (float)(v11 * *((float *)a5 + 11)))
                     + (float)(v13 * *((float *)a5 + 15));
      *(float *)&v20.m128i_i32[2] = (float)((float)(v16 + (float)(v9 * *((float *)a5 + 6)))
                                          + (float)(v11 * *((float *)a5 + 10)))
                                  + (float)(v13 * *((float *)a5 + 14));
      v20.m128i_i32[3] = v18;
      *a1 = _mm_loadu_si128(&v20);
      a1 = (__m128i *)((char *)a1 + v7);
      --v8;
    }
    while ( v8 );
  }
  return v6;
}

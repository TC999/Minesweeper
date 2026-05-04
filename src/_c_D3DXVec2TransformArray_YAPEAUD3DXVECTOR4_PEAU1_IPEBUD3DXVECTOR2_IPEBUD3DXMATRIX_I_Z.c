__m128i *__fastcall c_D3DXVec2TransformArray(
        __m128i *a1,
        unsigned int a2,
        const struct D3DXVECTOR2 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  __m128i *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  __int32 v14; // xmm4_4
  __m128i v16; // [rsp+0h] [rbp-18h] BYREF

  v6 = a1;
  if ( a6 )
  {
    v7 = a2;
    v8 = a6;
    do
    {
      v9 = *((float *)a3 + 1);
      v10 = *(float *)a3;
      a3 = (const struct D3DXVECTOR2 *)((char *)a3 + a4);
      v11 = v10 * *((float *)a5 + 1);
      *(float *)v16.m128i_i32 = (float)((float)(v9 * *((float *)a5 + 4)) + (float)(v10 * *(float *)a5))
                              + *((float *)a5 + 12);
      v12 = v10 * *((float *)a5 + 2);
      v13 = v10 * *((float *)a5 + 3);
      *(float *)&v16.m128i_i32[1] = (float)(v11 + (float)(v9 * *((float *)a5 + 5))) + *((float *)a5 + 13);
      *(float *)&v14 = (float)(v13 + (float)(v9 * *((float *)a5 + 7))) + *((float *)a5 + 15);
      *(float *)&v16.m128i_i32[2] = (float)(v12 + (float)(v9 * *((float *)a5 + 6))) + *((float *)a5 + 14);
      v16.m128i_i32[3] = v14;
      *a1 = _mm_loadu_si128(&v16);
      a1 = (__m128i *)((char *)a1 + v7);
      --v8;
    }
    while ( v8 );
  }
  return v6;
}

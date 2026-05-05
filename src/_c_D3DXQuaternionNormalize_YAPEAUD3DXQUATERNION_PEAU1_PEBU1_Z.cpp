struct D3DXQUATERNION *__fastcall c_D3DXQuaternionNormalize(struct D3DXQUATERNION *a1, const struct D3DXQUATERNION *a2)
{
  float v4; // xmm7_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  unsigned int v7; // xmm7_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm6_4
  __m128i v12; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(float *)a2;
  v5 = (float)((float)((float)(v4 * v4) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
             + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a2 + 3));
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
  {
    if ( v5 <= 1.1754944e-38 )
    {
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = 0;
      *((_DWORD *)a1 + 2) = 0;
      *((_DWORD *)a1 + 3) = 0;
    }
    else
    {
      v6 = 1.0 / sqrtf(v5);
      *(float *)&v7 = v4 * v6;
      *(float *)&v8 = v6 * *((float *)a2 + 1);
      *(float *)&v9 = v6 * *((float *)a2 + 2);
      *(float *)&v10 = v6 * *((float *)a2 + 3);
      v12.m128i_i64[0] = __PAIR64__(v8, v7);
      v12.m128i_i64[1] = __PAIR64__(v10, v9);
      *(__m128i *)a1 = _mm_loadu_si128(&v12);
    }
  }
  else if ( a1 != a2 )
  {
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  }
  return a1;
}

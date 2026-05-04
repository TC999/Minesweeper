struct D3DXQUATERNION *__fastcall c_D3DXQuaternionBaryCentric(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3,
        const struct D3DXQUATERNION *a4,
        float a5,
        float a6)
{
  float v9; // xmm6_4
  float v10; // xmm1_4
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF

  v9 = a5 + a6;
  v10 = (float)(a5 + a6) - 0.0;
  if ( v10 < -0.00000011920929 || v10 > 0.00000011920929 )
  {
    off_1000A6790((struct D3DXQUATERNION *)v13, a2, a3, v9);
    off_1000A6790((struct D3DXQUATERNION *)v12, a2, a4, v9);
    off_1000A6790(a1, (const struct D3DXQUATERNION *)v13, (const struct D3DXQUATERNION *)v12, a6 / v9);
  }
  else if ( a1 != a2 )
  {
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  }
  return a1;
}

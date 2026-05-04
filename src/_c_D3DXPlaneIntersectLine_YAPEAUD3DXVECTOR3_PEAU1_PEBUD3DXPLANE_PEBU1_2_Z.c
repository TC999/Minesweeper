struct D3DXVECTOR3 *__fastcall c_D3DXPlaneIntersectLine(
        struct D3DXVECTOR3 *a1,
        const struct D3DXPLANE *a2,
        const struct D3DXVECTOR3 *a3,
        const struct D3DXVECTOR3 *a4)
{
  __m128 v7; // xmm6
  float v8; // xmm7_4
  float v9; // xmm5_4
  struct D3DXVECTOR3 *result; // rax

  v7 = (__m128)*((unsigned int *)a3 + 1);
  v8 = *(float *)a2 * *(float *)a3;
  v9 = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a2 + 1)) + v8)
             + (float)(*((float *)a3 + 2) * *((float *)a2 + 2)))
     - (float)((float)((float)(*((float *)a2 + 1) * *((float *)a4 + 1)) + (float)(*(float *)a2 * *(float *)a4))
             + (float)(*((float *)a2 + 2) * *((float *)a4 + 2)));
  if ( v9 == 0.0 )
    return 0;
  v7.m128_f32[0] = (float)((float)((float)((float)(v7.m128_f32[0] * *((float *)a2 + 1)) + v8)
                                 + (float)(*((float *)a3 + 2) * *((float *)a2 + 2)))
                         + *((float *)a2 + 3))
                 / v9;
  v7.m128_f32[0] = _mm_unpacklo_ps(v7, v7).m128_f32[0];
  if ( !finite(v7.m128_f32[0]) )
    return 0;
  result = a1;
  *(float *)a1 = (float)((float)(*(float *)a4 - *(float *)a3) * v7.m128_f32[0]) + *(float *)a3;
  *((float *)a1 + 1) = (float)((float)(*((float *)a4 + 1) - *((float *)a3 + 1)) * v7.m128_f32[0]) + *((float *)a3 + 1);
  *((float *)a1 + 2) = (float)((float)(*((float *)a4 + 2) - *((float *)a3 + 2)) * v7.m128_f32[0]) + *((float *)a3 + 2);
  return result;
}

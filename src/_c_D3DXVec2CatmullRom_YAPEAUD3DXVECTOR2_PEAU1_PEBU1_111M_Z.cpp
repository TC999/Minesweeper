struct D3DXVECTOR2 *__fastcall c_D3DXVec2CatmullRom(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXVECTOR2 *a3,
        const struct D3DXVECTOR2 *a4,
        const struct D3DXVECTOR2 *a5,
        float a6)
{
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  struct D3DXVECTOR2 *result; // rax

  v7 = (float)(a6 * a6) * a6;
  v8 = (float)((float)(a6 * a6) - v7) + (float)(a6 * a6);
  v9 = v7 - (float)(a6 * a6);
  v10 = v7 * 3.0;
  v11 = v8 - a6;
  v12 = (float)((float)((float)(a6 * a6) * 4.0) - v10) + a6;
  v13 = (float)(v10 - (float)((float)(a6 * a6) * 5.0)) + 2.0;
  *(float *)a1 = (float)((float)((float)((float)(v11 * *(float *)a2) + (float)(v13 * *(float *)a3))
                               + (float)(v12 * *(float *)a4))
                       + (float)(v9 * *(float *)a5))
               * 0.5;
  result = a1;
  *((float *)a1 + 1) = (float)((float)((float)((float)(v13 * *((float *)a3 + 1)) + (float)(v11 * *((float *)a2 + 1)))
                                     + (float)(v12 * *((float *)a4 + 1)))
                             + (float)(v9 * *((float *)a5 + 1)))
                     * 0.5;
  return result;
}

struct D3DXVECTOR4 *__fastcall c_D3DXVec4Hermite(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXVECTOR4 *a3,
        const struct D3DXVECTOR4 *a4,
        const struct D3DXVECTOR4 *a5,
        float a6)
{
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm7_4
  float v14; // xmm5_4
  struct D3DXVECTOR4 *result; // rax

  v7 = (float)(a6 * a6) * 3.0;
  v8 = (float)(a6 * a6) * a6;
  v9 = v8 - (float)(a6 * a6);
  v10 = (float)(v8 - (float)((float)(a6 * a6) * 2.0)) + a6;
  v11 = v8 * 2.0;
  v12 = v11 - v7;
  v13 = v7 - v11;
  v14 = v12 + 1.0;
  *(float *)a1 = (float)((float)((float)(v14 * *(float *)a2) + (float)(v10 * *(float *)a3)) + (float)(v13 * *(float *)a4))
               + (float)(v9 * *(float *)a5);
  *((float *)a1 + 1) = (float)((float)((float)(v10 * *((float *)a3 + 1)) + (float)(v14 * *((float *)a2 + 1)))
                             + (float)(v13 * *((float *)a4 + 1)))
                     + (float)(v9 * *((float *)a5 + 1));
  *((float *)a1 + 2) = (float)((float)((float)(v10 * *((float *)a3 + 2)) + (float)(v14 * *((float *)a2 + 2)))
                             + (float)(v13 * *((float *)a4 + 2)))
                     + (float)(v9 * *((float *)a5 + 2));
  result = a1;
  *((float *)a1 + 3) = (float)((float)((float)(v10 * *((float *)a3 + 3)) + (float)(v14 * *((float *)a2 + 3)))
                             + (float)(v13 * *((float *)a4 + 3)))
                     + (float)(v9 * *((float *)a5 + 3));
  return result;
}

struct D3DXPLANE *__fastcall c_D3DXPlaneFromPoints(
        struct D3DXPLANE *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXVECTOR3 *a3,
        const struct D3DXVECTOR3 *a4)
{
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm8_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  struct D3DXPLANE *result; // rax

  v6 = *((float *)a2 + 2);
  v7 = v6 - *((float *)a4 + 2);
  v8 = *((float *)a2 + 1);
  v9 = v8 - *((float *)a4 + 1);
  v10 = *(float *)a2 - *(float *)a4;
  v11 = v8 - *((float *)a3 + 1);
  v12 = *(float *)a2 - *(float *)a3;
  v13 = v6 - *((float *)a3 + 2);
  *(float *)a1 = (float)(v7 * v11) - (float)(v9 * v13);
  *((float *)a1 + 1) = (float)(v10 * v13) - (float)(v7 * v12);
  *((float *)a1 + 2) = (float)(v12 * v9) - (float)(v10 * v11);
  off_1000A66A8(a1, a1);
  result = a1;
  *((_DWORD *)a1 + 3) = COERCE_UNSIGNED_INT(
                          (float)((float)(*((float *)a1 + 1) * *((float *)a2 + 1)) + (float)(*(float *)a1 * *(float *)a2))
                        + (float)(*((float *)a1 + 2) * *((float *)a2 + 2)))
                      ^ _mask__NegFloat_;
  return result;
}

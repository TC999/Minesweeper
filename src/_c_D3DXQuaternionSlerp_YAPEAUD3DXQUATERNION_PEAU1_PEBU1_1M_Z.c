struct D3DXQUATERNION *__fastcall c_D3DXQuaternionSlerp(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3,
        float a4)
{
  float v7; // xmm11_4
  float v8; // xmm8_4
  float v9; // xmm13_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm10_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  struct D3DXQUATERNION *result; // rax

  v7 = *(float *)a2;
  v8 = a4;
  v9 = *(float *)a3;
  v10 = 1.0 - a4;
  v11 = (float)((float)((float)(*(float *)a3 * *(float *)a2) + (float)(*((float *)a3 + 1) * *((float *)a2 + 1)))
              + (float)(*((float *)a3 + 2) * *((float *)a2 + 2)))
      + (float)(*((float *)a3 + 3) * *((float *)a2 + 3));
  if ( v11 < 0.0 )
    v12 = FLOAT_N1_0;
  else
    v12 = 1.0;
  v13 = v11 * v12;
  if ( (float)(1.0 - v13) > 0.00000011920929 )
  {
    v14 = sqrtf(1.0 - (float)(v13 * v13));
    v15 = atan2f(v14, v13);
    v10 = sinf(v15 * v10) * (float)(1.0 / v14);
    v8 = sinf(v15 * a4) * (float)(1.0 / v14);
  }
  v16 = v8 * v12;
  result = a1;
  *(float *)a1 = (float)(v7 * v10) + (float)(v9 * v16);
  *((float *)a1 + 1) = (float)(v16 * *((float *)a3 + 1)) + (float)(v10 * *((float *)a2 + 1));
  *((float *)a1 + 2) = (float)(v16 * *((float *)a3 + 2)) + (float)(v10 * *((float *)a2 + 2));
  *((float *)a1 + 3) = (float)(v16 * *((float *)a3 + 3)) + (float)(v10 * *((float *)a2 + 3));
  return result;
}

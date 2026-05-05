struct D3DXQUATERNION *__fastcall c_D3DXQuaternionRotationYawPitchRoll(
        struct D3DXQUATERNION *a1,
        float a2,
        float a3,
        float a4)
{
  float v5; // xmm12_4
  float v6; // xmm11_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  struct D3DXQUATERNION *result; // rax

  v5 = sinf(a4 * 0.5);
  v6 = cosf(a4 * 0.5);
  v7 = sinf(a3 * 0.5);
  v8 = cosf(a3 * 0.5);
  v9 = sinf(a2 * 0.5);
  v10 = cosf(a2 * 0.5);
  result = a1;
  *(float *)a1 = (float)((float)(v10 * v7) * v6) + (float)((float)(v9 * v8) * v5);
  *((float *)a1 + 1) = (float)((float)(v9 * v8) * v6) - (float)((float)(v10 * v7) * v5);
  *((float *)a1 + 3) = (float)((float)(v9 * v7) * v5) + (float)((float)(v10 * v8) * v6);
  *((float *)a1 + 2) = (float)((float)(v10 * v8) * v5) - (float)((float)(v9 * v7) * v6);
  return result;
}

struct D3DXQUATERNION *__fastcall c_D3DXQuaternionRotationAxis(
        struct D3DXQUATERNION *a1,
        const struct D3DXVECTOR3 *a2,
        float a3)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  struct D3DXQUATERNION *result; // rax
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10[4]; // [rsp+20h] [rbp-38h] BYREF

  off_1000A66A8((struct D3DXVECTOR3 *)v10, a2);
  v4 = sinf(a3 * 0.5);
  v5 = cosf(a3 * 0.5);
  result = a1;
  v7 = v10[0] * v4;
  v8 = v10[1] * v4;
  *((float *)a1 + 3) = v5;
  *(float *)a1 = v7;
  v9 = v10[2];
  *((float *)a1 + 1) = v8;
  *((float *)a1 + 2) = v9 * v4;
  return result;
}

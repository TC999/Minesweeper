struct D3DXVECTOR3 *__fastcall c_D3DXVec3TransformNormal(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXMATRIX *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v6; // [rsp+4h] [rbp-24h]
  float v7; // [rsp+8h] [rbp-20h]

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v6 = (float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5)))
     + (float)(v4 * *((float *)a3 + 9));
  v7 = (float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(v3 * *((float *)a3 + 6)))
     + (float)(v4 * *((float *)a3 + 10));
  *(float *)a1 = (float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
               + (float)(v4 * *((float *)a3 + 8));
  *((float *)a1 + 1) = v6;
  *((float *)a1 + 2) = v7;
  return a1;
}

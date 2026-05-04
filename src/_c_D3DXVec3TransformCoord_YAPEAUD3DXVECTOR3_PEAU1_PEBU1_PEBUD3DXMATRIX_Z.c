struct D3DXVECTOR3 *__fastcall c_D3DXVec3TransformCoord(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXMATRIX *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v9 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5)))
             + (float)(v4 * *((float *)a3 + 9)))
     + *((float *)a3 + 13);
  v10 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(v3 * *((float *)a3 + 6)))
              + (float)(v4 * *((float *)a3 + 10)))
      + *((float *)a3 + 14);
  v5 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(v3 * *((float *)a3 + 7)))
             + (float)(v4 * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  *(float *)a1 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(v4 * *((float *)a3 + 8)))
               + *((float *)a3 + 12);
  *((float *)a1 + 1) = v9;
  *((float *)a1 + 2) = v10;
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
  {
    v6 = (float)(1.0 / v5) * *(float *)a1;
    v7 = (float)(1.0 / v5) * *((float *)a1 + 1);
    *((float *)a1 + 2) = (float)(1.0 / v5) * *((float *)a1 + 2);
    *(float *)a1 = v6;
    *((float *)a1 + 1) = v7;
  }
  return a1;
}

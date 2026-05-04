struct D3DXVECTOR2 *__fastcall c_D3DXVec2TransformCoord(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXMATRIX *a3)
{
  float v3; // xmm0_4
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v7[6]; // [rsp+0h] [rbp-18h]

  v3 = *((float *)a2 + 1);
  v7[0] = (float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3)) + *((float *)a3 + 12);
  v4 = (float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(v3 * *((float *)a3 + 7))) + *((float *)a3 + 15);
  v7[1] = (float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5))) + *((float *)a3 + 13);
  *(_QWORD *)a1 = *(_QWORD *)v7;
  if ( (float)(v4 - 1.0) < -0.00000011920929 || (float)(v4 - 1.0) > 0.00000011920929 )
  {
    v5 = (float)(1.0 / v4) * *(float *)a1;
    *((float *)a1 + 1) = (float)(1.0 / v4) * *((float *)a1 + 1);
    *(float *)a1 = v5;
  }
  return a1;
}

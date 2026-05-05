struct D3DXVECTOR2 *__fastcall c_D3DXVec2TransformCoordArray(
        struct D3DXVECTOR2 *a1,
        unsigned int a2,
        const struct D3DXVECTOR2 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  struct D3DXVECTOR2 *v6; // r10
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v14[4]; // [rsp+0h] [rbp-28h]

  v6 = a1;
  if ( a6 )
  {
    v7 = a4;
    v8 = a2;
    v9 = a6;
    do
    {
      v10 = *((float *)a3 + 1);
      v14[0] = (float)((float)(v10 * *((float *)a5 + 4)) + (float)(*(float *)a3 * *(float *)a5)) + *((float *)a5 + 12);
      v11 = (float)((float)(*(float *)a3 * *((float *)a5 + 3)) + (float)(v10 * *((float *)a5 + 7)))
          + *((float *)a5 + 15);
      v14[1] = (float)((float)(*(float *)a3 * *((float *)a5 + 1)) + (float)(v10 * *((float *)a5 + 5)))
             + *((float *)a5 + 13);
      *(_QWORD *)a1 = *(_QWORD *)v14;
      if ( (float)(v11 - 1.0) < -0.00000011920929 || (float)(v11 - 1.0) > 0.00000011920929 )
      {
        v12 = (float)(1.0 / v11) * *(float *)a1;
        *((float *)a1 + 1) = (float)(1.0 / v11) * *((float *)a1 + 1);
        *(float *)a1 = v12;
      }
      a3 = (const struct D3DXVECTOR2 *)((char *)a3 + v7);
      a1 = (struct D3DXVECTOR2 *)((char *)a1 + v8);
      --v9;
    }
    while ( v9 );
  }
  return v6;
}

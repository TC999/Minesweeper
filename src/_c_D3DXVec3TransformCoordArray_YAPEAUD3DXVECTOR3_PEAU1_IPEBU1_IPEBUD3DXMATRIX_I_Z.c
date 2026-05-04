struct D3DXVECTOR3 *__fastcall c_D3DXVec3TransformCoordArray(
        struct D3DXVECTOR3 *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  struct D3DXVECTOR3 *v6; // r10
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx
  float v10; // xmm1_4
  float v11; // xmm8_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v15; // [rsp+4h] [rbp-34h]
  float v16; // [rsp+8h] [rbp-30h]

  v6 = a1;
  if ( a6 )
  {
    v7 = a4;
    v8 = a2;
    v9 = a6;
    do
    {
      v10 = *((float *)a3 + 2);
      v15 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 1)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 5)))
                  + (float)(v10 * *((float *)a5 + 9)))
          + *((float *)a5 + 13);
      v16 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 2)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 6)))
                  + (float)(v10 * *((float *)a5 + 10)))
          + *((float *)a5 + 14);
      v11 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 7)))
                  + (float)(v10 * *((float *)a5 + 11)))
          + *((float *)a5 + 15);
      *(float *)a1 = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a5 + 4))
                                   + (float)(*(float *)a3 * *(float *)a5))
                           + (float)(v10 * *((float *)a5 + 8)))
                   + *((float *)a5 + 12);
      *((float *)a1 + 1) = v15;
      *((float *)a1 + 2) = v16;
      if ( (float)(v11 - 1.0) < -0.00000011920929 || (float)(v11 - 1.0) > 0.00000011920929 )
      {
        v12 = (float)(1.0 / v11) * *(float *)a1;
        v13 = (float)(1.0 / v11) * *((float *)a1 + 1);
        *((float *)a1 + 2) = (float)(1.0 / v11) * *((float *)a1 + 2);
        *(float *)a1 = v12;
        *((float *)a1 + 1) = v13;
      }
      a3 = (const struct D3DXVECTOR3 *)((char *)a3 + v7);
      a1 = (struct D3DXVECTOR3 *)((char *)a1 + v8);
      --v9;
    }
    while ( v9 );
  }
  return v6;
}

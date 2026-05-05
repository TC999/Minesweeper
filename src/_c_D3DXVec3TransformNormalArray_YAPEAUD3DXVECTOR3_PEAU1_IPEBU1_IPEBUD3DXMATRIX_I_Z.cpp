struct D3DXVECTOR3 *__fastcall c_D3DXVec3TransformNormalArray(
        struct D3DXVECTOR3 *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  float *v6; // r10
  __int64 v7; // rdi
  __int64 v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v13; // [rsp+4h] [rbp-24h]
  float v14; // [rsp+8h] [rbp-20h]

  v6 = (float *)a1;
  if ( a6 )
  {
    v7 = a2;
    v8 = a6;
    do
    {
      v9 = *((float *)a3 + 1);
      v10 = *(float *)a3;
      v11 = *((float *)a3 + 2);
      a3 = (const struct D3DXVECTOR3 *)((char *)a3 + a4);
      v13 = (float)((float)(v10 * *((float *)a5 + 1)) + (float)(v9 * *((float *)a5 + 5)))
          + (float)(v11 * *((float *)a5 + 9));
      v14 = (float)((float)(v10 * *((float *)a5 + 2)) + (float)(v9 * *((float *)a5 + 6)))
          + (float)(v11 * *((float *)a5 + 10));
      *v6 = (float)((float)(v9 * *((float *)a5 + 4)) + (float)(v10 * *(float *)a5)) + (float)(v11 * *((float *)a5 + 8));
      v6[1] = v13;
      v6[2] = v14;
      v6 = (float *)((char *)v6 + v7);
      --v8;
    }
    while ( v8 );
  }
  return a1;
}

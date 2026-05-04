struct D3DXVECTOR2 *__fastcall c_D3DXVec2TransformNormalArray(
        struct D3DXVECTOR2 *a1,
        unsigned int a2,
        const struct D3DXVECTOR2 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  struct D3DXVECTOR2 *v6; // r11
  __int64 v7; // rdi
  __int64 v8; // rdx
  float v9; // xmm2_4
  float v10; // xmm3_4

  v6 = a1;
  if ( a6 )
  {
    v7 = a2;
    v8 = a6;
    do
    {
      v9 = *((float *)a3 + 1);
      v10 = *(float *)a3;
      a3 = (const struct D3DXVECTOR2 *)((char *)a3 + a4);
      *(_QWORD *)v6 = __PAIR64__(
                        (float)(v10 * *((float *)a5 + 1)) + (float)(v9 * *((float *)a5 + 5)),
                        (float)(v9 * *((float *)a5 + 4)) + (float)(v10 * *(float *)a5));
      v6 = (struct D3DXVECTOR2 *)((char *)v6 + v7);
      --v8;
    }
    while ( v8 );
  }
  return a1;
}

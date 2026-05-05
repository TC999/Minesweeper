struct D3DXMATRIX *__fastcall c_D3DXMatrixAffineTransformation2D(
        struct D3DXMATRIX *a1,
        float a2,
        const struct D3DXVECTOR2 *a3,
        float a4,
        const struct D3DXVECTOR2 *a5)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  _BYTE v10[72]; // [rsp+20h] [rbp-48h] BYREF

  *(float *)a1 = a2;
  *((float *)a1 + 5) = a2;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 10) = 1065353216;
  *((_DWORD *)a1 + 15) = 1065353216;
  if ( a4 != 0.0 )
  {
    off_1000A6778((struct D3DXMATRIX *)v10, a4);
    if ( a3 )
    {
      v7 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a3;
      *((float *)a1 + 13) = v7 - *((float *)a3 + 1);
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v10);
      v8 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *(float *)a3 + *((float *)a1 + 12);
      *((float *)a1 + 13) = v8 + *((float *)a3 + 1);
    }
    else
    {
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v10);
    }
  }
  if ( a5 )
  {
    *((float *)a1 + 12) = *(float *)a5 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a5 + 1) + *((float *)a1 + 13);
  }
  return a1;
}

struct D3DXMATRIX *__fastcall c_D3DXMatrixAffineTransformation(
        struct D3DXMATRIX *a1,
        float a2,
        const struct D3DXVECTOR3 *a3,
        const struct D3DXQUATERNION *a4,
        const struct D3DXVECTOR3 *a5)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  _BYTE v11[72]; // [rsp+20h] [rbp-48h] BYREF

  *(float *)a1 = a2;
  *((float *)a1 + 5) = a2;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((float *)a1 + 10) = a2;
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
  if ( a4 )
  {
    off_1000A67A8((struct D3DXMATRIX *)v11, a4);
    if ( a3 )
    {
      v7 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a3;
      v8 = *((float *)a1 + 14);
      *((float *)a1 + 13) = v7 - *((float *)a3 + 1);
      *((float *)a1 + 14) = v8 - *((float *)a3 + 2);
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v11);
      v9 = *((float *)a1 + 13);
      *((float *)a1 + 12) = *(float *)a3 + *((float *)a1 + 12);
      *((float *)a1 + 13) = v9 + *((float *)a3 + 1);
      *((float *)a1 + 14) = *((float *)a3 + 2) + *((float *)a1 + 14);
    }
    else
    {
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v11);
    }
  }
  if ( a5 )
  {
    *((float *)a1 + 12) = *(float *)a5 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a5 + 1) + *((float *)a1 + 13);
    *((float *)a1 + 14) = *((float *)a5 + 2) + *((float *)a1 + 14);
  }
  return a1;
}

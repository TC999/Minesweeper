struct D3DXMATRIX *__fastcall c_D3DXMatrixTransformation2D(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR2 *a2,
        float a3,
        const struct D3DXVECTOR2 *a4,
        const struct D3DXVECTOR2 *a5,
        float a6,
        const struct D3DXVECTOR2 *a7)
{
  int v9; // xmm1_4
  _DWORD v11[16]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v12[64]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v13[80]; // [rsp+A0h] [rbp-58h] BYREF

  if ( !a4 )
  {
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 11) = 0;
    *((_DWORD *)a1 + 9) = 0;
    *((_DWORD *)a1 + 8) = 0;
    *((_DWORD *)a1 + 10) = 1065353216;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *((_DWORD *)a1 + 7) = 0;
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 1) = 0;
    goto LABEL_10;
  }
  if ( a3 == 0.0 )
  {
    *((_DWORD *)a1 + 11) = 0;
    *((_DWORD *)a1 + 9) = 0;
    *((_DWORD *)a1 + 8) = 0;
    *((_DWORD *)a1 + 7) = 0;
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 1) = 0;
    if ( !a2 )
    {
      *((_DWORD *)a1 + 14) = 0;
      *((_DWORD *)a1 + 13) = 0;
      *((_DWORD *)a1 + 12) = 0;
      *(_DWORD *)a1 = *(_DWORD *)a4;
      *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 10) = 1065353216;
LABEL_11:
      *((_DWORD *)a1 + 15) = 1065353216;
      goto LABEL_12;
    }
    *(_DWORD *)a1 = *(_DWORD *)a4;
    *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
    *((_DWORD *)a1 + 10) = 1065353216;
    *((float *)a1 + 12) = (float)(1.0 - *(float *)a4) * *(float *)a2;
    *((float *)a1 + 13) = (float)(1.0 - *((float *)a4 + 1)) * *((float *)a2 + 1);
LABEL_10:
    *((_DWORD *)a1 + 14) = 0;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)a4 + 1);
  v11[0] = *(_DWORD *)a4;
  v11[5] = v9;
  v11[10] = 1065353216;
  v11[15] = 1065353216;
  v11[14] = 0;
  v11[13] = 0;
  v11[12] = 0;
  v11[11] = 0;
  v11[9] = 0;
  v11[8] = 0;
  v11[7] = 0;
  v11[6] = 0;
  v11[4] = 0;
  v11[3] = 0;
  v11[2] = 0;
  v11[1] = 0;
  off_1000A6778((struct D3DXMATRIX *)v12, a3);
  if ( a2 )
  {
    off_1000A67A0((struct D3DXMATRIX *)v13, (const struct D3DXMATRIX *)v12);
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 15) = 1065353216;
    *((_DWORD *)a1 + 10) = 1065353216;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *((_DWORD *)a1 + 14) = 0;
    *((_DWORD *)a1 + 11) = 0;
    *((_DWORD *)a1 + 9) = 0;
    *((_DWORD *)a1 + 8) = 0;
    *((_DWORD *)a1 + 7) = 0;
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 1) = 0;
    *((float *)a1 + 12) = 0.0 - *(float *)a2;
    *((float *)a1 + 13) = 0.0 - *((float *)a2 + 1);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v13);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v11);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v12);
    *((float *)a1 + 12) = *(float *)a2 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a2 + 1) + *((float *)a1 + 13);
  }
  else
  {
    off_1000A67A0(a1, (const struct D3DXMATRIX *)v12);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v11);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v12);
  }
LABEL_12:
  if ( a6 != 0.0 )
  {
    off_1000A6778((struct D3DXMATRIX *)v12, a6);
    if ( a5 )
    {
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a5;
      *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a5 + 1);
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v12);
      *((float *)a1 + 12) = *(float *)a5 + *((float *)a1 + 12);
      *((float *)a1 + 13) = *((float *)a5 + 1) + *((float *)a1 + 13);
    }
    else
    {
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v12);
    }
  }
  if ( a7 )
  {
    *((float *)a1 + 12) = *(float *)a7 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a7 + 1) + *((float *)a1 + 13);
  }
  return a1;
}

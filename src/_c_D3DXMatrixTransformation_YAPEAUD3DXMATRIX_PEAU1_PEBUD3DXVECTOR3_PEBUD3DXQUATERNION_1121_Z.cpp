struct D3DXMATRIX *__fastcall c_D3DXMatrixTransformation(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXQUATERNION *a3,
        const struct D3DXVECTOR3 *a4,
        const struct D3DXVECTOR3 *a5,
        const struct D3DXQUATERNION *a6,
        const struct D3DXVECTOR3 *a7)
{
  int v9; // xmm1_4
  int v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  _DWORD v15[16]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v16[64]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v17[80]; // [rsp+A0h] [rbp-58h] BYREF

  if ( !a4 )
  {
    *((_DWORD *)a1 + 14) = 0;
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 11) = 0;
    *((_DWORD *)a1 + 9) = 0;
    *((_DWORD *)a1 + 10) = 1065353216;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *((_DWORD *)a1 + 8) = 0;
    *((_DWORD *)a1 + 7) = 0;
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 4) = 0;
    *((_DWORD *)a1 + 3) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 1) = 0;
LABEL_11:
    *((_DWORD *)a1 + 15) = 1065353216;
    goto LABEL_12;
  }
  if ( !a3 )
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
    if ( a2 )
    {
      *(_DWORD *)a1 = *(_DWORD *)a4;
      *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 10) = *((_DWORD *)a4 + 2);
      *((float *)a1 + 12) = (float)(1.0 - *(float *)a4) * *(float *)a2;
      *((float *)a1 + 13) = (float)(1.0 - *((float *)a4 + 1)) * *((float *)a2 + 1);
      *((float *)a1 + 14) = (float)(1.0 - *((float *)a4 + 2)) * *((float *)a2 + 2);
    }
    else
    {
      *((_DWORD *)a1 + 14) = 0;
      *((_DWORD *)a1 + 13) = 0;
      *((_DWORD *)a1 + 12) = 0;
      *(_DWORD *)a1 = *(_DWORD *)a4;
      *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 10) = *((_DWORD *)a4 + 2);
    }
    goto LABEL_11;
  }
  v9 = *((_DWORD *)a4 + 1);
  v15[0] = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 2);
  v15[5] = v9;
  v15[10] = v10;
  v15[14] = 0;
  v15[15] = 1065353216;
  v15[13] = 0;
  v15[12] = 0;
  v15[11] = 0;
  v15[9] = 0;
  v15[8] = 0;
  v15[7] = 0;
  v15[6] = 0;
  v15[4] = 0;
  v15[3] = 0;
  v15[2] = 0;
  v15[1] = 0;
  off_1000A67A8((struct D3DXMATRIX *)v16, a3);
  if ( a2 )
  {
    off_1000A67A0((struct D3DXMATRIX *)v17, (const struct D3DXMATRIX *)v16);
    *((_DWORD *)a1 + 14) = 0;
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 15) = 1065353216;
    *((_DWORD *)a1 + 10) = 1065353216;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
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
    *((float *)a1 + 14) = 0.0 - *((float *)a2 + 2);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v17);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v15);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v16);
    v11 = *((float *)a1 + 14);
    *((float *)a1 + 12) = *((float *)a1 + 12) + *(float *)a2;
    *((float *)a1 + 13) = *((float *)a2 + 1) + *((float *)a1 + 13);
    *((float *)a1 + 14) = v11 + *((float *)a2 + 2);
  }
  else
  {
    off_1000A67A0(a1, (const struct D3DXMATRIX *)v16);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v15);
    off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v16);
  }
LABEL_12:
  if ( a6 )
  {
    off_1000A67A8((struct D3DXMATRIX *)v16, a6);
    if ( a5 )
    {
      *((float *)a1 + 12) = *((float *)a1 + 12) - *(float *)a5;
      *((float *)a1 + 13) = *((float *)a1 + 13) - *((float *)a5 + 1);
      *((float *)a1 + 14) = *((float *)a1 + 14) - *((float *)a5 + 2);
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v16);
      v12 = *((float *)a1 + 13);
      v13 = *((float *)a1 + 14);
      *((float *)a1 + 12) = *((float *)a1 + 12) + *(float *)a5;
      *((float *)a1 + 13) = v12 + *((float *)a5 + 1);
      *((float *)a1 + 14) = v13 + *((float *)a5 + 2);
    }
    else
    {
      off_1000A6688(a1, a1, (const struct D3DXMATRIX *)v16);
    }
  }
  if ( a7 )
  {
    *((float *)a1 + 12) = *((float *)a1 + 12) + *(float *)a7;
    *((float *)a1 + 13) = *((float *)a7 + 1) + *((float *)a1 + 13);
    *((float *)a1 + 14) = *((float *)a7 + 2) + *((float *)a1 + 14);
  }
  return a1;
}

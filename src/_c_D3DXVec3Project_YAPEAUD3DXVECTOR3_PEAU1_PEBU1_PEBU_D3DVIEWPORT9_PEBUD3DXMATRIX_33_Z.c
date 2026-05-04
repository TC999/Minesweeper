struct D3DXVECTOR3 *__fastcall c_D3DXVec3Project(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct _D3DVIEWPORT9 *a3,
        const struct D3DXMATRIX *a4,
        const struct D3DXMATRIX *a5,
        const struct D3DXMATRIX *a6)
{
  const struct D3DXMATRIX *v6; // rbx
  const struct D3DXMATRIX *v9; // rdx
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  const struct D3DXMATRIX *v19; // r8
  float v20; // xmm6_4
  _DWORD v22[16]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (const struct D3DXMATRIX *)v22;
  v9 = a6;
  v12 = (a4 != 0) | (2 * ((a5 != 0) | (2 * (a6 != 0))));
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v6 = a6;
            goto LABEL_18;
          }
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( !v18 )
            {
              v19 = a5;
LABEL_14:
              off_1000A6688((struct D3DXMATRIX *)v22, v9, v19);
              goto LABEL_18;
            }
            if ( v18 != 1 )
              goto LABEL_18;
            off_1000A6688((struct D3DXMATRIX *)v22, a6, a5);
            v9 = (const struct D3DXMATRIX *)v22;
          }
        }
        else
        {
          v9 = a5;
        }
        v19 = a4;
        goto LABEL_14;
      }
      v6 = a5;
    }
    else
    {
      v6 = a4;
    }
  }
  else
  {
    v22[15] = 1065353216;
    v22[10] = 1065353216;
    v22[14] = 0;
    v22[13] = 0;
    v22[12] = 0;
    v22[11] = 0;
    v22[9] = 0;
    v22[8] = 0;
    v22[7] = 0;
    v22[6] = 0;
    v22[4] = 0;
    v22[3] = 0;
    v22[2] = 0;
    v22[1] = 0;
    v22[5] = 1065353216;
    v22[0] = 1065353216;
  }
LABEL_18:
  off_1000A66C0(a1, a2, v6);
  if ( a3 )
  {
    v20 = (float)(1.0 - *((float *)a1 + 1)) * 0.5;
    *(float *)a1 = (float)((float)((float)(*(float *)a1 + 1.0) * 0.5) * (float)(int)a3->Width) + (float)(int)a3->X;
    *((float *)a1 + 1) = (float)(v20 * (float)(int)a3->Height) + (float)(int)a3->Y;
    *((float *)a1 + 2) = (float)((float)(a3->MaxZ - a3->MinZ) * *((float *)a1 + 2)) + a3->MinZ;
  }
  return a1;
}

struct D3DXVECTOR3 *__fastcall c_D3DXVec3Unproject(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct _D3DVIEWPORT9 *a3,
        const struct D3DXMATRIX *a4,
        const struct D3DXMATRIX *a5,
        const struct D3DXMATRIX *a6)
{
  const struct D3DXMATRIX *v8; // rdx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  const struct D3DXMATRIX *v18; // r8
  const struct D3DXMATRIX *v19; // r8
  const struct D3DXVECTOR3 *v20; // rdx
  _DWORD v22[16]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a6;
  v11 = (a4 != 0) | (2 * ((a5 != 0) | (2 * (a6 != 0))));
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v19 = a4;
      goto LABEL_17;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v19 = a5;
      goto LABEL_17;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v19 = a6;
LABEL_17:
        off_1000A6708((struct D3DXMATRIX *)v22, 0, v19);
        goto LABEL_19;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          v18 = a5;
LABEL_14:
          off_1000A6688((struct D3DXMATRIX *)v22, v8, v18);
          v19 = (const struct D3DXMATRIX *)v22;
          goto LABEL_17;
        }
        if ( v17 != 1 )
          goto LABEL_19;
        off_1000A6688((struct D3DXMATRIX *)v22, a6, a5);
        v8 = (const struct D3DXMATRIX *)v22;
      }
    }
    else
    {
      v8 = a5;
    }
    v18 = a4;
    goto LABEL_14;
  }
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
LABEL_19:
  if ( a3 )
  {
    v20 = a1;
    *(float *)a1 = (float)((float)((float)(*(float *)a2 - (float)(int)a3->X) / (float)(int)a3->Width) * 2.0) - 1.0;
    *((_DWORD *)a1 + 1) = COERCE_UNSIGNED_INT(
                            (float)((float)((float)(*((float *)a2 + 1) - (float)(int)a3->Y) / (float)(int)a3->Height)
                                  * 2.0)
                          - 1.0)
                        ^ _mask__NegFloat_;
    *((float *)a1 + 2) = (float)(*((float *)a2 + 2) - a3->MinZ) / (float)(a3->MaxZ - a3->MinZ);
  }
  else
  {
    v20 = a2;
  }
  off_1000A66C0(a1, v20, (const struct D3DXMATRIX *)v22);
  return a1;
}

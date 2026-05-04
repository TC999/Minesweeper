void __fastcall __noreturn c_D3DXVec3UnprojectArray(
        struct D3DXVECTOR3 *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct _D3DVIEWPORT9 *a5,
        const struct D3DXMATRIX *a6,
        const struct D3DXMATRIX *a7,
        const struct D3DXMATRIX *a8,
        unsigned int a9)
{
  const struct D3DXMATRIX *v10; // rdx
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  const struct D3DXMATRIX *v21; // r8
  const struct D3DXMATRIX *v22; // r8
  signed int Width; // eax
  float MinZ; // xmm4_4
  float v25; // xmm0_4
  signed int Height; // eax
  float v27; // xmm2_4
  float v28; // xmm0_4
  signed int X; // eax
  float v30; // xmm5_4
  float MaxZ; // xmm0_4
  float v32; // xmm0_4
  signed int Y; // eax
  _DWORD v34[16]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v35[10]; // [rsp+70h] [rbp-68h] BYREF
  float v36; // [rsp+98h] [rbp-40h]
  int v37; // [rsp+9Ch] [rbp-3Ch]
  float v38; // [rsp+A0h] [rbp-38h]
  float v39; // [rsp+A4h] [rbp-34h]
  int v40; // [rsp+A8h] [rbp-30h]
  int v41; // [rsp+ACh] [rbp-2Ch]

  v10 = a8;
  v14 = (a6 != 0) | (2 * ((a7 != 0) | (2 * (a8 != 0))));
  if ( !v14 )
  {
    v34[14] = 0;
    v34[13] = 0;
    v34[12] = 0;
    v34[11] = 0;
    v34[9] = 0;
    v34[8] = 0;
    v34[7] = 0;
    v34[6] = 0;
    v34[4] = 0;
    v34[3] = 0;
    v34[2] = 0;
    v34[1] = 0;
    v34[15] = 1065353216;
    v34[10] = 1065353216;
    v34[5] = 1065353216;
    v34[0] = 1065353216;
LABEL_19:
    if ( a5 )
    {
      Width = a5->Width;
      MinZ = a5->MinZ;
      v35[1] = 0;
      v25 = (float)Width;
      v35[2] = 0;
      v35[3] = 0;
      Height = a5->Height;
      v27 = 2.0 / v25;
      v35[4] = 0;
      v35[6] = 0;
      v28 = (float)Height;
      v35[7] = 0;
      v35[8] = 0;
      X = a5->X;
      v30 = 2.0 / v28;
      MaxZ = a5->MaxZ;
      *(float *)v35 = v27;
      v35[9] = 0;
      v37 = 0;
      v41 = 1065353216;
      v36 = 1.0 / (float)(MaxZ - MinZ);
      v35[5] = LODWORD(v30) ^ _mask__NegFloat_;
      v32 = (float)X;
      Y = a5->Y;
      v40 = COERCE_UNSIGNED_INT(MinZ * v36) ^ _mask__NegFloat_;
      v38 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 * v27) ^ _mask__NegFloat_) - 1.0;
      v39 = (float)((float)Y * v30) + 1.0;
      off_1000A6688((struct D3DXMATRIX *)v34, (const struct D3DXMATRIX *)v35, (const struct D3DXMATRIX *)v34);
    }
    off_1000A6870(a1, a2, a3, a4, (const struct D3DXMATRIX *)v34, a9);
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v22 = a6;
    goto LABEL_17;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v22 = a7;
    goto LABEL_17;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      v22 = a8;
LABEL_17:
      off_1000A6708((struct D3DXMATRIX *)v34, 0, v22);
      goto LABEL_19;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
      {
        v21 = a7;
LABEL_14:
        off_1000A6688((struct D3DXMATRIX *)v34, v10, v21);
        v22 = (const struct D3DXMATRIX *)v34;
        goto LABEL_17;
      }
      if ( v20 != 1 )
        goto LABEL_19;
      off_1000A6688((struct D3DXMATRIX *)v34, a8, a7);
      v10 = (const struct D3DXMATRIX *)v34;
    }
  }
  else
  {
    v10 = a7;
  }
  v21 = a6;
  goto LABEL_14;
}

void __fastcall __noreturn c_D3DXVec3ProjectArray(
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
  const struct D3DXMATRIX *v14; // rdi
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  const struct D3DXMATRIX *v22; // r8
  signed int Width; // eax
  float MinZ; // xmm2_4
  float Height; // xmm3_4
  signed int X; // eax
  float MaxZ; // xmm0_4
  float v28; // xmm0_4
  signed int Y; // eax
  _DWORD v30[16]; // [rsp+30h] [rbp-A8h] BYREF
  float v31[26]; // [rsp+70h] [rbp-68h] BYREF

  v10 = a8;
  v14 = (const struct D3DXMATRIX *)v30;
  v15 = (a6 != 0) | (2 * ((a7 != 0) | (2 * (a8 != 0))));
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v14 = a8;
            goto LABEL_18;
          }
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
            {
              v22 = a7;
LABEL_14:
              off_1000A6688((struct D3DXMATRIX *)v30, v10, v22);
              goto LABEL_18;
            }
            if ( v21 != 1 )
              goto LABEL_18;
            off_1000A6688((struct D3DXMATRIX *)v30, a8, a7);
            v10 = (const struct D3DXMATRIX *)v30;
          }
        }
        else
        {
          v10 = a7;
        }
        v22 = a6;
        goto LABEL_14;
      }
      v14 = a7;
    }
    else
    {
      v14 = a6;
    }
  }
  else
  {
    v30[14] = 0;
    v30[13] = 0;
    v30[12] = 0;
    v30[11] = 0;
    v30[9] = 0;
    v30[8] = 0;
    v30[7] = 0;
    v30[6] = 0;
    v30[4] = 0;
    v30[3] = 0;
    v30[2] = 0;
    v30[1] = 0;
    v30[15] = 1065353216;
    v30[10] = 1065353216;
    v30[5] = 1065353216;
    v30[0] = 1065353216;
  }
LABEL_18:
  if ( a5 )
  {
    Width = a5->Width;
    MinZ = a5->MinZ;
    v31[1] = 0.0;
    v31[2] = 0.0;
    v31[3] = 0.0;
    Height = (float)(int)a5->Height;
    v31[0] = (float)Width * 0.5;
    v31[4] = 0.0;
    X = a5->X;
    v31[6] = 0.0;
    v31[7] = 0.0;
    v31[8] = 0.0;
    v31[5] = Height * -0.5;
    MaxZ = a5->MaxZ;
    v31[9] = 0.0;
    v31[11] = 0.0;
    v31[14] = MinZ;
    v31[10] = MaxZ - MinZ;
    v31[15] = 1.0;
    v28 = (float)X;
    Y = a5->Y;
    v31[12] = v28 + v31[0];
    v31[13] = (float)Y + (float)(Height * 0.5);
    off_1000A6688((struct D3DXMATRIX *)v30, v14, (const struct D3DXMATRIX *)v31);
    v14 = (const struct D3DXMATRIX *)v30;
  }
  off_1000A6870(a1, a2, a3, a4, v14, a9);
}

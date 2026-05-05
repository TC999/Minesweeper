void __fastcall c_D3DXPSGPUpdateSkinnedMesh(
        const struct D3DXMATRIX *a1,
        const struct D3DXMATRIX *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int Size,
        unsigned __int8 **a7,
        unsigned __int8 **a8,
        unsigned __int8 *a9,
        unsigned int a10,
        float *a11)
{
  size_t v11; // rdi
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // r9
  const struct D3DXVECTOR3 *v15; // r12
  size_t v16; // rdx
  const struct D3DXVECTOR3 *v17; // r13
  unsigned __int8 *v18; // rsi
  unsigned __int8 *v19; // rbp
  _BOOL8 v20; // rcx
  float *v21; // r14
  __int64 v22; // r15
  float v23; // xmm6_4
  __int64 v24; // rbx
  int v25; // ecx
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  unsigned int v37; // ebp
  float *v38; // rbx
  unsigned __int8 *v39; // r13
  float v40; // xmm6_4
  unsigned int v41; // ebp
  float v42; // xmm6_4
  unsigned __int8 *v43; // rax
  const struct D3DXVECTOR3 **v44; // r12
  float *v45; // rsi
  unsigned __int8 v46; // al
  const struct D3DXMATRIX *v47; // r8
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  __int64 v51; // r10
  unsigned __int8 **v52; // rdx
  int *v53; // r8
  unsigned __int8 *v54; // rcx
  int v55; // eax
  float v56; // [rsp+20h] [rbp-3A8h] BYREF
  float v57; // [rsp+24h] [rbp-3A4h]
  float v58; // [rsp+28h] [rbp-3A0h]
  __int64 v59; // [rsp+30h] [rbp-398h]
  size_t v60; // [rsp+38h] [rbp-390h] BYREF
  float v61; // [rsp+40h] [rbp-388h]
  _BOOL8 v62; // [rsp+48h] [rbp-380h]
  unsigned __int8 *v63; // [rsp+50h] [rbp-378h]
  _BYTE v64[8]; // [rsp+60h] [rbp-368h] BYREF
  char v65; // [rsp+68h] [rbp-360h] BYREF
  const struct D3DXMATRIX *v67; // [rsp+3D8h] [rbp+10h]
  unsigned __int8 *Src; // [rsp+3E0h] [rbp+18h]
  unsigned __int8 *v69; // [rsp+3E8h] [rbp+20h]
  unsigned int Sizea; // [rsp+3F8h] [rbp+30h]

  v69 = a4;
  Src = a3;
  v11 = Size;
  v13 = a4;
  v14 = a3;
  v15 = 0;
  v16 = 12LL * a10;
  v17 = 0;
  v60 = v16;
  if ( !a2 )
    a2 = a1;
  v67 = a2;
  if ( a10 != 2 )
    goto LABEL_10;
  if ( !*a9 && a9[1] == 3 )
  {
    v15 = (const struct D3DXVECTOR3 *)*a7;
    v17 = (const struct D3DXVECTOR3 *)a7[1];
    v18 = *a8;
    v19 = a8[1];
    goto LABEL_11;
  }
  if ( !a9[1] && *a9 == 3 )
  {
    v15 = (const struct D3DXVECTOR3 *)a7[1];
    v17 = (const struct D3DXVECTOR3 *)*a7;
    v18 = a8[1];
    v19 = *a8;
  }
  else
  {
LABEL_10:
    v18 = (unsigned __int8 *)a2;
    v19 = (unsigned __int8 *)a2;
  }
LABEL_11:
  v20 = v16 != Size;
  v62 = v20;
  if ( v15 )
  {
    if ( a5 )
    {
      v21 = a11;
      v22 = a5;
      v59 = a5;
      do
      {
        if ( v20 )
        {
          memcpy(v13, v14, v11);
          v13 += v11;
          v69 = v13;
          Src += v11;
        }
        *(_DWORD *)v18 = 0;
        *((_DWORD *)v18 + 1) = 0;
        *((_DWORD *)v18 + 2) = 0;
        *(_DWORD *)v19 = 0;
        *((_DWORD *)v19 + 1) = 0;
        *((_DWORD *)v19 + 2) = 0;
        v23 = *v21;
        if ( *v21 >= 0.0 )
        {
          do
          {
            v24 = (unsigned int)(int)v23 >> 1;
            v25 = 2 * v24;
            v24 <<= 6;
            v26 = v23 - (float)v25;
            off_1000A66C0((struct D3DXVECTOR3 *)&v56, v15, (const struct D3DXMATRIX *)((char *)a1 + v24));
            off_1000A66A0((struct D3DXVECTOR3 *)&v60, v17, (const struct D3DXMATRIX *)((char *)v67 + v24));
            ++v21;
            v27 = v58 * v26;
            v28 = *(float *)&v60 * v26;
            v29 = *((float *)&v60 + 1) * v26;
            v30 = v61 * v26;
            v56 = v56 * v26;
            v31 = v56 + *(float *)v18;
            v57 = v57 * v26;
            v32 = v57 + *((float *)v18 + 1);
            *(float *)v18 = v31;
            v58 = v27;
            v33 = v27 + *((float *)v18 + 2);
            *((float *)v18 + 1) = v32;
            *(float *)&v60 = v28;
            *((float *)v18 + 2) = v33;
            v34 = v28 + *(float *)v19;
            *((float *)&v60 + 1) = v29;
            v35 = v29 + *((float *)v19 + 1);
            v61 = v30;
            v36 = v30 + *((float *)v19 + 2);
            *(float *)v19 = v34;
            *((float *)v19 + 1) = v35;
            *((float *)v19 + 2) = v36;
            v23 = *v21;
          }
          while ( *v21 >= 0.0 );
          v11 = Size;
          v22 = v59;
          v13 = v69;
        }
        v14 = Src;
        v20 = v62;
        v15 = (const struct D3DXVECTOR3 *)((char *)v15 + v11);
        v17 = (const struct D3DXVECTOR3 *)((char *)v17 + v11);
        v18 += v11;
        v19 += v11;
        ++v21;
        v59 = --v22;
      }
      while ( v22 );
    }
  }
  else
  {
    v37 = 0;
    LODWORD(v59) = 0;
    if ( a5 )
    {
      v38 = a11;
      v39 = v69;
      do
      {
        memset(v64, 0, v16);
        v40 = *v38;
        if ( *v38 >= 0.0 )
        {
          do
          {
            Sizea = 0;
            v41 = (unsigned int)(int)v40 >> 1;
            v42 = v40 - (float)(int)(2 * v41);
            if ( a10 )
            {
              v43 = a9;
              v44 = (const struct D3DXVECTOR3 **)a7;
              v45 = (float *)&v65;
              v63 = a9;
              do
              {
                v46 = *v43;
                if ( v46 )
                {
                  if ( v46 == 3 )
                  {
                    v47 = (const struct D3DXMATRIX *)((char *)v67 + 64 * (unsigned __int64)v41);
                  }
                  else
                  {
                    if ( (unsigned __int8)(v46 - 6) > 1u )
                      return;
                    v47 = (const struct D3DXMATRIX *)((char *)a1 + 64 * (unsigned __int64)v41);
                  }
                  off_1000A66A0((struct D3DXVECTOR3 *)&v56, *v44, v47);
                }
                else
                {
                  off_1000A66C0(
                    (struct D3DXVECTOR3 *)&v56,
                    *v44,
                    (const struct D3DXMATRIX *)((char *)a1 + 64 * (unsigned __int64)v41));
                }
                ++v44;
                v43 = v63 + 1;
                v56 = v56 * v42;
                v48 = v56 + *(v45 - 2);
                v57 = v57 * v42;
                ++Sizea;
                ++v63;
                v49 = v57 + *(v45 - 1);
                v58 = v58 * v42;
                v50 = v58 + *v45;
                *(v45 - 2) = v48;
                *(v45 - 1) = v49;
                *v45 = v50;
                v45 += 3;
              }
              while ( Sizea < a10 );
            }
            v40 = *++v38;
          }
          while ( *v38 >= 0.0 );
          v37 = v59;
        }
        if ( v62 )
        {
          memcpy(v39, Src, v11);
          v39 += v11;
          Src += v11;
        }
        if ( a10 )
        {
          v51 = a10;
          v52 = a8;
          v53 = (int *)v64;
          do
          {
            v54 = *v52;
            v55 = *v53;
            v53 += 3;
            *(_DWORD *)v54 = v55;
            *((_DWORD *)v54 + 1) = *(v53 - 2);
            *((_DWORD *)v54 + 2) = *(v53 - 1);
            *v52 += v11;
            *(unsigned __int8 **)((char *)v52++ + (char *)a7 - (char *)a8) += v11;
            --v51;
          }
          while ( v51 );
        }
        v16 = v60;
        ++v37;
        ++v38;
        LODWORD(v59) = v37;
      }
      while ( v37 < a5 );
    }
  }
}

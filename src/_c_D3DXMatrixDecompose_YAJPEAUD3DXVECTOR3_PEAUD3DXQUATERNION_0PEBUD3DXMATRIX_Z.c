__int64 __fastcall c_D3DXMatrixDecompose(
        struct D3DXVECTOR3 *a1,
        struct D3DXQUATERNION *a2,
        struct D3DXVECTOR3 *a3,
        const struct D3DXMATRIX *a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  unsigned int v20; // esi
  __int64 v21; // rbp
  struct D3DXVECTOR3 *v22; // rdx
  struct D3DXVECTOR3 *v23; // rdi
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  bool v27; // cc
  float v28; // xmm1_4
  float *v29; // rcx
  struct D3DXVECTOR3 *v30; // rbx
  float *v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm5_4
  __int64 result; // rax
  float v35; // [rsp+24h] [rbp-F4h]
  float v36; // [rsp+24h] [rbp-F4h]
  int v37; // [rsp+24h] [rbp-F4h]
  float v38; // [rsp+28h] [rbp-F0h]
  float v39; // [rsp+28h] [rbp-F0h]
  int v40; // [rsp+28h] [rbp-F0h]
  struct D3DXVECTOR3 *v41[4]; // [rsp+30h] [rbp-E8h]
  float v42; // [rsp+50h] [rbp-C8h] BYREF
  float v43; // [rsp+54h] [rbp-C4h]
  float v44; // [rsp+58h] [rbp-C0h]
  int v45; // [rsp+5Ch] [rbp-BCh]
  float v46; // [rsp+60h] [rbp-B8h] BYREF
  float v47; // [rsp+64h] [rbp-B4h]
  float v48; // [rsp+68h] [rbp-B0h]
  int v49; // [rsp+6Ch] [rbp-ACh]
  float v50; // [rsp+70h] [rbp-A8h] BYREF
  float v51; // [rsp+74h] [rbp-A4h]
  float v52; // [rsp+78h] [rbp-A0h]
  int v53; // [rsp+7Ch] [rbp-9Ch]
  int v54; // [rsp+80h] [rbp-98h]
  __int64 v55; // [rsp+84h] [rbp-94h]
  int v56; // [rsp+8Ch] [rbp-8Ch]
  int v57; // [rsp+90h] [rbp-88h]
  int v58; // [rsp+94h] [rbp-84h]
  float v59[26]; // [rsp+98h] [rbp-80h]

  v57 = 1065353216;
  v58 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v59[0] = 0.0;
  v49 = 0;
  v45 = 0;
  v59[1] = 0.0;
  v56 = 1065353216;
  v59[2] = 1.0;
  v59[3] = 0.0;
  v59[4] = 0.0;
  v59[5] = 0.0;
  v59[6] = 1.0;
  *(_DWORD *)a3 = *((_DWORD *)a4 + 12);
  *((_DWORD *)a3 + 1) = *((_DWORD *)a4 + 13);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a4 + 14);
  v41[0] = (struct D3DXVECTOR3 *)&v42;
  v41[1] = (struct D3DXVECTOR3 *)&v46;
  v41[2] = (struct D3DXVECTOR3 *)&v50;
  v42 = *(float *)a4;
  v43 = *((float *)a4 + 1);
  v44 = *((float *)a4 + 2);
  v46 = *((float *)a4 + 4);
  v47 = *((float *)a4 + 5);
  v48 = *((float *)a4 + 6);
  v50 = *((float *)a4 + 8);
  v51 = *((float *)a4 + 9);
  v52 = *((float *)a4 + 10);
  v6 = sqrtf((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
  v7 = v46 * v46;
  v8 = v48 * v48;
  v9 = v6;
  v10 = v47;
  *(float *)a1 = v9;
  v11 = sqrtf((float)((float)(v10 * v10) + v7) + v8);
  v12 = v51 * v51;
  v13 = v52 * v52;
  v14 = v11;
  v15 = v50;
  *((float *)a1 + 1) = v14;
  v16 = sqrtf((float)((float)(v15 * v15) + v12) + v13);
  v17 = 0;
  *((float *)a1 + 2) = v16;
  if ( v14 <= v9 )
  {
    if ( v16 <= v9 )
    {
      v18 = 0;
      if ( v16 <= v14 )
      {
        v19 = 2;
        goto LABEL_13;
      }
      v20 = 2;
    }
    else
    {
      v18 = 2;
      v20 = 0;
    }
    v19 = 1;
    goto LABEL_14;
  }
  if ( v16 > v14 )
  {
    v18 = 2;
    v19 = 0;
LABEL_13:
    v20 = 1;
    goto LABEL_14;
  }
  v18 = 1;
  if ( v16 <= v9 )
  {
    v20 = 0;
    v19 = 2;
  }
  else
  {
    v20 = 2;
    v19 = 0;
  }
LABEL_14:
  v21 = v18;
  if ( *((float *)a1 + v18) < 0.000099999997 )
  {
    v22 = v41[v18];
    *(_DWORD *)v22 = *(&v57 + 3 * v18);
    *((_DWORD *)v22 + 1) = SLODWORD(v59[3 * v18 - 1]);
    *((float *)v22 + 2) = v59[3 * v18];
  }
  v23 = v41[v18];
  off_1000A66A8(v23, v23);
  if ( *((float *)a1 + v20) < 0.000099999997 )
  {
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v23) & _mask__AbsDouble_);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v23 + 1)) & _mask__AbsDouble_);
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v23 + 2)) & _mask__AbsDouble_);
    if ( v25 <= v24 )
    {
      v17 = 1;
      if ( v26 <= v24 )
      {
        v27 = v26 <= v25;
LABEL_22:
        if ( v27 )
          v17 = 2;
      }
    }
    else if ( v26 <= v25 )
    {
      v27 = v26 <= v24;
      goto LABEL_22;
    }
    v28 = *((float *)&v57 + 3 * v17);
    v29 = (float *)v41[v20];
    v35 = (float)(v28 * *((float *)v23 + 2)) - (float)(*(float *)v23 * v59[3 * v17]);
    v38 = (float)(*(float *)v23 * v59[3 * v17 - 1]) - (float)(v28 * *((float *)v23 + 1));
    *v29 = (float)(v59[3 * v17] * *((float *)v23 + 1)) - (float)(v59[3 * v17 - 1] * *((float *)v23 + 2));
    v29[1] = v35;
    v29[2] = v38;
  }
  v30 = v41[v20];
  off_1000A66A8(v30, v30);
  if ( *((float *)a1 + v19) < 0.000099999997 )
  {
    v31 = (float *)v41[v19];
    v36 = (float)(*(float *)v30 * *((float *)v23 + 2)) - (float)(*(float *)v23 * *((float *)v30 + 2));
    v39 = (float)(*(float *)v23 * *((float *)v30 + 1)) - (float)(*(float *)v30 * *((float *)v23 + 1));
    *v31 = (float)(*((float *)v30 + 2) * *((float *)v23 + 1)) - (float)(*((float *)v30 + 1) * *((float *)v23 + 2));
    v31[1] = v36;
    v31[2] = v39;
  }
  off_1000A66A8(v41[v19], v41[v19]);
  v32 = off_1000A66C8((const struct D3DXMATRIX *)&v42);
  v33 = v32;
  if ( v32 < 0.0 )
  {
    LODWORD(v33) = LODWORD(v32) ^ _mask__NegFloat_;
    *((_DWORD *)a1 + v21) ^= _mask__NegFloat_;
    v37 = *((_DWORD *)v23 + 1) ^ _mask__NegFloat_;
    v40 = *((_DWORD *)v23 + 2) ^ _mask__NegFloat_;
    *(_DWORD *)v23 ^= _mask__NegFloat_;
    *((_DWORD *)v23 + 1) = v37;
    *((_DWORD *)v23 + 2) = v40;
  }
  if ( (float)((float)(v33 + (float)(0.0 - 1.0)) * (float)(v33 + (float)(0.0 - 1.0))) > 0.000099999997 )
    return 2289436780LL;
  off_1000A6738(a2, (const struct D3DXMATRIX *)&v42);
  result = 0;
  *((_DWORD *)a2 + 3) ^= _mask__NegFloat_;
  return result;
}

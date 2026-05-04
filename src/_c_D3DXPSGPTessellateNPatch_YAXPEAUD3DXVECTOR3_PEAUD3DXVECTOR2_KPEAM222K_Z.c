void __fastcall c_D3DXPSGPTessellateNPatch(
        struct D3DXVECTOR3 *a1,
        struct D3DXVECTOR2 *a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        unsigned int a8)
{
  __int64 v9; // r14
  __int64 v12; // rdi
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float *v17; // rcx
  float *v18; // rax
  __int64 v19; // rdx
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float *v29; // rcx
  __int64 v30; // r10
  float v31; // [rsp+30h] [rbp-228h] BYREF
  float v32; // [rsp+34h] [rbp-224h] BYREF
  float v33; // [rsp+38h] [rbp-220h]
  float v34[3]; // [rsp+3Ch] [rbp-21Ch] BYREF
  float v35[3]; // [rsp+48h] [rbp-210h] BYREF
  float v36[6]; // [rsp+54h] [rbp-204h] BYREF
  float v37[3]; // [rsp+6Ch] [rbp-1ECh] BYREF
  float v38; // [rsp+78h] [rbp-1E0h] BYREF
  float v39; // [rsp+7Ch] [rbp-1DCh]
  float v40; // [rsp+80h] [rbp-1D8h]
  float v41[3]; // [rsp+84h] [rbp-1D4h] BYREF
  float v42[3]; // [rsp+90h] [rbp-1C8h] BYREF
  float v43; // [rsp+9Ch] [rbp-1BCh] BYREF
  float v44; // [rsp+A0h] [rbp-1B8h]
  float v45; // [rsp+A4h] [rbp-1B4h]
  float v46[12]; // [rsp+B0h] [rbp-1A8h] BYREF
  _DWORD Src[84]; // [rsp+E0h] [rbp-178h] BYREF

  v9 = a3;
  if ( a8 < 0x44 )
  {
    v31 = *a5;
    v32 = a5[1];
    v33 = a5[2];
    v38 = *a6;
    v39 = a6[1];
    v40 = a6[2];
    v43 = *a7;
    v44 = a7[1];
    v45 = a7[2];
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v38,
      (struct D3DXVECTOR3 *)&v31,
      a1,
      0.33333334,
      (struct D3DXVECTOR3 *)v34);
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v43,
      (struct D3DXVECTOR3 *)&v31,
      a1,
      0.33333334,
      (struct D3DXVECTOR3 *)v35);
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v31,
      (struct D3DXVECTOR3 *)&v38,
      (struct D3DXVECTOR3 *)((char *)a1 + 12),
      0.33333334,
      (struct D3DXVECTOR3 *)v36);
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v31,
      (struct D3DXVECTOR3 *)&v43,
      (struct D3DXVECTOR3 *)((char *)a1 + 24),
      0.33333334,
      (struct D3DXVECTOR3 *)v37);
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v43,
      (struct D3DXVECTOR3 *)&v38,
      (struct D3DXVECTOR3 *)((char *)a1 + 12),
      0.33333334,
      (struct D3DXVECTOR3 *)v41);
    CalculateEdgeControlPoint(
      (struct D3DXVECTOR3 *)&v38,
      (struct D3DXVECTOR3 *)&v43,
      (struct D3DXVECTOR3 *)((char *)a1 + 24),
      0.33333334,
      (struct D3DXVECTOR3 *)v42);
    v36[3] = (float)((float)((float)((float)((float)((float)(v35[0] + v34[0]) + v36[0]) + v37[0]) + v41[0]) + v42[0])
                   * 0.25)
           + (float)(0.0 - (float)((float)(v43 + (float)(v38 + v31)) * 0.166666));
    v36[4] = (float)((float)((float)((float)((float)((float)(v34[1] + v35[1]) + v36[1]) + v37[1]) + v41[1]) + v42[1])
                   * 0.25)
           + (float)(0.0 - (float)((float)(v44 + (float)(v39 + v32)) * 0.166666));
    v36[5] = (float)((float)((float)((float)((float)((float)(v34[2] + v35[2]) + v36[2]) + v37[2]) + v41[2]) + v42[2])
                   * 0.25)
           + (float)(0.0 - (float)((float)(v45 + (float)(v40 + v33)) * 0.166666));
    if ( (_DWORD)v9 )
    {
      v12 = v9;
      do
      {
        v13 = *((float *)a2 + 1);
        v14 = 0.0;
        v15 = 0.0;
        v16 = 0.0;
        v17 = v46;
        v18 = &v32;
        v19 = 10;
        v20 = (float)(1.0 - *(float *)a2) - v13;
        v46[2] = (float)((float)(*(float *)a2 * 3.0) * v13) * v13;
        v21 = *(float *)a2 * 6.0;
        v46[0] = (float)(v13 * v13) * v13;
        v46[1] = (float)((float)(v13 * 3.0) * v13) * v20;
        v46[4] = (float)(v21 * v20) * v13;
        v22 = (float)((float)(v13 * 3.0) * *(float *)a2) * *(float *)a2;
        v46[3] = (float)((float)(v13 * 3.0) * v20) * v20;
        v46[5] = v22;
        v46[6] = (float)(v20 * v20) * v20;
        v46[8] = (float)((float)(v20 * 3.0) * *(float *)a2) * *(float *)a2;
        v46[7] = (float)((float)(v20 * 3.0) * v20) * *(float *)a2;
        v46[9] = (float)(*(float *)a2 * *(float *)a2) * *(float *)a2;
        do
        {
          v23 = *v17++;
          v24 = v23;
          v25 = v23;
          v26 = v23 * v18[1];
          v27 = v24 * *(v18 - 1);
          v28 = v25 * *v18;
          v18 += 3;
          --v19;
          v16 = v16 + v26;
          v14 = v14 + v27;
          v15 = v15 + v28;
        }
        while ( v19 );
        *(float *)Src = v14;
        *(float *)&Src[1] = v15;
        *(float *)&Src[2] = v16;
        if ( a8 > 3 )
        {
          v29 = a6 + 3;
          v30 = a8 - 3;
          do
          {
            *(float *)((char *)v29 + (char *)Src - (char *)a6) = (float)((float)(v13
                                                                               * *(float *)((char *)v29
                                                                                          + (char *)a5
                                                                                          - (char *)a6))
                                                                       + (float)(v20 * *v29))
                                                               + (float)(*(float *)a2
                                                                       * *(float *)((char *)v29 + (char *)a7
                                                                                                - (char *)a6));
            ++v29;
            --v30;
          }
          while ( v30 );
        }
        memcpy(a4, Src, 4LL * a8);
        a4 += a8;
        a2 = (struct D3DXVECTOR2 *)((char *)a2 + 8);
        --v12;
      }
      while ( v12 );
    }
  }
}

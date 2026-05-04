void __fastcall D3DXTex::CCodec_A2W10V10U10::Encode(
        D3DXTex::CCodec_A2W10V10U10 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  __int64 v9; // r12
  __int128 v10; // xmm10
  __int128 v11; // xmm11
  __int128 v12; // xmm12
  int *v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // ebp
  unsigned int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // r11
  __int64 v19; // r10
  __int128 v20; // xmm4
  __int128 v21; // xmm3
  float v22; // xmm2_4
  __int128 v23; // xmm7
  __int128 v24; // xmm5
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r15d
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // eax
  __int16 v34; // r9
  int v35; // eax
  __int16 v36; // dx
  int v37; // eax
  __int16 v38; // r8
  int v39; // eax
  int v40; // ecx
  int v41; // r8d
  unsigned __int64 v42; // [rsp+100h] [rbp+8h]
  int v43; // [rsp+108h] [rbp+10h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  LODWORD(v9) = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = (int *)(*((_QWORD *)this + 5)
              + (unsigned int)(a3 * *((_DWORD *)this + 33))
              + (unsigned int)(a2 * *((_DWORD *)this + 32))
              + 4 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v14 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v42 = v14;
  if ( (a2 & 1) != 0 )
  {
    v15 = -1;
  }
  else
  {
    LODWORD(v9) = 0;
    v15 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    D3DXTex::CCodec::AddDiffusionError(this, v4);
    v14 = v42;
  }
  v16 = 0;
  v9 = (int)v9;
  if ( *((_DWORD *)this + 34) )
  {
    v17 = 16LL * v15;
    v18 = 16 * ((int)v9 + 1LL);
    v19 = 16 * ((int)v9 - (__int64)v15 + 1);
    do
    {
      v20 = v10;
      v21 = v8;
      v23 = v12;
      v24 = v11;
      *(float *)&v20 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v18 - 12)) * 511.0;
      *(float *)&v21 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v18 - 16)) * 511.0;
      v22 = *(float *)(v14 + 4LL * (v16 & 3));
      *(float *)&v23 = (float)(*(float *)&v12 + *(float *)((char *)v4 + v18 - 4)) * 3.0;
      *(float *)&v24 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v18 - 8)) * 511.0;
      v25 = (int)(float)(*(float *)&v20 + v22);
      v26 = (int)(float)(*(float *)&v21 + v22);
      v27 = (int)(float)(*(float *)&v23 + v22);
      v28 = (int)(float)(*(float *)&v24 + v22);
      v43 = v27;
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v21;
        v10 = v20;
        v29 = 2 * (v9 + v15 + 1);
        v11 = v24;
        v12 = v23;
        *(float *)(*((_QWORD *)this + 15) + v19) = (float)((float)((float)(*(float *)&v21 - (float)v26) / 511.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v19);
        *(float *)(*((_QWORD *)this + 15) + v18) = (float)((float)((float)(*(float *)&v21 - (float)v26) / 511.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v18);
        v30 = (float)(*(float *)&v21 - (float)v26) / 511.0;
        *(float *)&v8 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29) = (float)(v30 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v29);
        *(float *)(*((_QWORD *)this + 15) + v19 + 4) = (float)((float)((float)(*(float *)&v20 - (float)v25) / 511.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v19 + 4);
        *(float *)(*((_QWORD *)this + 15) + v18 + 4) = (float)((float)((float)(*(float *)&v20 - (float)v25) / 511.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v18 + 4);
        v31 = (float)(*(float *)&v20 - (float)v25) / 511.0;
        *(float *)&v10 = v31 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 4) = (float)(v31 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 4);
        *(float *)(*((_QWORD *)this + 15) + v19 + 8) = (float)((float)((float)(*(float *)&v24 - (float)v28) / 511.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v19 + 8);
        *(float *)(*((_QWORD *)this + 15) + v18 + 8) = (float)((float)((float)(*(float *)&v24 - (float)v28) / 511.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v18 + 8);
        v32 = (float)(*(float *)&v24 - (float)v28) / 511.0;
        *(float *)&v11 = v32 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 8) = (float)(v32 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 8);
        *(float *)&v12 = (float)(*(float *)&v23 - (float)v43) / 3.0;
        *(float *)(*((_QWORD *)this + 15) + v19 + 12) = (float)(*(float *)&v12 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v19 + 12);
        *(float *)(*((_QWORD *)this + 15) + v18 + 12) = (float)(*(float *)&v12 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v18 + 12);
        *(float *)&v12 = *(float *)&v12 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 12) = (float)((float)((float)(*(float *)&v23 - (float)v43) / 3.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v9 + v15 + 1) + 12);
        v27 = (int)(float)(*(float *)&v23 + v22);
      }
      v33 = 511;
      v34 = -511;
      if ( v26 < 511 )
        v33 = (int)(float)(*(float *)&v21 + v22);
      if ( v33 > -511 )
        v34 = v33;
      v35 = 511;
      if ( v25 < 511 )
        v35 = (int)(float)(*(float *)&v20 + v22);
      v36 = -511;
      if ( v35 > -511 )
        v36 = v35;
      v37 = 511;
      if ( v28 < 511 )
        v37 = (int)(float)(*(float *)&v24 + v22);
      v38 = -511;
      if ( v37 > -511 )
        v38 = v37;
      v39 = 3;
      if ( v27 < 3 )
        v39 = v27;
      v40 = -3;
      if ( v39 > -3 )
        v40 = v39;
      ++v16;
      v9 += v15;
      v19 += v17;
      v41 = (v40 << 30) | ((v36 & 0x3FF | ((v38 & 0x3FF) << 10)) << 10);
      v14 = v42;
      v18 += v17;
      *v13 = v34 & 0x3FF | v41;
      v13 += v15;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

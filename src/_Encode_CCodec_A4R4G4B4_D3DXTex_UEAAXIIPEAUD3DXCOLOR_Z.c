void __fastcall D3DXTex::CCodec_A4R4G4B4::Encode(D3DXTex::CCodec_A4R4G4B4 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm9
  __int128 v11; // xmm10
  __int128 v12; // xmm11
  _WORD *v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // ebp
  unsigned int v16; // r13d
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r8
  __int64 v21; // rdx
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  float v24; // xmm2_4
  __int128 v25; // xmm5
  __int128 v26; // xmm7
  int v27; // ebp
  int v28; // r12d
  int v29; // r14d
  int v30; // r15d
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // ecx
  __int16 v36; // ax
  int v37; // ecx
  __int16 v38; // ax
  int v39; // ecx
  __int16 v40; // ax
  int v41; // ecx
  __int16 v42; // ax
  __int16 v43; // [rsp+20h] [rbp-D8h]
  __int16 v44; // [rsp+24h] [rbp-D4h]
  __int16 v45; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v46; // [rsp+100h] [rbp+8h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = (_WORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + 2 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v14 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v46 = v14;
  if ( (a2 & 1) != 0 )
  {
    v15 = -1;
  }
  else
  {
    v9 = 0;
    v15 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    D3DXTex::CCodec::AddDiffusionError(this, v4);
    v14 = v46;
  }
  v16 = 0;
  v17 = v9;
  v18 = v15;
  if ( *((_DWORD *)this + 34) )
  {
    v19 = 16LL * v15;
    v20 = 16 * (v9 + 1LL);
    v21 = 16 * (v9 - (__int64)v15 + 1);
    do
    {
      v22 = v8;
      v23 = v10;
      v25 = v11;
      v26 = v12;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v20 - 16)) * 15.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v20 - 12)) * 15.0;
      v24 = *(float *)(v14 + 4LL * (v16 & 3));
      *(float *)&v25 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v20 - 8)) * 15.0;
      *(float *)&v26 = (float)(*(float *)&v12 + *(float *)((char *)v4 + v20 - 4)) * 15.0;
      v27 = (int)(float)(*(float *)&v22 + v24);
      v28 = (int)(float)(*(float *)&v23 + v24);
      v29 = (int)(float)(*(float *)&v25 + v24);
      v30 = (int)(float)(*(float *)&v26 + v24);
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v31 = 2 * (v17 + v18 + 1);
        v10 = v23;
        v11 = v25;
        v12 = v26;
        *(float *)(*((_QWORD *)this + 15) + v21) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 15.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v21);
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 15.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        v32 = (float)(*(float *)&v22 - (float)v27) / 15.0;
        *(float *)&v8 = v32 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31) = (float)(v32 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v31);
        *(float *)(*((_QWORD *)this + 15) + v21 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 15.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 4);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 15.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        v33 = (float)(*(float *)&v23 - (float)v28) / 15.0;
        *(float *)&v10 = v33 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 4) = (float)(v33 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 4);
        *(float *)(*((_QWORD *)this + 15) + v21 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v29) / 15.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 8);
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v29) / 15.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        v34 = (float)(*(float *)&v25 - (float)v29) / 15.0;
        *(float *)&v11 = v34 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 8) = (float)(v34 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 8);
        *(float *)&v12 = (float)(*(float *)&v26 - (float)v30) / 15.0;
        *(float *)(*((_QWORD *)this + 15) + v21 + 12) = (float)(*(float *)&v12 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v21 + 12);
        *(float *)(*((_QWORD *)this + 15) + v20 + 12) = (float)(*(float *)&v12 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v20 + 12);
        *(float *)&v12 = *(float *)&v12 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 12) = (float)((float)((float)(*(float *)&v26 - (float)v30) / 15.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v17 + v18 + 1) + 12);
      }
      v35 = 15;
      if ( v27 < 15 )
        v35 = (int)(float)(*(float *)&v22 + v24);
      v36 = 0;
      if ( v35 > 0 )
        v36 = v35;
      v37 = 15;
      if ( v28 < 15 )
        v37 = (int)(float)(*(float *)&v23 + v24);
      v43 = v36;
      v38 = 0;
      if ( v37 > 0 )
        v38 = v37;
      v39 = 15;
      if ( v29 < 15 )
        v39 = (int)(float)(*(float *)&v25 + v24);
      v44 = v38;
      v40 = 0;
      if ( v39 > 0 )
        v40 = v39;
      v41 = 15;
      if ( v30 < 15 )
        v41 = (int)(float)(*(float *)&v26 + v24);
      v45 = v40;
      v42 = 0;
      if ( v41 > 0 )
        v42 = v41;
      v14 = v46;
      ++v16;
      v17 += v18;
      v21 += v19;
      v20 += v19;
      *v13 = v45 | (16 * (v44 | (16 * (v43 | (16 * v42)))));
      v13 += v18;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

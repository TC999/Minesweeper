void __fastcall D3DXTex::CCodec_A16B16G16R16::Encode(
        D3DXTex::CCodec_A16B16G16R16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  __int64 v9; // r12
  __int128 v10; // xmm9
  __int128 v11; // xmm10
  __int128 v12; // xmm11
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // ebp
  unsigned int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // r11
  __int64 v19; // r10
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  float v22; // xmm2_4
  __int128 v23; // xmm5
  __int128 v24; // xmm7
  int v25; // edx
  int v26; // r8d
  int v27; // r15d
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // ecx
  int v33; // eax
  int v34; // r9d
  int v35; // eax
  int v36; // r8d
  int v37; // eax
  int v38; // edx
  int v39; // eax
  unsigned __int64 v40; // [rsp+F0h] [rbp+8h]

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
  v13 = (unsigned __int64 *)(*((_QWORD *)this + 5)
                           + (unsigned int)(a3 * *((_DWORD *)this + 33))
                           + (unsigned int)(a2 * *((_DWORD *)this + 32))
                           + 8 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v14 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v40 = v14;
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
    v14 = v40;
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
      v20 = v8;
      v21 = v10;
      v23 = v11;
      v24 = v12;
      *(float *)&v20 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v18 - 16)) * 65535.0;
      *(float *)&v21 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v18 - 12)) * 65535.0;
      v22 = *(float *)(v14 + 4LL * (v16 & 3));
      *(float *)&v23 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v18 - 8)) * 65535.0;
      *(float *)&v24 = (float)(*(float *)&v12 + *(float *)((char *)v4 + v18 - 4)) * 65535.0;
      v25 = (int)(float)(*(float *)&v20 + v22);
      v26 = (int)(float)(*(float *)&v21 + v22);
      v27 = (int)(float)(*(float *)&v23 + v22);
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v20;
        v28 = 2 * (v9 + v15 + 1);
        v10 = v21;
        v11 = v23;
        v12 = v24;
        *(float *)(*((_QWORD *)this + 15) + v19) = (float)((float)((float)(*(float *)&v20 - (float)v25) / 65535.0)
                                                         * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v19);
        *(float *)(*((_QWORD *)this + 15) + v18) = (float)((float)((float)(*(float *)&v20 - (float)v25) / 65535.0)
                                                         * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v18);
        v29 = (float)(*(float *)&v20 - (float)v25) / 65535.0;
        *(float *)&v8 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)(*((_QWORD *)this + 15) + v19 + 4) = (float)((float)((float)(*(float *)&v21 - (float)v26) / 65535.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v19 + 4);
        *(float *)(*((_QWORD *)this + 15) + v18 + 4) = (float)((float)((float)(*(float *)&v21 - (float)v26) / 65535.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v18 + 4);
        v30 = (float)(*(float *)&v21 - (float)v26) / 65535.0;
        *(float *)&v10 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4) = (float)(v30 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4);
        *(float *)(*((_QWORD *)this + 15) + v19 + 8) = (float)((float)((float)(*(float *)&v23 - (float)v27) / 65535.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v19 + 8);
        *(float *)(*((_QWORD *)this + 15) + v18 + 8) = (float)((float)((float)(*(float *)&v23 - (float)v27) / 65535.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v18 + 8);
        v31 = (float)(*(float *)&v23 - (float)v27) / 65535.0;
        *(float *)&v11 = v31 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 8) = (float)(v31 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 8);
        *(float *)&v12 = (float)(*(float *)&v24 - (float)(int)(float)(*(float *)&v24 + v22)) / 65535.0;
        *(float *)(*((_QWORD *)this + 15) + v19 + 12) = (float)(*(float *)&v12 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v19 + 12);
        *(float *)(*((_QWORD *)this + 15) + v18 + 12) = (float)(*(float *)&v12 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v18 + 12);
        *(float *)&v12 = *(float *)&v12 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 12) = (float)((float)((float)(*(float *)&v24
                                                                                  - (float)(int)(float)(*(float *)&v24 + v22))
                                                                          / 65535.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v9 + v15 + 1) + 12);
      }
      v32 = 0xFFFF;
      v33 = 0xFFFF;
      if ( v25 < 0xFFFF )
        v33 = (int)(float)(*(float *)&v20 + v22);
      v34 = 0;
      if ( v33 > 0 )
        v34 = v33;
      v35 = 0xFFFF;
      if ( v26 < 0xFFFF )
        v35 = (int)(float)(*(float *)&v21 + v22);
      v36 = 0;
      if ( v35 > 0 )
        v36 = v35;
      v37 = 0xFFFF;
      if ( v27 < 0xFFFF )
        v37 = (int)(float)(*(float *)&v23 + v22);
      v38 = 0;
      if ( v37 > 0 )
        v38 = v37;
      if ( (int)(float)(*(float *)&v24 + v22) < 0xFFFF )
        v32 = (int)(float)(*(float *)&v24 + v22);
      v39 = 0;
      if ( v32 > 0 )
        v39 = v32;
      ++v16;
      v9 += v15;
      v19 += v17;
      v18 += v17;
      *v13 = v34 | ((v36 | ((v38 | (unsigned __int64)((__int64)v39 << 16)) << 16)) << 16);
      v14 = v40;
      v13 += v15;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_Q16W16V16U16::Encode(
        D3DXTex::CCodec_Q16W16V16U16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm9
  __int128 v11; // xmm10
  __int128 v12; // xmm11
  __int64 *v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // r13d
  unsigned int v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // r11
  __int64 v19; // r12
  __int64 v20; // r10
  __int64 v21; // r9
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  float v24; // xmm2_4
  __int128 v25; // xmm5
  __int128 v26; // xmm7
  int v27; // edx
  int v28; // r8d
  int v29; // r13d
  int v30; // r15d
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // ecx
  __int16 v36; // ax
  int v37; // eax
  unsigned __int16 v38; // r8
  int v39; // ecx
  __int16 v40; // ax
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rax
  unsigned __int16 v44; // [rsp+20h] [rbp-D8h]
  unsigned __int16 v45; // [rsp+28h] [rbp-D0h]
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
  v13 = (__int64 *)(*((_QWORD *)this + 5)
                  + (unsigned int)(a3 * *((_DWORD *)this + 33))
                  + (unsigned int)(a2 * *((_DWORD *)this + 32))
                  + 8 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
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
    v20 = 16 * (v17 + 1);
    v21 = 16 * (v17 - v15 + 1);
    do
    {
      v22 = v8;
      v23 = v10;
      v25 = v11;
      v26 = v12;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v20 - 16)) * 32767.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v20 - 12)) * 32767.0;
      v24 = *(float *)(v14 + 4LL * (v16 & 3));
      *(float *)&v25 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v20 - 8)) * 32767.0;
      *(float *)&v26 = (float)(*(float *)&v12 + *(float *)((char *)v4 + v20 - 4)) * 32767.0;
      v27 = (int)(float)(*(float *)&v22 + v24);
      v28 = (int)(float)(*(float *)&v23 + v24);
      v29 = (int)(float)(*(float *)&v25 + v24);
      v30 = (int)(float)(*(float *)&v26 + v24);
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v31 = 2 * (v18 + v17 + 1);
        v10 = v23;
        v11 = v25;
        v12 = v26;
        *(float *)(*((_QWORD *)this + 15) + v21) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 32767.0)
                                                         * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v21);
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 32767.0)
                                                         * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        v32 = (float)(*(float *)&v22 - (float)v27) / 32767.0;
        *(float *)&v8 = v32 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31) = (float)(v32 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v31);
        *(float *)(*((_QWORD *)this + 15) + v21 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 32767.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 4);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 32767.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        v33 = (float)(*(float *)&v23 - (float)v28) / 32767.0;
        *(float *)&v10 = v33 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 4) = (float)(v33 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 4);
        *(float *)(*((_QWORD *)this + 15) + v21 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v29) / 32767.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 8);
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v29) / 32767.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        v34 = (float)(*(float *)&v25 - (float)v29) / 32767.0;
        *(float *)&v11 = v34 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 8) = (float)(v34 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 8);
        *(float *)&v12 = (float)(*(float *)&v26 - (float)v30) / 32767.0;
        *(float *)(*((_QWORD *)this + 15) + v21 + 12) = (float)(*(float *)&v12 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v21 + 12);
        *(float *)(*((_QWORD *)this + 15) + v20 + 12) = (float)(*(float *)&v12 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v20 + 12);
        *(float *)&v12 = *(float *)&v12 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v31 + 12) = (float)((float)((float)(*(float *)&v26 - (float)v30)
                                                                          / 32767.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v18 + v17 + 1) + 12);
      }
      v35 = 0x7FFF;
      if ( v27 < 0x7FFF )
        v35 = (int)(float)(*(float *)&v22 + v24);
      v36 = -32767;
      if ( v35 > -32767 )
        v36 = v35;
      v44 = v36;
      v37 = 0x7FFF;
      if ( v28 < 0x7FFF )
        v37 = (int)(float)(*(float *)&v23 + v24);
      v38 = -32767;
      v39 = 0x7FFF;
      if ( v37 > -32767 )
        v38 = v37;
      if ( v29 < 0x7FFF )
        v39 = (int)(float)(*(float *)&v25 + v24);
      v40 = -32767;
      if ( v39 > -32767 )
        v40 = v39;
      v41 = -32767;
      v45 = v40;
      v42 = 0x7FFF;
      if ( v30 < 0x7FFF )
        v42 = (int)(float)(*(float *)&v26 + v24);
      if ( v42 > -32767 )
        v41 = v42;
      ++v16;
      v17 += v18;
      v43 = v41;
      v21 += v19;
      v20 += v19;
      v14 = v46;
      *v13 = v44 | ((v38 | (((v43 << 16) | v45) << 16)) << 16);
      v13 += v18;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

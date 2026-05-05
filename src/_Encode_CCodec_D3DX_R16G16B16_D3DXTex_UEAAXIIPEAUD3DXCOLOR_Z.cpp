void __fastcall D3DXTex::CCodec_D3DX_R16G16B16::Encode(
        D3DXTex::CCodec_D3DX_R16G16B16 *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  _WORD *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  int v27; // r13d
  int v28; // r14d
  int v29; // r15d
  __int64 v30; // rcx
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // ecx
  __int16 v34; // ax
  int v35; // ecx
  __int16 v36; // ax
  int v37; // ecx
  __int16 v38; // ax
  __int16 v39; // [rsp+20h] [rbp-68h]
  __int16 v40; // [rsp+24h] [rbp-64h]
  unsigned __int64 v41; // [rsp+90h] [rbp+8h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = (_WORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + 6 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v41 = v13;
  if ( (a2 & 1) != 0 )
  {
    v14 = -1;
  }
  else
  {
    v9 = 0;
    v14 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    D3DXTex::CCodec::AddDiffusionError(this, v4);
    v13 = v41;
  }
  v15 = v9;
  v16 = 0;
  v17 = v14;
  if ( *((_DWORD *)this + 34) )
  {
    v18 = v15 - v14 + 1;
    v19 = 16LL * v14;
    v20 = 6LL * v14;
    v21 = 16 * (v15 + 1);
    v22 = 16 * v18;
    do
    {
      v24 = v8;
      v25 = v10;
      v23 = v16 & 3;
      v26 = v11;
      *(float *)&v24 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v21 - 16)) * 65535.0;
      *(float *)&v25 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v21 - 12)) * 65535.0;
      *(float *)&v26 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v21 - 8)) * 65535.0;
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v23));
      v28 = (int)(float)(*(float *)&v25 + *(float *)(v13 + 4 * v23));
      v29 = (int)(float)(*(float *)&v26 + *(float *)(v13 + 4 * v23));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v24;
        v30 = 2 * (v15 + v17 + 1);
        v10 = v25;
        v11 = v26;
        *(float *)(*((_QWORD *)this + 15) + v22) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 65535.0)
                                                         * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v22);
        *(float *)(v21 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 65535.0)
                                                         * 0.3125)
                                                 + *(float *)(v21 + *((_QWORD *)this + 15));
        v31 = (float)(*(float *)&v24 - (float)v27) / 65535.0;
        *(float *)&v8 = v31 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30) = (float)(v31 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v30);
        *(float *)(*((_QWORD *)this + 15) + v22 + 4) = (float)((float)((float)(*(float *)&v25 - (float)v28) / 65535.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v22 + 4);
        *(float *)(v21 + *((_QWORD *)this + 15) + 4) = (float)((float)((float)(*(float *)&v25 - (float)v28) / 65535.0)
                                                             * 0.3125)
                                                     + *(float *)(v21 + *((_QWORD *)this + 15) + 4);
        v32 = (float)(*(float *)&v25 - (float)v28) / 65535.0;
        *(float *)&v10 = v32 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 4) = (float)(v32 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 4);
        *(float *)&v11 = (float)(*(float *)&v26 - (float)v29) / 65535.0;
        *(float *)(*((_QWORD *)this + 15) + v22 + 8) = (float)(*(float *)&v11 * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v22 + 8);
        *(float *)(v21 + *((_QWORD *)this + 15) + 8) = (float)(*(float *)&v11 * 0.3125)
                                                     + *(float *)(v21 + *((_QWORD *)this + 15) + 8);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 8) = (float)((float)((float)(*(float *)&v26 - (float)v29) / 65535.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v15 + v17 + 1) + 8);
      }
      v33 = 0xFFFF;
      if ( v27 < 0xFFFF )
        v33 = v27;
      v34 = 0;
      if ( v33 > 0 )
        v34 = v33;
      v35 = 0xFFFF;
      if ( v28 < 0xFFFF )
        v35 = v28;
      v39 = v34;
      v36 = 0;
      if ( v35 > 0 )
        v36 = v35;
      v37 = 0xFFFF;
      if ( v29 < 0xFFFF )
        v37 = v29;
      v40 = v36;
      v38 = 0;
      if ( v37 > 0 )
        v38 = v37;
      v13 = v41;
      ++v16;
      *v12 = v38;
      v12[1] = v40;
      v15 += v17;
      v12[2] = v39;
      v22 += v19;
      v21 += v19;
      v12 = (_WORD *)((char *)v12 + v20);
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

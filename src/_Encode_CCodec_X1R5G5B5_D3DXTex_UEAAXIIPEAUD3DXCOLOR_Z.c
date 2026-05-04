void __fastcall D3DXTex::CCodec_X1R5G5B5::Encode(D3DXTex::CCodec_X1R5G5B5 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  _WORD *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // ebp
  unsigned int v15; // r13d
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rax
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  int v25; // ebp
  int v26; // r12d
  int v27; // r14d
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  int v31; // ecx
  __int16 v32; // ax
  int v33; // ecx
  __int16 v34; // ax
  int v35; // ecx
  __int16 v36; // ax
  __int16 v37; // [rsp+20h] [rbp-68h]
  __int16 v38; // [rsp+24h] [rbp-64h]
  unsigned __int64 v39; // [rsp+90h] [rbp+8h]

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
                + 2 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v39 = v13;
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
    v13 = v39;
  }
  v15 = 0;
  v16 = v9;
  v17 = v14;
  if ( *((_DWORD *)this + 34) )
  {
    v18 = 16 * (v9 + 1LL);
    v19 = 16LL * v14;
    v20 = 16 * (v9 - (__int64)v14 + 1);
    do
    {
      v22 = v8;
      v23 = v10;
      v21 = v15 & 3;
      v24 = v11;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v18 - 16)) * 31.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v18 - 12)) * 31.0;
      *(float *)&v24 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v18 - 8)) * 31.0;
      v25 = (int)(float)(*(float *)&v22 + *(float *)(v13 + 4 * v21));
      v26 = (int)(float)(*(float *)&v23 + *(float *)(v13 + 4 * v21));
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v21));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v28 = 2 * (v16 + v17 + 1);
        v10 = v23;
        v11 = v24;
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v22 - (float)v25) / 31.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        *(float *)(v18 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v22 - (float)v25) / 31.0) * 0.3125)
                                                 + *(float *)(v18 + *((_QWORD *)this + 15));
        v29 = (float)(*(float *)&v22 - (float)v25) / 31.0;
        *(float *)&v8 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 31.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        *(float *)(v18 + *((_QWORD *)this + 15) + 4) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 31.0)
                                                             * 0.3125)
                                                     + *(float *)(v18 + *((_QWORD *)this + 15) + 4);
        v30 = (float)(*(float *)&v23 - (float)v26) / 31.0;
        *(float *)&v10 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4) = (float)(v30 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4);
        *(float *)&v11 = (float)(*(float *)&v24 - (float)v27) / 31.0;
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)(*(float *)&v11 * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        *(float *)(v18 + *((_QWORD *)this + 15) + 8) = (float)(*(float *)&v11 * 0.3125)
                                                     + *(float *)(v18 + *((_QWORD *)this + 15) + 8);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 8) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 31.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v16 + v17 + 1) + 8);
      }
      v31 = 31;
      if ( v25 < 31 )
        v31 = v25;
      v32 = 0;
      if ( v31 > 0 )
        v32 = v31;
      v33 = 31;
      if ( v26 < 31 )
        v33 = v26;
      v37 = v32;
      v34 = 0;
      if ( v33 > 0 )
        v34 = v33;
      v35 = 31;
      if ( v27 < 31 )
        v35 = v27;
      v38 = v34;
      v36 = 0;
      if ( v35 > 0 )
        v36 = v35;
      v13 = v39;
      ++v15;
      v16 += v17;
      v20 += v19;
      v18 += v19;
      *v12 = v36 | (32 * (v38 | (32 * v37)));
      v12 += v17;
    }
    while ( v15 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_R3G3B2::Encode(D3DXTex::CCodec_R3G3B2 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rsi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm8
  __int128 v11; // xmm9
  _BYTE *v12; // rdi
  unsigned __int64 v13; // r15
  int v14; // ebp
  unsigned int v15; // r13d
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rax
  __int128 v22; // xmm4
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  int v25; // ebp
  int v26; // r14d
  int v27; // r12d
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  int v31; // ecx
  char v32; // al
  int v33; // ecx
  char v34; // al
  int v35; // ecx
  char v36; // al
  char v37; // [rsp+20h] [rbp-68h]
  char v38; // [rsp+24h] [rbp-64h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = (_BYTE *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
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
    D3DXTex::CCodec::AddDiffusionError(this, v4);
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
      v23 = v8;
      v22 = v11;
      v21 = v15 & 3;
      v24 = v10;
      *(float *)&v22 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v18 - 8)) * 3.0;
      *(float *)&v23 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v18 - 16)) * 7.0;
      *(float *)&v24 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v18 - 12)) * 7.0;
      v25 = (int)(float)(*(float *)&v23 + *(float *)(v13 + 4 * v21));
      v26 = (int)(float)(*(float *)&v22 + *(float *)(v13 + 4 * v21));
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v21));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v23;
        v28 = 2 * (v16 + v17 + 1);
        v10 = v24;
        v11 = v22;
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v23 - (float)v25) / 7.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        *(float *)(v18 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v23 - (float)v25) / 7.0) * 0.3125)
                                                 + *(float *)(v18 + *((_QWORD *)this + 15));
        v29 = (float)(*(float *)&v23 - (float)v25) / 7.0;
        *(float *)&v8 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 7.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        *(float *)(v18 + *((_QWORD *)this + 15) + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 7.0)
                                                             * 0.3125)
                                                     + *(float *)(v18 + *((_QWORD *)this + 15) + 4);
        v30 = (float)(*(float *)&v24 - (float)v27) / 7.0;
        *(float *)&v10 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4) = (float)(v30 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4);
        *(float *)&v11 = (float)(*(float *)&v22 - (float)v26) / 3.0;
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)(*(float *)&v11 * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        *(float *)(v18 + *((_QWORD *)this + 15) + 8) = (float)(*(float *)&v11 * 0.3125)
                                                     + *(float *)(v18 + *((_QWORD *)this + 15) + 8);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 8) = (float)((float)((float)(*(float *)&v22 - (float)v26) / 3.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v16 + v17 + 1) + 8);
      }
      v31 = 7;
      if ( v25 < 7 )
        v31 = v25;
      v32 = 0;
      if ( v31 > 0 )
        v32 = v31;
      v33 = 7;
      v37 = v32;
      if ( v27 < 7 )
        v33 = v27;
      v34 = 0;
      if ( v33 > 0 )
        v34 = v33;
      v35 = 3;
      v38 = v34;
      if ( v26 < 3 )
        v35 = v26;
      v36 = 0;
      if ( v35 > 0 )
        v36 = v35;
      ++v15;
      v16 += v17;
      v20 += v19;
      v18 += v19;
      *v12 = v36 | (4 * (v38 | (8 * v37)));
      v12 += v17;
    }
    while ( v15 < *((_DWORD *)this + 34) );
  }
}

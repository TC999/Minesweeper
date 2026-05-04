void __fastcall D3DXTex::CCodec_L6V5U5::Encode(D3DXTex::CCodec_L6V5U5 *this, int a2, int a3, struct D3DXCOLOR *a4)
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
  __int16 v36; // ax
  char v37; // [rsp+20h] [rbp-68h]
  char v38; // [rsp+24h] [rbp-64h]
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
      v23 = v8;
      v22 = v11;
      v21 = v15 & 3;
      v24 = v10;
      *(float *)&v22 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v18 - 4)) * 63.0;
      *(float *)&v23 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v18 - 16)) * 15.0;
      *(float *)&v24 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v18 - 12)) * 15.0;
      v25 = (int)(float)(*(float *)&v23 + *(float *)(v13 + 4 * v21));
      v26 = (int)(float)(*(float *)&v22 + *(float *)(v13 + 4 * v21));
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v21));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v23;
        v28 = 2 * (v16 + v17 + 1);
        v10 = v24;
        v11 = v22;
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v23 - (float)v25) / 15.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        *(float *)(*((_QWORD *)this + 15) + v18) = (float)((float)((float)(*(float *)&v23 - (float)v25) / 15.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v18);
        v29 = (float)(*(float *)&v23 - (float)v25) / 15.0;
        *(float *)&v8 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 15.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        *(float *)(*((_QWORD *)this + 15) + v18 + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 15.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v18 + 4);
        v30 = (float)(*(float *)&v24 - (float)v27) / 15.0;
        *(float *)&v10 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4) = (float)(v30 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4);
        *(float *)&v11 = (float)(*(float *)&v22 - (float)v26) / 63.0;
        *(float *)(*((_QWORD *)this + 15) + v20 + 12) = (float)(*(float *)&v11 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v20 + 12);
        *(float *)(*((_QWORD *)this + 15) + v18 + 12) = (float)(*(float *)&v11 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v18 + 12);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 12) = (float)((float)((float)(*(float *)&v22 - (float)v26) / 63.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v16 + v17 + 1) + 12);
      }
      v31 = 15;
      if ( v25 < 15 )
        v31 = v25;
      v32 = -15;
      if ( v31 > -15 )
        v32 = v31;
      v33 = 15;
      v37 = v32;
      v34 = -15;
      if ( v27 < 15 )
        v33 = v27;
      if ( v33 > -15 )
        v34 = v33;
      v35 = 63;
      v38 = v34;
      v36 = -63;
      if ( v26 < 63 )
        v35 = v26;
      if ( v35 > -63 )
        v36 = v35;
      ++v15;
      v16 += v17;
      v20 += v19;
      v18 += v19;
      *v12 = v37 & 0x1F | (32 * ((32 * v36) | v38 & 0x1F));
      v13 = v39;
      v12 += v17;
    }
    while ( v15 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_G16R16::Encode(D3DXTex::CCodec_G16R16 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm7
  int *v11; // rsi
  unsigned __int64 v12; // r15
  int v13; // ebp
  unsigned int v14; // r13d
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  int v24; // edx
  int v25; // r12d
  __int64 v26; // rcx
  float v27; // xmm0_4
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // ecx

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = (int *)(*((_QWORD *)this + 5)
              + (unsigned int)(a3 * *((_DWORD *)this + 33))
              + (unsigned int)(a2 * *((_DWORD *)this + 32))
              + 4 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v12 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  if ( (a2 & 1) != 0 )
  {
    v13 = -1;
  }
  else
  {
    v9 = 0;
    v13 = 1;
  }
  if ( *((_QWORD *)this + 15) )
    D3DXTex::CCodec::AddDiffusionError(this, v4);
  v14 = 0;
  v15 = v9;
  v16 = v13;
  if ( *((_DWORD *)this + 34) )
  {
    v17 = v9 - (__int64)v13 + 1;
    v18 = 16LL * v13;
    v19 = 16 * (v9 + 1LL);
    v20 = 16 * v17;
    do
    {
      v22 = v8;
      v23 = v10;
      v21 = v14 & 3;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v19 - 16)) * 65535.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v19 - 12)) * 65535.0;
      v24 = (int)(float)(*(float *)&v22 + *(float *)(v12 + 4 * v21));
      v25 = (int)(float)(*(float *)&v23 + *(float *)(v12 + 4 * v21));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v26 = 2 * (v15 + v16 + 1);
        v10 = v23;
        *(float *)(v20 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v22 - (float)v24) / 65535.0)
                                                         * 0.1875)
                                                 + *(float *)(v20 + *((_QWORD *)this + 15));
        *(float *)(v19 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v22 - (float)v24) / 65535.0)
                                                         * 0.3125)
                                                 + *(float *)(v19 + *((_QWORD *)this + 15));
        v27 = (float)(*(float *)&v22 - (float)v24) / 65535.0;
        *(float *)&v8 = v27 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v26) = (float)(v27 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v26);
        *(float *)&v10 = (float)(*(float *)&v23 - (float)v25) / 65535.0;
        *(float *)(v20 + *((_QWORD *)this + 15) + 4) = (float)(*(float *)&v10 * 0.1875)
                                                     + *(float *)(v20 + *((_QWORD *)this + 15) + 4);
        *(float *)(v19 + *((_QWORD *)this + 15) + 4) = (float)(*(float *)&v10 * 0.3125)
                                                     + *(float *)(v19 + *((_QWORD *)this + 15) + 4);
        *(float *)&v10 = *(float *)&v10 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v26 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v25) / 65535.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v15 + v16 + 1) + 4);
      }
      v28 = 0xFFFF;
      if ( v24 < 0xFFFF )
        v28 = v24;
      v29 = 0;
      if ( v28 > 0 )
        v29 = v28;
      v30 = 0xFFFF;
      if ( v25 < 0xFFFF )
        v30 = v25;
      v31 = 0;
      if ( v30 > 0 )
        v31 = v30;
      ++v14;
      v15 += v16;
      v20 += v18;
      v19 += v18;
      *v11 = v29 | (v31 << 16);
      v11 += v16;
    }
    while ( v14 < *((_DWORD *)this + 34) );
  }
}

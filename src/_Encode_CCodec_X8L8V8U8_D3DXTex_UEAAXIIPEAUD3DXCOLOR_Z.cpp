void __fastcall D3DXTex::CCodec_X8L8V8U8::Encode(D3DXTex::CCodec_X8L8V8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm8
  __int128 v11; // xmm9
  int *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // r13d
  unsigned int v15; // r14d
  __int64 v16; // rbp
  __int64 v17; // r11
  __int64 v18; // r12
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rax
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  int v25; // edx
  int v26; // r13d
  int v27; // r15d
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  int v31; // eax
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // r8
  int v34; // eax
  int v35; // ecx
  unsigned __int8 v36; // al
  unsigned __int64 v37; // [rsp+D0h] [rbp+8h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = (int *)(*((_QWORD *)this + 5)
              + (unsigned int)(a3 * *((_DWORD *)this + 33))
              + (unsigned int)(a2 * *((_DWORD *)this + 32))
              + 4 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v37 = v13;
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
    v13 = v37;
  }
  v15 = 0;
  v16 = v9;
  v17 = v14;
  if ( *((_DWORD *)this + 34) )
  {
    v18 = 16LL * v14;
    v19 = 16 * (v16 + 1);
    v20 = 16 * (v16 - v14 + 1);
    do
    {
      v22 = v8;
      v23 = v10;
      v21 = v15 & 3;
      v24 = v11;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v19 - 16)) * 127.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v19 - 12)) * 127.0;
      *(float *)&v24 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v19 - 4)) * 255.0;
      v25 = (int)(float)(*(float *)&v22 + *(float *)(v13 + 4 * v21));
      v26 = (int)(float)(*(float *)&v23 + *(float *)(v13 + 4 * v21));
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v21));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v28 = 2 * (v17 + v16 + 1);
        v10 = v23;
        v11 = v24;
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v22 - (float)v25) / 127.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        *(float *)(*((_QWORD *)this + 15) + v19) = (float)((float)((float)(*(float *)&v22 - (float)v25) / 127.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v19);
        v29 = (float)(*(float *)&v22 - (float)v25) / 127.0;
        *(float *)&v8 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 127.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        *(float *)(*((_QWORD *)this + 15) + v19 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 127.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v19 + 4);
        v30 = (float)(*(float *)&v23 - (float)v26) / 127.0;
        *(float *)&v10 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4) = (float)(v30 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 4);
        *(float *)&v11 = (float)(*(float *)&v24 - (float)v27) / 255.0;
        *(float *)(*((_QWORD *)this + 15) + v20 + 12) = (float)(*(float *)&v11 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v20 + 12);
        *(float *)(*((_QWORD *)this + 15) + v19 + 12) = (float)(*(float *)&v11 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v19 + 12);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 12) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 255.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v17 + v16 + 1) + 12);
      }
      v31 = 127;
      if ( v25 < 127 )
        v31 = v25;
      v32 = -127;
      v33 = -127;
      if ( v31 > -127 )
        v33 = v31;
      v34 = 127;
      if ( v26 < 127 )
        v34 = v26;
      if ( v34 > -127 )
        v32 = v34;
      v35 = 255;
      v36 = 1;
      if ( v27 < 255 )
        v35 = v27;
      if ( v35 > -255 )
        v36 = v35;
      ++v15;
      v16 += v17;
      v20 += v18;
      v19 += v18;
      *v12 = v33 | ((v32 | (v36 << 8)) << 8);
      v13 = v37;
      v12 += v17;
    }
    while ( v15 < *((_DWORD *)this + 34) );
  }
}

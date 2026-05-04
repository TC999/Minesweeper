void __fastcall D3DXTex::CCodec_A8L8::Encode(D3DXTex::CCodec_A8L8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  int v8; // edx
  __int128 v9; // xmm6
  int v10; // r12d
  __int128 v11; // xmm7
  _WORD *v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // ebp
  unsigned int v15; // ecx
  float *v16; // rax
  unsigned int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  int v27; // r12d
  int v28; // r13d
  __int64 v29; // rcx
  float v30; // xmm0_4
  int v31; // ecx
  __int16 v32; // ax
  int v33; // ecx
  __int16 v34; // ax
  __int16 v35; // [rsp+20h] [rbp-58h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = *((_DWORD *)this + 34);
  v9 = 0;
  v10 = v8 - 1;
  v11 = 0;
  v12 = (_WORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + 2 * (unsigned int)(v8 - 1) * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  if ( (a2 & 1) != 0 )
  {
    v14 = -1;
  }
  else
  {
    v10 = 0;
    v14 = 1;
  }
  v15 = 0;
  if ( v8 )
  {
    v16 = (float *)v4;
    do
    {
      ++v15;
      *v16 = (float)((float)(v16[1] * 0.71539998) + (float)(*v16 * 0.21250001)) + (float)(v16[2] * 0.072099999);
      v16 += 4;
    }
    while ( v15 < *((_DWORD *)this + 34) );
  }
  if ( *((_QWORD *)this + 15) )
    D3DXTex::CCodec::AddDiffusionError(this, v4);
  v17 = 0;
  v18 = v10;
  v19 = v14;
  if ( *((_DWORD *)this + 34) )
  {
    v20 = v10 - (__int64)v14 + 1;
    v21 = 16LL * v14;
    v22 = 16 * (v10 + 1LL);
    v23 = 16 * v20;
    do
    {
      v25 = v9;
      v26 = v11;
      v24 = v17 & 3;
      *(float *)&v25 = (float)(*(float *)&v9 + *(float *)((char *)v4 + v22 - 16)) * 255.0;
      *(float *)&v26 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v22 - 4)) * 255.0;
      v27 = (int)(float)(*(float *)&v25 + *(float *)(v13 + 4 * v24));
      v28 = (int)(float)(*(float *)&v26 + *(float *)(v13 + 4 * v24));
      if ( *((_QWORD *)this + 15) )
      {
        v9 = v25;
        v29 = 2 * (v18 + v19 + 1);
        v11 = v26;
        *(float *)(*((_QWORD *)this + 15) + v23) = (float)((float)((float)(*(float *)&v25 - (float)v27) / 255.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v23);
        *(float *)(*((_QWORD *)this + 15) + v22) = (float)((float)((float)(*(float *)&v25 - (float)v27) / 255.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v22);
        v30 = (float)(*(float *)&v25 - (float)v27) / 255.0;
        *(float *)&v9 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29) = (float)(v30 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v29);
        *(float *)&v11 = (float)(*(float *)&v26 - (float)v28) / 255.0;
        *(float *)(*((_QWORD *)this + 15) + v23 + 12) = (float)(*(float *)&v11 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v23 + 12);
        *(float *)(*((_QWORD *)this + 15) + v22 + 12) = (float)(*(float *)&v11 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v22 + 12);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 12) = (float)((float)((float)(*(float *)&v26 - (float)v28) / 255.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v18 + v19 + 1) + 12);
      }
      v31 = 255;
      if ( v27 < 255 )
        v31 = v27;
      v32 = 0;
      if ( v31 > 0 )
        v32 = v31;
      v35 = v32;
      v33 = 255;
      if ( v28 < 255 )
        v33 = v28;
      v34 = 0;
      if ( v33 > 0 )
        v34 = v33;
      ++v17;
      v18 += v19;
      v23 += v21;
      v22 += v21;
      *v12 = v35 | (v34 << 8);
      v12 += v19;
    }
    while ( v17 < *((_DWORD *)this + 34) );
  }
}

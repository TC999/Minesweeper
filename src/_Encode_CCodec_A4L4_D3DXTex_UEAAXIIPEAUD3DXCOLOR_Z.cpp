void __fastcall D3DXTex::CCodec_A4L4::Encode(D3DXTex::CCodec_A4L4 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  int v8; // edx
  __int128 v9; // xmm6
  int v10; // r12d
  __int128 v11; // xmm7
  _BYTE *v12; // rsi
  unsigned __int64 v13; // r14
  int v14; // ebp
  unsigned int v15; // ecx
  float *v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  int v26; // ebp
  int v27; // r12d
  __int64 v28; // rcx
  float v29; // xmm0_4
  int v30; // ecx
  char v31; // al
  int v32; // ecx
  char v33; // al
  char v34; // [rsp+20h] [rbp-48h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = *((_DWORD *)this + 34);
  v9 = 0;
  v10 = v8 - 1;
  v11 = 0;
  v12 = (_BYTE *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + (unsigned int)(v8 - 1) * (unsigned __int64)(a2 & 1));
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
    v20 = 16LL * v14;
    v21 = 16 * (v10 + 1LL);
    v22 = 16 * (v10 - (__int64)v14 + 1);
    do
    {
      v24 = v9;
      v25 = v11;
      v23 = v17 & 3;
      *(float *)&v24 = (float)(*(float *)&v9 + *(float *)((char *)v4 + v21 - 16)) * 15.0;
      *(float *)&v25 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v21 - 4)) * 15.0;
      v26 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v23));
      v27 = (int)(float)(*(float *)&v25 + *(float *)(v13 + 4 * v23));
      if ( *((_QWORD *)this + 15) )
      {
        v9 = v24;
        v28 = 2 * (v18 + v19 + 1);
        v11 = v25;
        *(float *)(*((_QWORD *)this + 15) + v22) = (float)((float)((float)(*(float *)&v24 - (float)v26) / 15.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v22);
        *(float *)(*((_QWORD *)this + 15) + v21) = (float)((float)((float)(*(float *)&v24 - (float)v26) / 15.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v21);
        v29 = (float)(*(float *)&v24 - (float)v26) / 15.0;
        *(float *)&v9 = v29 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28) = (float)(v29 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v28);
        *(float *)&v11 = (float)(*(float *)&v25 - (float)v27) / 15.0;
        *(float *)(*((_QWORD *)this + 15) + v22 + 12) = (float)(*(float *)&v11 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v22 + 12);
        *(float *)(*((_QWORD *)this + 15) + v21 + 12) = (float)(*(float *)&v11 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v21 + 12);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v28 + 12) = (float)((float)((float)(*(float *)&v25 - (float)v27) / 15.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v18 + v19 + 1) + 12);
      }
      v30 = 15;
      if ( v26 < 15 )
        v30 = v26;
      v31 = 0;
      if ( v30 > 0 )
        v31 = v30;
      v32 = 15;
      v34 = v31;
      if ( v27 < 15 )
        v32 = v27;
      v33 = 0;
      if ( v32 > 0 )
        v33 = v32;
      ++v17;
      v18 += v19;
      v22 += v20;
      v21 += v20;
      *v12 = v34 | (16 * v33);
      v12 += v19;
    }
    while ( v17 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_CxV8U8::Encode(D3DXTex::CCodec_CxV8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // ebp
  __int128 v10; // xmm8
  _WORD *v11; // r12
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // r11
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  int v19; // r8d
  int v20; // r9d
  float v21; // xmm0_4
  __int64 v22; // rcx
  int v23; // ecx
  char v24; // al
  int v25; // ecx
  __int16 v26; // ax
  unsigned __int64 v27; // [rsp+20h] [rbp-C8h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v29; // [rsp+30h] [rbp-B8h]
  __int64 v30; // [rsp+F0h] [rbp+8h]
  int v31; // [rsp+F8h] [rbp+10h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = (_WORD *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + 2 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v27 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  if ( (a2 & 1) != 0 )
  {
    v12 = -1;
  }
  else
  {
    v9 = 0;
    v12 = 1;
  }
  if ( *((_QWORD *)this + 15) )
    D3DXTex::CCodec::AddDiffusionError(this, v4);
  v31 = 0;
  v30 = v9;
  if ( *((_DWORD *)this + 34) )
  {
    v13 = 16 * (v9 + 1LL);
    v28 = 16LL * v12;
    v14 = 16 * (v9 - (__int64)v12 + 1);
    do
    {
      off_1000A66A8(
        (struct D3DXCOLOR *)((char *)v4 + 16 * (unsigned int)v9),
        (struct D3DXCOLOR *)((char *)v4 + 16 * (unsigned int)v9));
      v15 = v31;
      v17 = v8;
      v18 = v10;
      v16 = v31 & 3;
      *(float *)&v17 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v13 - 16)) * 127.0;
      *(float *)&v18 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v13 - 12)) * 127.0;
      v19 = (int)(float)(*(float *)&v17 + *(float *)(v27 + 4 * v16));
      v20 = (int)(float)(*(float *)&v18 + *(float *)(v27 + 4 * v16));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v17;
        v10 = v18;
        *(float *)(v14 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v17 - (float)v19) / 127.0) * 0.1875)
                                                 + *(float *)(v14 + *((_QWORD *)this + 15));
        *(float *)(v13 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v17 - (float)v19) / 127.0) * 0.3125)
                                                 + *(float *)(v13 + *((_QWORD *)this + 15));
        v21 = (float)(*(float *)&v17 - (float)v19) / 127.0;
        *(float *)&v8 = v21 * 0.4375;
        v22 = 2 * (v30 + v12 + 1);
        *(float *)(*((_QWORD *)this + 15) + 8 * v22) = (float)(v21 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v22);
        *(float *)&v10 = (float)(*(float *)&v18 - (float)v20) / 127.0;
        *(float *)(v14 + *((_QWORD *)this + 15) + 4) = (float)(*(float *)&v10 * 0.1875)
                                                     + *(float *)(v14 + *((_QWORD *)this + 15) + 4);
        *(float *)(v13 + *((_QWORD *)this + 15) + 4) = (float)(*(float *)&v10 * 0.3125)
                                                     + *(float *)(v13 + *((_QWORD *)this + 15) + 4);
        *(float *)&v10 = *(float *)&v10 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v22 + 4) = (float)((float)((float)(*(float *)&v18 - (float)v20) / 127.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v30 + v12 + 1) + 4);
      }
      v23 = 127;
      if ( v19 < 127 )
        v23 = v19;
      v24 = -127;
      if ( v23 > -127 )
        v24 = v23;
      v25 = 127;
      if ( v20 < 127 )
        v25 = v20;
      v29 = v24;
      v26 = -127;
      if ( v25 > -127 )
        v26 = v25;
      v30 += v12;
      v9 += v12;
      ++v31;
      *v11 = (v26 << 8) | v29;
      v11 += v12;
      v14 += v28;
      v13 += v28;
    }
    while ( (unsigned int)(v15 + 1) < *((_DWORD *)this + 34) );
  }
}

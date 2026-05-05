void __fastcall D3DXTex::CCodec_A8::Encode(D3DXTex::CCodec_A8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  char *v10; // rsi
  unsigned __int64 v11; // r15
  int v12; // ebp
  unsigned int v13; // r13d
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // r14
  __int64 v17; // r9
  __int128 v18; // xmm1
  int v19; // r12d
  int v20; // r8d
  char v21; // dl
  char v22; // cl

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = (char *)(*((_QWORD *)this + 5)
               + (unsigned int)(a3 * *((_DWORD *)this + 33))
               + (unsigned int)(a2 * *((_DWORD *)this + 32))
               + (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v11 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
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
  v13 = 0;
  v14 = v9;
  if ( *((_DWORD *)this + 34) )
  {
    v15 = 16 * (v9 + 1LL);
    v16 = 16LL * v12;
    v17 = 16 * (v9 - (__int64)v12 + 1);
    do
    {
      v18 = v8;
      *(float *)&v18 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v15 - 4)) * 255.0;
      v19 = (int)(float)(*(float *)&v18 + *(float *)(v11 + 4LL * (v13 & 3)));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v18;
        *(float *)&v8 = (float)(*(float *)&v18 - (float)v19) / 255.0;
        *(float *)(v17 + *((_QWORD *)this + 15) + 12) = (float)(*(float *)&v8 * 0.1875)
                                                      + *(float *)(v17 + *((_QWORD *)this + 15) + 12);
        *(float *)(v15 + *((_QWORD *)this + 15) + 12) = (float)(*(float *)&v8 * 0.3125)
                                                      + *(float *)(v15 + *((_QWORD *)this + 15) + 12);
        *(float *)&v8 = *(float *)&v8 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 16 * (v14 + v12) + 28) = (float)((float)((float)(*(float *)&v18 - (float)v19)
                                                                                   / 255.0)
                                                                           * 0.0625)
                                                                   + *(float *)(*((_QWORD *)this + 15)
                                                                              + 16 * (v14 + v12)
                                                                              + 28);
      }
      v20 = 255;
      v21 = -1;
      if ( v19 < 255 )
      {
        v20 = v19;
        v21 = v19;
      }
      v22 = 0;
      if ( v20 > 0 )
        v22 = v21;
      ++v13;
      v14 += v12;
      *v10 = v22;
      v10 += v12;
      v17 += v16;
      v15 += v16;
    }
    while ( v13 < *((_DWORD *)this + 34) );
  }
}

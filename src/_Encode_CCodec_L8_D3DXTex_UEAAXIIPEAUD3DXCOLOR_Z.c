void __fastcall D3DXTex::CCodec_L8::Encode(D3DXTex::CCodec_L8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  int v8; // edx
  __int128 v9; // xmm6
  int v10; // r12d
  char *v11; // rsi
  unsigned __int64 v12; // r15
  int v13; // ebp
  unsigned int v14; // ecx
  float *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r14
  __int64 v20; // r9
  __int128 v21; // xmm1
  int v22; // r12d
  int v23; // r8d
  char v24; // dl
  char v25; // cl

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = *((_DWORD *)this + 34);
  v9 = 0;
  v10 = v8 - 1;
  v11 = (char *)(*((_QWORD *)this + 5)
               + (unsigned int)(a3 * *((_DWORD *)this + 33))
               + (unsigned int)(a2 * *((_DWORD *)this + 32))
               + (unsigned int)(v8 - 1) * (unsigned __int64)(a2 & 1));
  v12 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  if ( (a2 & 1) != 0 )
  {
    v13 = -1;
  }
  else
  {
    v10 = 0;
    v13 = 1;
  }
  v14 = 0;
  if ( v8 )
  {
    v15 = (float *)v4;
    do
    {
      ++v14;
      *v15 = (float)((float)(v15[1] * 0.71539998) + (float)(*v15 * 0.21250001)) + (float)(v15[2] * 0.072099999);
      v15 += 4;
    }
    while ( v14 < *((_DWORD *)this + 34) );
  }
  if ( *((_QWORD *)this + 15) )
    D3DXTex::CCodec::AddDiffusionError(this, v4);
  v16 = 0;
  v17 = v10;
  if ( *((_DWORD *)this + 34) )
  {
    v18 = 16 * (v10 + 1LL);
    v19 = 16LL * v13;
    v20 = 16 * (v10 - (__int64)v13 + 1);
    do
    {
      v21 = v9;
      *(float *)&v21 = (float)(*(float *)&v9 + *(float *)((char *)v4 + v18 - 16)) * 255.0;
      v22 = (int)(float)(*(float *)&v21 + *(float *)(v12 + 4LL * (v16 & 3)));
      if ( *((_QWORD *)this + 15) )
      {
        v9 = v21;
        *(float *)&v9 = (float)(*(float *)&v21 - (float)v22) / 255.0;
        *(float *)(v20 + *((_QWORD *)this + 15)) = (float)(*(float *)&v9 * 0.1875)
                                                 + *(float *)(v20 + *((_QWORD *)this + 15));
        *(float *)(v18 + *((_QWORD *)this + 15)) = (float)(*(float *)&v9 * 0.3125)
                                                 + *(float *)(v18 + *((_QWORD *)this + 15));
        *(float *)&v9 = *(float *)&v9 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 16 * (v17 + v13 + 1)) = (float)((float)((float)(*(float *)&v21 - (float)v22)
                                                                                  / 255.0)
                                                                          * 0.0625)
                                                                  + *(float *)(*((_QWORD *)this + 15)
                                                                             + 16 * (v17 + v13 + 1));
      }
      v23 = 255;
      v24 = -1;
      if ( v22 < 255 )
      {
        v23 = v22;
        v24 = v22;
      }
      v25 = 0;
      if ( v23 > 0 )
        v25 = v24;
      ++v16;
      v17 += v13;
      *v11 = v25;
      v11 += v13;
      v20 += v19;
      v18 += v19;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

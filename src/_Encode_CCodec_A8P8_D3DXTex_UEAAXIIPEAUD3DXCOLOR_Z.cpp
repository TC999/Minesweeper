void __fastcall D3DXTex::CCodec_A8P8::Encode(float **this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // ebp
  _WORD *v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // esi
  unsigned int v13; // r13d
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // r14
  float *v18; // r9
  float v19; // xmm3_4
  float *v20; // rcx
  __int16 v21; // di
  unsigned int i; // eax
  __int128 v23; // xmm1
  int v24; // r10d
  int v25; // edx
  __int16 v26; // ax
  __int16 v27; // cx
  bool v28; // cc
  unsigned __int64 v29; // [rsp+70h] [rbp+8h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert((D3DXTex::CCodec *)this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22((D3DXTex::CCodec *)this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = (_WORD *)((char *)this[5]
                + 2 * (unsigned int)v9 * (unsigned __int64)(a2 & 1)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32)));
  v11 = (unsigned __int64)&this[8][(a3 & 3) + (unsigned __int64)(8 * (a2 & 3u))];
  v29 = v11;
  if ( (a2 & 1) != 0 )
  {
    v12 = -1;
  }
  else
  {
    v9 = 0;
    v12 = 1;
  }
  if ( this[15] )
  {
    D3DXTex::CCodec::AddDiffusionError((D3DXTex::CCodec *)this, v4);
    v11 = v29;
  }
  v13 = 0;
  v14 = v9;
  if ( *((_DWORD *)this + 34) )
  {
    v15 = 16 * (v9 - (__int64)v12 + 1);
    v16 = 16LL * v12;
    v17 = 8LL - (_QWORD)v4;
    v18 = (float *)((char *)v4 + 16 * v14 + 8);
    do
    {
      v19 = FLOAT_3_4028235e38;
      v20 = this[9];
      v21 = 0;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( v19 > (float)((float)((float)((float)(*(v18 - 1) - v20[1]) * (float)(*(v18 - 1) - v20[1]))
                                 + (float)((float)(*(v18 - 2) - *v20) * (float)(*(v18 - 2) - *v20)))
                         + (float)((float)(*v18 - v20[2]) * (float)(*v18 - v20[2]))) )
        {
          v21 = i;
          v19 = (float)((float)((float)(*(v18 - 1) - v20[1]) * (float)(*(v18 - 1) - v20[1]))
                      + (float)((float)(*(v18 - 2) - *v20) * (float)(*(v18 - 2) - *v20)))
              + (float)((float)(*v18 - v20[2]) * (float)(*v18 - v20[2]));
        }
        v20 += 4;
      }
      v23 = v8;
      *(float *)&v23 = (float)(*(float *)&v8 + v18[1]) * 255.0;
      v24 = (int)(float)(*(float *)&v23 + *(float *)(v11 + 4LL * (v13 & 3)));
      if ( this[15] )
      {
        v8 = v23;
        *(float *)&v8 = (float)(*(float *)&v23 - (float)v24) / 255.0;
        *(float *)((char *)this[15] + v15 + 12) = (float)(*(float *)&v8 * 0.1875)
                                                + *(float *)((char *)this[15] + v15 + 12);
        *(float *)((char *)v18 + (_QWORD)this[15] + v17 + 12) = (float)(*(float *)&v8 * 0.3125)
                                                              + *(float *)((char *)v18 + (_QWORD)this[15] + v17 + 12);
        *(float *)&v8 = *(float *)&v8 * 0.4375;
        this[15][4 * v14 + 7 + 4 * v12] = (float)((float)((float)(*(float *)&v23 - (float)v24) / 255.0) * 0.0625)
                                        + this[15][4 * v14 + 7 + 4 * v12];
      }
      v25 = 255;
      v26 = 255;
      if ( v24 < 255 )
      {
        v25 = v24;
        v26 = v24;
      }
      v27 = 0;
      v28 = v25 <= 0;
      v11 = v29;
      if ( !v28 )
        v27 = v26;
      ++v13;
      v14 += v12;
      v18 = (float *)((char *)v18 + v16);
      v15 += v16;
      *v10 = v21 | (v27 << 8);
      v10 += v12;
    }
    while ( v13 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_D16_LOCKABLE::Encode(
        D3DXTex::CCodec_D16_LOCKABLE *this,
        int a2,
        int a3,
        struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  int v8; // edx
  __int128 v9; // xmm6
  int v10; // r13d
  __int16 *v11; // rbp
  unsigned __int64 v12; // r15
  int v13; // esi
  unsigned int v14; // ecx
  float *v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r8
  __int128 v23; // xmm1
  int v24; // esi
  int v25; // edx
  __int16 v26; // cx
  __int16 v27; // ax

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = *((_DWORD *)this + 34);
  v9 = 0;
  v10 = v8 - 1;
  v11 = (__int16 *)(*((_QWORD *)this + 5)
                  + (unsigned int)(a3 * *((_DWORD *)this + 33))
                  + (unsigned int)(a2 * *((_DWORD *)this + 32))
                  + 2 * (unsigned int)(v8 - 1) * (unsigned __int64)(a2 & 1));
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
  v18 = v13;
  if ( *((_DWORD *)this + 34) )
  {
    v19 = 16 * (v10 + 1LL);
    v20 = v10 - (__int64)v13 + 1;
    v21 = 16LL * v13;
    v22 = 16 * v20;
    do
    {
      v23 = v9;
      *(float *)&v23 = (float)(*(float *)&v9 + *(float *)((char *)v4 + v19 - 16)) * 65535.0;
      v24 = (int)(float)(*(float *)&v23 + *(float *)(v12 + 4LL * (v16 & 3)));
      if ( *((_QWORD *)this + 15) )
      {
        v9 = v23;
        *(float *)&v9 = (float)(*(float *)&v23 - (float)v24) / 65535.0;
        *(float *)(v22 + *((_QWORD *)this + 15)) = (float)(*(float *)&v9 * 0.1875)
                                                 + *(float *)(v22 + *((_QWORD *)this + 15));
        *(float *)(v19 + *((_QWORD *)this + 15)) = (float)(*(float *)&v9 * 0.3125)
                                                 + *(float *)(v19 + *((_QWORD *)this + 15));
        *(float *)&v9 = *(float *)&v9 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 16 * (v17 + v18 + 1)) = (float)((float)((float)(*(float *)&v23 - (float)v24)
                                                                                  / 65535.0)
                                                                          * 0.0625)
                                                                  + *(float *)(*((_QWORD *)this + 15)
                                                                             + 16 * (v17 + v18 + 1));
      }
      v25 = 0xFFFF;
      v26 = -1;
      if ( v24 < 0xFFFF )
      {
        v25 = v24;
        v26 = v24;
      }
      v27 = 0;
      if ( v25 > 0 )
        v27 = v26;
      ++v16;
      v17 += v18;
      *v11 = v27;
      v11 += v18;
      v22 += v21;
      v19 += v21;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

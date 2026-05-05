void __fastcall D3DXTex::CCodec_R8G8B8::Encode(D3DXTex::CCodec_R8G8B8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm7
  __int128 v11; // xmm8
  _BYTE *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // r9
  unsigned int v16; // r11d
  __int64 v17; // r12
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  int v26; // ebp
  int v27; // r13d
  int v28; // r14d
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // ecx
  char v33; // al
  int v34; // ecx
  char v35; // al
  int v36; // ecx
  char v37; // al
  char v38; // [rsp+20h] [rbp-68h]
  char v39; // [rsp+24h] [rbp-64h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = (_BYTE *)(*((_QWORD *)this + 5)
                + (unsigned int)(a3 * *((_DWORD *)this + 33))
                + (unsigned int)(a2 * *((_DWORD *)this + 32))
                + 3 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v13 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v40 = v13;
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
    v13 = v40;
  }
  v15 = v9;
  v16 = 0;
  v17 = v14;
  if ( *((_DWORD *)this + 34) )
  {
    v18 = 16LL * v14;
    v19 = 16 * (v15 + 1);
    v20 = 16 * (v15 - v14 + 1);
    v21 = 3 * v14;
    do
    {
      v23 = v8;
      v24 = v10;
      v22 = v16 & 3;
      v25 = v11;
      *(float *)&v23 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v19 - 16)) * 255.0;
      *(float *)&v24 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v19 - 12)) * 255.0;
      *(float *)&v25 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v19 - 8)) * 255.0;
      v26 = (int)(float)(*(float *)&v23 + *(float *)(v13 + 4 * v22));
      v27 = (int)(float)(*(float *)&v24 + *(float *)(v13 + 4 * v22));
      v28 = (int)(float)(*(float *)&v25 + *(float *)(v13 + 4 * v22));
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v23;
        v29 = 2 * (v15 + v17 + 1);
        v10 = v24;
        v11 = v25;
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 255.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        *(float *)(v19 + *((_QWORD *)this + 15)) = (float)((float)((float)(*(float *)&v23 - (float)v26) / 255.0) * 0.3125)
                                                 + *(float *)(v19 + *((_QWORD *)this + 15));
        v30 = (float)(*(float *)&v23 - (float)v26) / 255.0;
        *(float *)&v8 = v30 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29) = (float)(v30 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v29);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 255.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        *(float *)(v19 + *((_QWORD *)this + 15) + 4) = (float)((float)((float)(*(float *)&v24 - (float)v27) / 255.0)
                                                             * 0.3125)
                                                     + *(float *)(v19 + *((_QWORD *)this + 15) + 4);
        v31 = (float)(*(float *)&v24 - (float)v27) / 255.0;
        *(float *)&v10 = v31 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 4) = (float)(v31 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 4);
        *(float *)&v11 = (float)(*(float *)&v25 - (float)v28) / 255.0;
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)(*(float *)&v11 * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        *(float *)(v19 + *((_QWORD *)this + 15) + 8) = (float)(*(float *)&v11 * 0.3125)
                                                     + *(float *)(v19 + *((_QWORD *)this + 15) + 8);
        *(float *)&v11 = *(float *)&v11 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v29 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v28) / 255.0)
                                                                 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 16 * (v15 + v17 + 1) + 8);
      }
      v32 = 255;
      if ( v26 < 255 )
        v32 = v26;
      v33 = 0;
      if ( v32 > 0 )
        v33 = v32;
      v34 = 255;
      if ( v27 < 255 )
        v34 = v27;
      v38 = v33;
      v35 = 0;
      if ( v34 > 0 )
        v35 = v34;
      v36 = 255;
      if ( v28 < 255 )
        v36 = v28;
      v39 = v35;
      v37 = 0;
      if ( v36 > 0 )
        v37 = v36;
      v13 = v40;
      ++v16;
      *v12 = v37;
      v12[1] = v39;
      v15 += v17;
      v12[2] = v38;
      v20 += v18;
      v19 += v18;
      v12 += v21;
    }
    while ( v16 < *((_DWORD *)this + 34) );
  }
}

void __fastcall D3DXTex::CCodec_Q8W8V8U8::Encode(D3DXTex::CCodec_Q8W8V8U8 *this, int a2, int a3, struct D3DXCOLOR *a4)
{
  struct D3DXCOLOR *v4; // rdi
  __int128 v8; // xmm6
  int v9; // r12d
  __int128 v10; // xmm9
  __int128 v11; // xmm10
  __int128 v12; // xmm11
  int *v13; // rbp
  unsigned __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r13
  unsigned int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r11
  __int128 v22; // xmm3
  __int128 v23; // xmm4
  float v24; // xmm2_4
  __int128 v25; // xmm5
  __int128 v26; // xmm7
  int v27; // edx
  int v28; // r8d
  int v29; // ecx
  __int64 v30; // rcx
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  int v34; // eax
  unsigned __int8 v35; // r10
  int v36; // eax
  int v37; // r8d
  unsigned __int8 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // cl
  int v41; // eax
  int v42; // edx
  unsigned __int64 v43; // [rsp+100h] [rbp+8h]
  int v44; // [rsp+108h] [rbp+10h]

  v4 = a4;
  if ( *((_DWORD *)this + 26) )
    v4 = D3DXTex::CCodec::Convert(this, a4);
  if ( *((_DWORD *)this + 5) )
    v4 = D3DXTex::CCodec::EncodeGamma22(this, v4);
  v8 = 0;
  v9 = *((_DWORD *)this + 34) - 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = (int *)(*((_QWORD *)this + 5)
              + (unsigned int)(a3 * *((_DWORD *)this + 33))
              + (unsigned int)(a2 * *((_DWORD *)this + 32))
              + 4 * (unsigned int)v9 * (unsigned __int64)(a2 & 1));
  v14 = *((_QWORD *)this + 8) + 4 * ((a3 & 3) + (unsigned __int64)(8 * (a2 & 3u)));
  v43 = v14;
  if ( (a2 & 1) != 0 )
  {
    v15 = -1;
  }
  else
  {
    v9 = 0;
    v15 = 1;
  }
  if ( *((_QWORD *)this + 15) )
  {
    D3DXTex::CCodec::AddDiffusionError(this, v4);
    v14 = v43;
  }
  v16 = v9;
  v17 = 0;
  v18 = v15;
  if ( *((_DWORD *)this + 34) )
  {
    v19 = 16LL * v15;
    v20 = 16 * (v16 + 1);
    v21 = 16 * (v16 - v18 + 1);
    do
    {
      v22 = v8;
      v23 = v10;
      v25 = v11;
      v26 = v12;
      *(float *)&v22 = (float)(*(float *)&v8 + *(float *)((char *)v4 + v20 - 16)) * 127.0;
      *(float *)&v23 = (float)(*(float *)&v10 + *(float *)((char *)v4 + v20 - 12)) * 127.0;
      v24 = *(float *)(v14 + 4LL * (v17 & 3));
      *(float *)&v25 = (float)(*(float *)&v11 + *(float *)((char *)v4 + v20 - 8)) * 127.0;
      *(float *)&v26 = (float)(*(float *)&v12 + *(float *)((char *)v4 + v20 - 4)) * 127.0;
      v27 = (int)(float)(*(float *)&v22 + v24);
      v28 = (int)(float)(*(float *)&v23 + v24);
      v29 = (int)(float)(*(float *)&v25 + v24);
      v44 = v29;
      if ( *((_QWORD *)this + 15) )
      {
        v8 = v22;
        v30 = 2 * (v16 + v18 + 1);
        v10 = v23;
        v11 = v25;
        v12 = v26;
        *(float *)(*((_QWORD *)this + 15) + v21) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 127.0) * 0.1875)
                                                 + *(float *)(*((_QWORD *)this + 15) + v21);
        *(float *)(*((_QWORD *)this + 15) + v20) = (float)((float)((float)(*(float *)&v22 - (float)v27) / 127.0) * 0.3125)
                                                 + *(float *)(*((_QWORD *)this + 15) + v20);
        v31 = (float)(*(float *)&v22 - (float)v27) / 127.0;
        *(float *)&v8 = v31 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30) = (float)(v31 * 0.0625)
                                                     + *(float *)(*((_QWORD *)this + 15) + 8 * v30);
        *(float *)(*((_QWORD *)this + 15) + v21 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 127.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 4);
        *(float *)(*((_QWORD *)this + 15) + v20 + 4) = (float)((float)((float)(*(float *)&v23 - (float)v28) / 127.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 4);
        v32 = (float)(*(float *)&v23 - (float)v28) / 127.0;
        *(float *)&v10 = v32 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 4) = (float)(v32 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 4);
        *(float *)(*((_QWORD *)this + 15) + v21 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v44) / 127.0)
                                                             * 0.1875)
                                                     + *(float *)(*((_QWORD *)this + 15) + v21 + 8);
        *(float *)(*((_QWORD *)this + 15) + v20 + 8) = (float)((float)((float)(*(float *)&v25 - (float)v44) / 127.0)
                                                             * 0.3125)
                                                     + *(float *)(*((_QWORD *)this + 15) + v20 + 8);
        v33 = (float)(*(float *)&v25 - (float)v44) / 127.0;
        *(float *)&v11 = v33 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 8) = (float)(v33 * 0.0625)
                                                         + *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 8);
        *(float *)&v12 = (float)(*(float *)&v26 - (float)(int)(float)(*(float *)&v26 + v24)) / 127.0;
        *(float *)(*((_QWORD *)this + 15) + v21 + 12) = (float)(*(float *)&v12 * 0.1875)
                                                      + *(float *)(*((_QWORD *)this + 15) + v21 + 12);
        *(float *)(*((_QWORD *)this + 15) + v20 + 12) = (float)(*(float *)&v12 * 0.3125)
                                                      + *(float *)(*((_QWORD *)this + 15) + v20 + 12);
        *(float *)&v12 = *(float *)&v12 * 0.4375;
        *(float *)(*((_QWORD *)this + 15) + 8 * v30 + 12) = (float)((float)((float)(*(float *)&v26
                                                                                  - (float)(int)(float)(*(float *)&v26 + v24))
                                                                          / 127.0)
                                                                  * 0.0625)
                                                          + *(float *)(*((_QWORD *)this + 15) + 16 * (v16 + v18 + 1) + 12);
        v29 = (int)(float)(*(float *)&v25 + v24);
      }
      v34 = 127;
      v35 = -127;
      if ( v27 < 127 )
        v34 = (int)(float)(*(float *)&v22 + v24);
      if ( v34 > -127 )
        v35 = v34;
      v36 = 127;
      if ( v28 < 127 )
        v36 = (int)(float)(*(float *)&v23 + v24);
      v37 = -127;
      v38 = -127;
      if ( v36 > -127 )
        v38 = v36;
      v39 = 127;
      if ( v29 < 127 )
        v39 = v29;
      v40 = -127;
      if ( v39 > -127 )
        v40 = v39;
      v41 = 127;
      if ( (int)(float)(*(float *)&v26 + v24) < 127 )
        v41 = (int)(float)(*(float *)&v26 + v24);
      v42 = v40;
      v14 = v43;
      if ( v41 > -127 )
        v37 = v41;
      ++v17;
      v16 += v18;
      v21 += v19;
      v20 += v19;
      *v13 = v35 | (v37 << 24) | ((v38 | (v42 << 8)) << 8);
      v13 += v18;
    }
    while ( v17 < *((_DWORD *)this + 34) );
  }
}

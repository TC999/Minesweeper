struct D3DXCOLOR *__fastcall D3DXTex::CCodec::EncodeGamma22(D3DXTex::CCodec *this, struct D3DXCOLOR *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  char *v5; // rbp
  float v6; // xmm0_4
  __int64 v7; // rsi
  float *v8; // rbp
  float v9; // xmm0_4
  __int64 v10; // rsi
  char *v11; // rbp
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // rsi
  float *v15; // rbp
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4

  v2 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 3) == 1 || *((_DWORD *)this + 3) == 4 )
    {
      if ( *((_DWORD *)this + 34) )
      {
        v7 = 0;
        v8 = (float *)((char *)a2 + 8);
        do
        {
          *(float *)(v7 + *((_QWORD *)this + 14)) = sqrtf(*(v8 - 2));
          *(float *)(v7 + *((_QWORD *)this + 14) + 4) = sqrtf(*(v8 - 1));
          v9 = sqrtf(*v8);
          ++v2;
          v7 += 16;
          v8 += 4;
          *(float *)(v7 + *((_QWORD *)this + 14) - 8) = v9;
          *(float *)(v7 + *((_QWORD *)this + 14) - 4) = *(v8 - 3);
        }
        while ( v2 < *((_DWORD *)this + 34) );
      }
    }
    else if ( *((_DWORD *)this + 34) )
    {
      v4 = 0;
      v5 = (char *)a2 + 8;
      do
      {
        *(_DWORD *)(v4 + *((_QWORD *)this + 14)) = *((_DWORD *)v5 - 2);
        *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 4) = *((_DWORD *)v5 - 1);
        *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 8) = *(_DWORD *)v5;
        v6 = sqrtf(*((float *)v5 + 1));
        ++v2;
        v4 += 16;
        v5 += 16;
        *(float *)(v4 + *((_QWORD *)this + 14) - 4) = v6;
      }
      while ( v2 < *((_DWORD *)this + 34) );
    }
  }
  else if ( *((_DWORD *)this + 3) == 1 || *((_DWORD *)this + 3) == 4 )
  {
    if ( *((_DWORD *)this + 34) )
    {
      v14 = 0;
      v15 = (float *)((char *)a2 + 8);
      do
      {
        v16 = sqrtf(*(v15 - 2)) * 254.0;
        *(float *)(v14 + *((_QWORD *)this + 14)) = (float)((float)(*(float *)&dword_100011410[(int)v16 + 1]
                                                                 - *(float *)&dword_100011410[v16])
                                                         * (float)(v16 - (float)(int)v16))
                                                 + *(float *)&dword_100011410[v16];
        v17 = sqrtf(*(v15 - 1)) * 254.0;
        *(float *)(v14 + *((_QWORD *)this + 14) + 4) = (float)((float)(*(float *)&dword_100011410[(int)v17 + 1]
                                                                     - *(float *)&dword_100011410[v17])
                                                             * (float)(v17 - (float)(int)v17))
                                                     + *(float *)&dword_100011410[v17];
        v18 = sqrtf(*v15);
        ++v2;
        v14 += 16;
        v15 += 4;
        v19 = v18 * 254.0;
        *(float *)(v14 + *((_QWORD *)this + 14) - 8) = (float)((float)(*(float *)&dword_100011410[(int)v19 + 1]
                                                                     - *(float *)&dword_100011410[v19])
                                                             * (float)(v19 - (float)(int)v19))
                                                     + *(float *)&dword_100011410[v19];
        *(float *)(v14 + *((_QWORD *)this + 14) - 4) = *(v15 - 3);
      }
      while ( v2 < *((_DWORD *)this + 34) );
    }
  }
  else if ( *((_DWORD *)this + 34) )
  {
    v10 = 0;
    v11 = (char *)a2 + 8;
    do
    {
      *(_DWORD *)(v10 + *((_QWORD *)this + 14)) = *((_DWORD *)v11 - 2);
      *(_DWORD *)(v10 + *((_QWORD *)this + 14) + 4) = *((_DWORD *)v11 - 1);
      *(_DWORD *)(v10 + *((_QWORD *)this + 14) + 8) = *(_DWORD *)v11;
      v12 = sqrtf(*((float *)v11 + 1));
      ++v2;
      v10 += 16;
      v11 += 16;
      v13 = v12 * 254.0;
      *(float *)(v10 + *((_QWORD *)this + 14) - 4) = (float)((float)(*(float *)&dword_100011410[(int)v13 + 1]
                                                                   - *(float *)&dword_100011410[v13])
                                                           * (float)(v13 - (float)(int)v13))
                                                   + *(float *)&dword_100011410[v13];
    }
    while ( v2 < *((_DWORD *)this + 34) );
  }
  return (struct D3DXCOLOR *)*((_QWORD *)this + 14);
}

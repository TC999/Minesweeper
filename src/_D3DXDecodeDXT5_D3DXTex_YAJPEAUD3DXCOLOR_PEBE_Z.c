__int64 __fastcall D3DXTex::D3DXDecodeDXT5(__m128i *this, struct D3DXCOLOR *a2, const unsigned __int8 *a3)
{
  __int64 result; // rax
  unsigned __int8 *v5; // r9
  unsigned int v6; // ecx
  bool v7; // cc
  float *v8; // rdx
  __m128i v9; // xmm2
  unsigned int v10; // ecx
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  int v14; // eax
  float v15; // xmm1_4
  int v16; // eax
  __int64 v17; // r8
  __int32 *v18; // rdx
  __int64 v19; // r10
  unsigned int v20; // ecx
  char v21; // al
  __int32 *v22; // rdx
  unsigned int v23; // ecx
  char v24; // al
  float v25; // [rsp+20h] [rbp-28h]
  float v26; // [rsp+24h] [rbp-24h]
  char v27; // [rsp+28h] [rbp-20h] BYREF
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+3Ch] [rbp-Ch]

  result = D3DXTex::D3DXDecodeDXT1(this, (struct D3DXCOLOR *)((char *)a2 + 8), a3);
  if ( (int)result >= 0 )
  {
    v6 = *v5;
    v7 = (unsigned __int8)v6 <= v5[1];
    v8 = (float *)&v27;
    v9 = _mm_cvtsi32_si128(v6);
    v10 = 1;
    v11 = _mm_cvtepi32_ps(v9).m128_f32[0] * 0.0039215689;
    v12 = (float)v5[1] * 0.0039215689;
    v25 = v11;
    v26 = v12;
    if ( v7 )
    {
      while ( 1 )
      {
        v15 = (float)(int)(5 - v10);
        v16 = v10++;
        *v8++ = (float)((float)(v15 * v11) + (float)((float)v16 * v12)) * 0.2;
        if ( v10 >= 5 )
          break;
        v12 = v26;
        v11 = v25;
      }
      v28 = 0;
      v29 = 1065353216;
    }
    else
    {
      while ( 1 )
      {
        v13 = (float)(int)(7 - v10);
        v14 = v10++;
        *v8++ = (float)((float)(v13 * v11) + (float)((float)v14 * v12)) * 0.14285715;
        if ( v10 >= 7 )
          break;
        v12 = v26;
        v11 = v25;
      }
    }
    v17 = 8;
    v18 = &this->m128i_i32[3];
    v19 = 8;
    v20 = v5[2] | (*(unsigned __int16 *)(v5 + 3) << 8);
    do
    {
      v21 = v20;
      v20 >>= 3;
      *v18 = *((_DWORD *)&v25 + (v21 & 7));
      v18 += 4;
      --v19;
    }
    while ( v19 );
    v22 = &this[8].m128i_i32[3];
    v23 = v5[5] | (*((unsigned __int16 *)v5 + 3) << 8);
    do
    {
      v24 = v23;
      v23 >>= 3;
      *v22 = *((_DWORD *)&v25 + (v24 & 7));
      v22 += 4;
      --v17;
    }
    while ( v17 );
    return 0;
  }
  return result;
}

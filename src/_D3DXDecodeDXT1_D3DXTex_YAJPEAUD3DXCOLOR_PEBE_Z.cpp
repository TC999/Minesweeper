__int64 __fastcall D3DXTex::D3DXDecodeDXT1(__m128i *this, struct D3DXCOLOR *a2, const unsigned __int8 *a3)
{
  unsigned __int16 v4; // cx
  __m128i v5; // xmm7
  int v6; // eax
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  unsigned int v13; // ecx
  __int64 v14; // rdx
  char v15; // al
  __m128i v17; // [rsp+0h] [rbp-98h] BYREF
  _DWORD v18[4]; // [rsp+10h] [rbp-88h] BYREF
  float v19; // [rsp+20h] [rbp-78h]
  float v20; // [rsp+24h] [rbp-74h]
  float v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+2Ch] [rbp-6Ch]
  float v23; // [rsp+30h] [rbp-68h]
  float v24; // [rsp+34h] [rbp-64h]
  float v25; // [rsp+38h] [rbp-60h]
  float v26; // [rsp+3Ch] [rbp-5Ch]
  __m128i v27; // [rsp+40h] [rbp-58h]

  v4 = *((_WORD *)a2 + 1);
  v5 = _mm_cvtsi32_si128((*(_WORD *)a2 >> 5) & 0x3F);
  v6 = *(_WORD *)a2 & 0x1F;
  v7 = (float)(*(_WORD *)a2 >> 11) * 0.032258064;
  *(float *)v18 = v7;
  v8 = _mm_cvtepi32_ps(v5).m128_f32[0] * 0.015873017;
  *(float *)&v18[1] = v8;
  v18[3] = 1065353216;
  v9 = (float)v6 * 0.032258064;
  *(float *)&v18[2] = v9;
  v19 = (float)(v4 >> 11) * 0.032258064;
  v10 = v19 - v7;
  v20 = (float)((v4 >> 5) & 0x3F) * 0.015873017;
  v11 = v20 - v8;
  v21 = (float)(v4 & 0x1F) * 0.032258064;
  v22 = 1065353216;
  v12 = v21 - v9;
  if ( *(_WORD *)a2 > v4 )
  {
    v23 = (float)(v10 * 0.33333334) + v7;
    v24 = (float)(v11 * 0.33333334) + v8;
    v25 = (float)(v12 * 0.33333334) + v9;
    v26 = (float)(0.33333334 * 0.0) + 1.0;
    *(float *)v27.m128i_i32 = (float)(v10 * 0.66666669) + v7;
    *(float *)&v27.m128i_i32[1] = (float)(v11 * 0.66666669) + v8;
    *(float *)&v27.m128i_i32[3] = (float)(0.66666669 * 0.0) + 1.0;
    *(float *)&v27.m128i_i32[2] = (float)(v12 * 0.66666669) + v9;
  }
  else
  {
    v17 = 0u;
    v26 = (float)(0.0 * 0.5) + 1.0;
    v23 = (float)(v10 * 0.5) + v7;
    v27 = _mm_loadu_si128(&v17);
    v24 = (float)(v11 * 0.5) + v8;
    v25 = (float)(v12 * 0.5) + v9;
  }
  v13 = *((_DWORD *)a2 + 1);
  v14 = 16;
  do
  {
    v15 = v13;
    v13 >>= 2;
    *this++ = _mm_loadu_si128((const __m128i *)&v18[4 * (v15 & 3)]);
    --v14;
  }
  while ( v14 );
  return 0;
}

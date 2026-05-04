__int64 __fastcall D3DXTex::DecodePremult(__int64 a1)
{
  __int64 result; // rax
  float v2; // xmm0_4
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm1_4

  result = 16;
  do
  {
    v2 = *(float *)(a1 + 12);
    if ( v2 == 0.0 )
    {
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    else if ( v2 < 1.0 )
    {
      v3 = 1.0 / v2;
      if ( v2 <= *(float *)a1 )
        v4 = 1.0;
      else
        v4 = *(float *)a1 * v3;
      v5 = *(float *)(a1 + 4);
      *(float *)a1 = v4;
      if ( v2 <= v5 )
        v6 = 1.0;
      else
        v6 = v5 * v3;
      v7 = *(float *)(a1 + 8);
      *(float *)(a1 + 4) = v6;
      if ( v2 <= v7 )
        v8 = 1.0;
      else
        v8 = v7 * v3;
      *(float *)(a1 + 8) = v8;
    }
    a1 += 16;
    --result;
  }
  while ( result );
  return result;
}

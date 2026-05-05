__int16 __fastcall D3DXTex::Encode565(float *a1)
{
  float v1; // xmm4_4
  float v2; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm1_4

  v1 = *a1;
  v2 = 0.0;
  if ( *a1 >= 0.0 )
  {
    if ( v1 > 1.0 )
      v1 = 1.0;
  }
  else
  {
    v1 = 0.0;
  }
  v3 = a1[1];
  if ( v3 >= 0.0 )
  {
    if ( v3 > 1.0 )
      v3 = 1.0;
  }
  else
  {
    v3 = 0.0;
  }
  v4 = a1[2];
  if ( v4 >= 0.0 )
  {
    if ( v4 <= 1.0 )
      v2 = a1[2];
    else
      v2 = 1.0;
  }
  return (int)(float)((float)(v2 * 31.0) + 0.5)
       | (32 * ((int)(float)((float)(v3 * 63.0) + 0.5) | ((unsigned __int16)(int)(float)((float)(v1 * 31.0) + 0.5) << 6)));
}

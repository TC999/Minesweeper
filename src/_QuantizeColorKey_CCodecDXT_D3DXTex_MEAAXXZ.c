void __fastcall D3DXTex::CCodecDXT::QuantizeColorKey(D3DXTex::CCodecDXT *this)
{
  float v1; // xmm6_4
  float v2; // xmm5_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  int v6; // eax
  float v7; // xmm1_4

  if ( *((_DWORD *)this + 2) == 844388420 || *((_DWORD *)this + 2) == 861165636 )
    v1 = FLOAT_15_0;
  else
    v1 = FLOAT_255_0;
  v2 = 1.0 / v1;
  v3 = (float)(*((float *)this + 12) * 31.0) + 0.5;
  v4 = (float)(*((float *)this + 13) * 63.0) + 0.5;
  *((float *)this + 40) = v1;
  *((float *)this + 41) = 1.0 / v1;
  v5 = (float)(v1 * *((float *)this + 15)) + 0.5;
  v6 = (int)v4;
  v7 = (float)(*((float *)this + 14) * 31.0) + 0.5;
  *((float *)this + 12) = (float)(int)v3 * 0.032258064;
  *((float *)this + 13) = (float)v6 * 0.015873017;
  *((float *)this + 14) = (float)(int)v7 * 0.032258064;
  *((float *)this + 15) = (float)(int)v5 * v2;
}

__int64 __fastcall Audio::GetEffectBufferVolume(Audio *this, int a2)
{
  __m128 v2; // xmm0
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm6_4

  v2 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 2));
  v3 = FLOAT_N10000_0;
  v2.m128_f32[0] = (float)((float)(v2.m128_f32[0] / 100.0) * (float)((float)*(int *)this / 100.0))
                 * (float)((float)a2 / 100.0);
  v4 = _mm_unpacklo_ps(v2, v2).m128_f32[0];
  if ( v4 > 0.001 )
  {
    v5 = logf(v4);
    v3 = (float)(v5 * 300.0) / logf(2.0);
  }
  return (unsigned int)(int)v3;
}

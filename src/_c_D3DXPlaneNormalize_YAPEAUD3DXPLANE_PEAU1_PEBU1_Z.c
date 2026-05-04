struct D3DXPLANE *__fastcall c_D3DXPlaneNormalize(struct D3DXPLANE *a1, const struct D3DXPLANE *a2)
{
  float v4; // xmm7_4
  float v5; // xmm2_4
  float v6; // xmm6_4

  v4 = *(float *)a2;
  v5 = (float)((float)(v4 * v4) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
     + (float)(*((float *)a2 + 2) * *((float *)a2 + 2));
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
  {
    if ( v5 <= 1.1754944e-38 )
    {
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = 0;
      *((_DWORD *)a1 + 2) = 0;
      *((_DWORD *)a1 + 3) = 0;
    }
    else
    {
      v6 = 1.0 / sqrtf(v5);
      *(float *)a1 = v4 * v6;
      *((float *)a1 + 1) = v6 * *((float *)a2 + 1);
      *((float *)a1 + 2) = v6 * *((float *)a2 + 2);
      *((float *)a1 + 3) = v6 * *((float *)a2 + 3);
    }
  }
  else if ( a1 != a2 )
  {
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  }
  return a1;
}

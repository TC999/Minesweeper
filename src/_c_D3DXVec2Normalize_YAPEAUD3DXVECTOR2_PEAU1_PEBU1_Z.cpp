struct D3DXVECTOR2 *__fastcall c_D3DXVec2Normalize(struct D3DXVECTOR2 *a1, const struct D3DXVECTOR2 *a2)
{
  float v4; // xmm7_4
  float v5; // xmm1_4
  float v6; // xmm6_4

  v4 = *(float *)a2;
  v5 = (float)(v4 * v4) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1));
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
  {
    if ( v5 <= 1.1754944e-38 )
    {
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = 0;
    }
    else
    {
      v6 = 1.0 / sqrtf(v5);
      *(_QWORD *)a1 = __PAIR64__(v6 * *((float *)a2 + 1), v4 * v6);
    }
  }
  else if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
  }
  return a1;
}

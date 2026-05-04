struct D3DXQUATERNION *__fastcall c_D3DXQuaternionInverse(struct D3DXQUATERNION *a1, const struct D3DXQUATERNION *a2)
{
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm2_4

  v2 = *(float *)a2;
  v3 = (float)((float)((float)(v2 * v2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
             + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a2 + 3));
  if ( v3 <= 1.0842022e-19 )
  {
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 1) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 3) = 0;
  }
  else
  {
    LODWORD(v4) = LODWORD(v2) ^ _mask__NegFloat_;
    *(float *)a1 = v4;
    *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1) ^ _mask__NegFloat_;
    *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2) ^ _mask__NegFloat_;
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    if ( (float)(v3 - 1.0) < -0.00000011920929 || (float)(v3 - 1.0) > 0.00000011920929 )
    {
      v5 = (float)(1.0 / v3) * *((float *)a1 + 1);
      *(float *)a1 = (float)(1.0 / v3) * v4;
      *((float *)a1 + 1) = v5;
      v6 = (float)(1.0 / v3) * *((float *)a1 + 3);
      *((float *)a1 + 2) = (float)(1.0 / v3) * *((float *)a1 + 2);
      *((float *)a1 + 3) = v6;
    }
  }
  return a1;
}

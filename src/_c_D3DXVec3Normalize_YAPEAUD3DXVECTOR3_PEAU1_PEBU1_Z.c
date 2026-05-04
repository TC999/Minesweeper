struct D3DXVECTOR3 *__fastcall c_D3DXVec3Normalize(struct D3DXVECTOR3 *a1, const struct D3DXVECTOR3 *a2)
{
  float v4; // xmm7_4
  float v5; // xmm2_4
  int v6; // eax
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v10; // [rsp+28h] [rbp-30h]

  v4 = *(float *)a2;
  v5 = (float)((float)(v4 * v4) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
     + (float)(*((float *)a2 + 2) * *((float *)a2 + 2));
  if ( (float)(v5 - 1.0) < -0.00000011920929 || (float)(v5 - 1.0) > 0.00000011920929 )
  {
    if ( v5 <= 1.1754944e-38 )
    {
      v6 = 0;
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 1) = 0;
      goto LABEL_8;
    }
    v7 = 1.0 / sqrtf(v5);
    v8 = v7 * *((float *)a2 + 1);
    v10 = v7 * *((float *)a2 + 2);
    *(float *)a1 = v4 * v7;
    *((float *)a1 + 1) = v8;
    *((float *)a1 + 2) = v10;
  }
  else if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 2);
LABEL_8:
    *((_DWORD *)a1 + 2) = v6;
  }
  return a1;
}

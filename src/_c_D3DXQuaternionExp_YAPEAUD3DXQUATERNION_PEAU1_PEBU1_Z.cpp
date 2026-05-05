struct D3DXQUATERNION *__fastcall c_D3DXQuaternionExp(struct D3DXQUATERNION *a1, const struct D3DXQUATERNION *a2)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm6_4

  v4 = sqrtf(
         (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
       + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  v5 = sinf(v4);
  *((float *)a1 + 3) = cosf(v4);
  if ( (float)(v5 - 0.0) < -0.00000011920929 || (float)(v5 - 0.0) > 0.00000011920929 )
  {
    v6 = v5 / v4;
    *(float *)a1 = v6 * *(float *)a2;
    *((float *)a1 + 1) = v6 * *((float *)a2 + 1);
    *((float *)a1 + 2) = v6 * *((float *)a2 + 2);
  }
  else if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
    *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  }
  return a1;
}

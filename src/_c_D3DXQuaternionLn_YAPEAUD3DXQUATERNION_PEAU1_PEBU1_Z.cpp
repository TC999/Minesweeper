struct D3DXQUATERNION *__fastcall c_D3DXQuaternionLn(struct D3DXQUATERNION *a1, const struct D3DXQUATERNION *a2)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm6_4

  if ( *((float *)a2 + 3) >= 1.0 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
    *((_QWORD *)a1 + 1) = *((unsigned int *)a2 + 2);
  }
  else
  {
    v4 = acosf(*((float *)a2 + 3));
    v5 = sinf(v4);
    if ( (float)(v5 - 0.0) < -0.00000011920929 || (float)(v5 - 0.0) > 0.00000011920929 )
    {
      v6 = v4 / v5;
      *(float *)a1 = v6 * *(float *)a2;
      *((float *)a1 + 1) = v6 * *((float *)a2 + 1);
      *((float *)a1 + 2) = v6 * *((float *)a2 + 2);
    }
    else
    {
      *(_DWORD *)a1 = *(_DWORD *)a2;
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
    }
    *((_DWORD *)a1 + 3) = 0;
  }
  return a1;
}

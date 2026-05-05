struct D3DXMATRIX *__fastcall c_D3DXMatrixRotationY(struct D3DXMATRIX *a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4

  v3 = sinf(a2);
  v4 = cosf(a2);
  *((_DWORD *)a1 + 1) = 0;
  *(float *)a1 = v4;
  *((float *)a1 + 8) = v3;
  *((_DWORD *)a1 + 5) = 1065353216;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((float *)a1 + 10) = v4;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 2) = LODWORD(v3) ^ _mask__NegFloat_;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  return a1;
}

struct D3DXMATRIX *__fastcall c_D3DXMatrixScaling(struct D3DXMATRIX *a1, float a2, float a3, float a4)
{
  struct D3DXMATRIX *result; // rax

  *(float *)a1 = a2;
  *((float *)a1 + 5) = a3;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 12) = 0;
  *((float *)a1 + 10) = a4;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 1) = 0;
  result = a1;
  *((_DWORD *)a1 + 15) = 1065353216;
  return result;
}

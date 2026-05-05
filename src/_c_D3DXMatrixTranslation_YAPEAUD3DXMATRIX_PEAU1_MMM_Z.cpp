struct D3DXMATRIX *__fastcall c_D3DXMatrixTranslation(struct D3DXMATRIX *a1, float a2, float a3, float a4)
{
  *((float *)a1 + 12) = a2;
  *((float *)a1 + 13) = a3;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 9) = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((float *)a1 + 14) = a4;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((_DWORD *)a1 + 10) = 1065353216;
  *((_DWORD *)a1 + 5) = 1065353216;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}

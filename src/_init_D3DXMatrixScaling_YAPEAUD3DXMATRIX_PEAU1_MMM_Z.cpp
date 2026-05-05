struct D3DXMATRIX *__fastcall init_D3DXMatrixScaling(struct D3DXMATRIX *a1, float a2, float a3, float a4)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6780(a1, a2, a3, a4);
}

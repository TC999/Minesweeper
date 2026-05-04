struct D3DXMATRIX *__fastcall init_D3DXMatrixReflect(struct D3DXMATRIX *a1, const struct D3DXPLANE *a2)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6758(a1, a2);
}

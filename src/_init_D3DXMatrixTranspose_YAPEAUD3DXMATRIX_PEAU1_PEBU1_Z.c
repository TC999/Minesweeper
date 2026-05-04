struct D3DXMATRIX *__fastcall init_D3DXMatrixTranspose(struct D3DXMATRIX *a1, const struct D3DXMATRIX *a2)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A67A0(a1, a2);
}

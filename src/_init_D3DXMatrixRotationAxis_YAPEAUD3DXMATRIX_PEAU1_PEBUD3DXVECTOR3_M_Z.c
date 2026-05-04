struct D3DXMATRIX *__fastcall init_D3DXMatrixRotationAxis(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR3 *a2,
        float a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A67C8(a1, a2, a3);
}

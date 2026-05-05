struct D3DXVECTOR4 *__fastcall init_D3DXVec2Transform(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXMATRIX *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return g_D3DXFastTable(a1, a2, a3);
}

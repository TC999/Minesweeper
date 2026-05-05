struct D3DXVECTOR3 *__fastcall init_D3DXPlaneIntersectLine(
        struct D3DXVECTOR3 *a1,
        const struct D3DXPLANE *a2,
        const struct D3DXVECTOR3 *a3,
        const struct D3DXVECTOR3 *a4)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6728(a1, a2, a3, a4);
}

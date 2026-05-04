struct D3DXPLANE *__fastcall init_D3DXPlaneFromPointNormal(
        struct D3DXPLANE *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXVECTOR3 *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A66D8(a1, a2, a3);
}

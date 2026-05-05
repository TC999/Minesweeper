struct D3DXPLANE *__fastcall init_D3DXPlaneTransform(
        struct D3DXPLANE *a1,
        const struct D3DXPLANE *a2,
        const struct D3DXMATRIX *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6788(a1, a2, a3);
}

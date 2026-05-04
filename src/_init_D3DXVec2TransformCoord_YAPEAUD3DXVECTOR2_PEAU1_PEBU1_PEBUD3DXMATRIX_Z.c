struct D3DXVECTOR2 *__fastcall init_D3DXVec2TransformCoord(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXMATRIX *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A66B8(a1, a2, a3);
}

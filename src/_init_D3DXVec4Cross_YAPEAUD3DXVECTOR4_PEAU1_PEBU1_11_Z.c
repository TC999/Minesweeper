struct D3DXVECTOR4 *__fastcall init_D3DXVec4Cross(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXVECTOR4 *a3,
        const struct D3DXVECTOR4 *a4)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A66F8(a1, a2, a3, a4);
}

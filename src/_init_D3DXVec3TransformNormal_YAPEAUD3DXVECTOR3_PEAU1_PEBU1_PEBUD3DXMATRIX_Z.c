struct D3DXVECTOR3 *__fastcall init_D3DXVec3TransformNormal(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXMATRIX *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A66A0(a1, a2, a3);
}

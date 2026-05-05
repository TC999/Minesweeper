__int64 __fastcall init_D3DXMatrixDecompose(
        struct D3DXVECTOR3 *a1,
        struct D3DXQUATERNION *a2,
        struct D3DXVECTOR3 *a3,
        const struct D3DXMATRIX *a4)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A66D0(a1, a2, a3, a4);
}

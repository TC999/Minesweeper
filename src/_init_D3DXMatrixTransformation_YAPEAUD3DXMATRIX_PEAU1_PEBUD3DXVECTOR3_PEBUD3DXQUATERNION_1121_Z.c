void __fastcall __noreturn init_D3DXMatrixTransformation(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXQUATERNION *a3,
        const struct D3DXVECTOR3 *a4,
        const struct D3DXVECTOR3 *a5,
        const struct D3DXQUATERNION *a6,
        const struct D3DXVECTOR3 *a7)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A67B0(a1, a2, a3, a4, a5, a6, a7);
}

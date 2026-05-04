void __fastcall __noreturn init_D3DXMatrixAffineTransformation(
        struct D3DXMATRIX *a1,
        float a2,
        const struct D3DXVECTOR3 *a3,
        const struct D3DXQUATERNION *a4,
        const struct D3DXVECTOR3 *a5)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A67C0(a1, a2, a3, a4, a5);
}

void __fastcall __noreturn init_D3DXMatrixAffineTransformation2D(
        struct D3DXMATRIX *a1,
        float a2,
        const struct D3DXVECTOR2 *a3,
        float a4,
        const struct D3DXVECTOR2 *a5)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A68B8(a1, a2, a3, a4, a5);
}

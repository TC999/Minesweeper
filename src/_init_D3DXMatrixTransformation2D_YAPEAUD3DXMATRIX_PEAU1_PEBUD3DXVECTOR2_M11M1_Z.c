void __fastcall __noreturn init_D3DXMatrixTransformation2D(
        struct D3DXMATRIX *a1,
        const struct D3DXVECTOR2 *a2,
        float a3,
        const struct D3DXVECTOR2 *a4,
        const struct D3DXVECTOR2 *a5,
        float a6,
        const struct D3DXVECTOR2 *a7)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A68B0(a1, a2, a3, a4, a5, a6, a7);
}

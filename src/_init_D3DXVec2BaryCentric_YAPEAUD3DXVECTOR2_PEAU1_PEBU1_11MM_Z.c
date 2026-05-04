void __fastcall __noreturn init_D3DXVec2BaryCentric(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXVECTOR2 *a3,
        const struct D3DXVECTOR2 *a4,
        float a5,
        float a6)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A67F8(a1, a2, a3, a4, a5, a6);
}

void __fastcall __noreturn init_D3DXVec4CatmullRom(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXVECTOR4 *a3,
        const struct D3DXVECTOR4 *a4,
        const struct D3DXVECTOR4 *a5,
        float a6)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A6820(a1, a2, a3, a4, a5, a6);
}

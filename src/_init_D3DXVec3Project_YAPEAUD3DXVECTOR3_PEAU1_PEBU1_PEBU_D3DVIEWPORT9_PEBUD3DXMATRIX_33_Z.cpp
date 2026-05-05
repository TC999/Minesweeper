void __fastcall __noreturn init_D3DXVec3Project(
        struct D3DXVECTOR3 *a1,
        const struct D3DXVECTOR3 *a2,
        const struct _D3DVIEWPORT9 *a3,
        const struct D3DXMATRIX *a4,
        const struct D3DXMATRIX *a5,
        const struct D3DXMATRIX *a6)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A66E8(a1, a2, a3, a4, a5, a6);
}

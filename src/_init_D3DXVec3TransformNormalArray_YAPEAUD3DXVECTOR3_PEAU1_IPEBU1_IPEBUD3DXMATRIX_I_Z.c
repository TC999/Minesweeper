void __fastcall __noreturn init_D3DXVec3TransformNormalArray(
        struct D3DXVECTOR3 *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct D3DXMATRIX *a5,
        unsigned int a6)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A6878(a1, a2, a3, a4, a5, a6);
}

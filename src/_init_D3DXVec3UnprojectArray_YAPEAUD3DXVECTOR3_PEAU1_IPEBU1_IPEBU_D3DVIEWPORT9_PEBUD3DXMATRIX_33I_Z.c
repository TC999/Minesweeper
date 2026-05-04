void __fastcall __noreturn init_D3DXVec3UnprojectArray(
        struct D3DXVECTOR3 *a1,
        unsigned int a2,
        const struct D3DXVECTOR3 *a3,
        unsigned int a4,
        const struct _D3DVIEWPORT9 *a5,
        const struct D3DXMATRIX *a6,
        const struct D3DXMATRIX *a7,
        const struct D3DXMATRIX *a8,
        unsigned int a9)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A6890(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

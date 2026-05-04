void __fastcall __noreturn init_D3DXQuaternionSquadSetup(
        struct D3DXQUATERNION *a1,
        struct D3DXQUATERNION *a2,
        struct D3DXQUATERNION *a3,
        const struct D3DXQUATERNION *a4,
        const struct D3DXQUATERNION *a5,
        const struct D3DXQUATERNION *a6,
        const struct D3DXQUATERNION *a7)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A67E0(a1, a2, a3, a4, a5, a6, a7);
}

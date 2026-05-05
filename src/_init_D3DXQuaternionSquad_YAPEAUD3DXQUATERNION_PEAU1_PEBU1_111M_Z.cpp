void __fastcall __noreturn init_D3DXQuaternionSquad(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3,
        const struct D3DXQUATERNION *a4,
        const struct D3DXQUATERNION *a5,
        float a6)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A67D0(a1, a2, a3, a4, a5, a6);
}

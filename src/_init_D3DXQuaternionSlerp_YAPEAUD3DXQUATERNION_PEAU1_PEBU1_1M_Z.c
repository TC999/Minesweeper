struct D3DXQUATERNION *__fastcall init_D3DXQuaternionSlerp(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3,
        float a4)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6790(a1, a2, a3, a4);
}

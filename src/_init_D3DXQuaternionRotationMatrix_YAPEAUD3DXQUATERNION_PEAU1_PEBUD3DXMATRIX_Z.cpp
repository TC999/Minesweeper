struct D3DXQUATERNION *__fastcall init_D3DXQuaternionRotationMatrix(
        struct D3DXQUATERNION *a1,
        const struct D3DXMATRIX *a2)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  return off_1000A6738(a1, a2);
}

void __fastcall init_D3DXQuaternionToAxisAngle(const struct D3DXQUATERNION *a1, struct D3DXVECTOR3 *a2, float *a3)
{
  D3DXCheckNewDelete();
  D3DXCpuOptimizations(1);
  off_1000A6730(a1, a2, a3);
}

struct D3DXQUATERNION *__fastcall c_D3DXQuaternionSquad(
        struct D3DXQUATERNION *a1,
        const struct D3DXQUATERNION *a2,
        const struct D3DXQUATERNION *a3,
        const struct D3DXQUATERNION *a4,
        const struct D3DXQUATERNION *a5,
        float a6)
{
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  off_1000A6790((struct D3DXQUATERNION *)v11, a2, a5, a6);
  off_1000A6790((struct D3DXQUATERNION *)v10, a3, a4, a6);
  off_1000A6790(
    a1,
    (const struct D3DXQUATERNION *)v11,
    (const struct D3DXQUATERNION *)v10,
    (float)(1.0 - a6) * (float)(a6 * 2.0));
  return a1;
}

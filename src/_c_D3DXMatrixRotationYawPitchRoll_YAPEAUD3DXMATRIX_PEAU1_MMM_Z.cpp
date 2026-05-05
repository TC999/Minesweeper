struct D3DXMATRIX *__fastcall c_D3DXMatrixRotationYawPitchRoll(struct D3DXMATRIX *a1, float a2, float a3, float a4)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  off_1000A6740((struct D3DXQUATERNION *)v6, a2, a3, a4);
  off_1000A67A8(a1, (const struct D3DXQUATERNION *)v6);
  return a1;
}

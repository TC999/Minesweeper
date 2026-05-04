void __fastcall c_D3DXQuaternionToAxisAngle(const struct D3DXQUATERNION *a1, struct D3DXVECTOR3 *a2, float *a3)
{
  if ( a2 )
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *((_DWORD *)a2 + 1) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
  }
  if ( a3 )
    *a3 = acosf(*((float *)a1 + 3)) * 2.0;
}

struct D3DXPLANE *__fastcall c_D3DXPlaneFromPointNormal(
        struct D3DXPLANE *a1,
        const struct D3DXVECTOR3 *a2,
        const struct D3DXVECTOR3 *a3)
{
  struct D3DXPLANE *result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a3;
  *((_DWORD *)a1 + 1) = *((_DWORD *)a3 + 1);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a3 + 2);
  result = a1;
  *((_DWORD *)a1 + 3) = COERCE_UNSIGNED_INT(
                          (float)((float)(*((float *)a2 + 1) * *((float *)a3 + 1)) + (float)(*(float *)a2 * *(float *)a3))
                        + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)))
                      ^ _mask__NegFloat_;
  return result;
}

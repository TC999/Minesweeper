struct D3DXVECTOR2 *__fastcall c_D3DXVec2TransformNormal(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXMATRIX *a3)
{
  *(_QWORD *)a1 = __PAIR64__(
                    (float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)),
                    (float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3));
  return a1;
}

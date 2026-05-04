struct D3DXVECTOR4 *__fastcall c_D3DXVec4BaryCentric(
        struct D3DXVECTOR4 *a1,
        const struct D3DXVECTOR4 *a2,
        const struct D3DXVECTOR4 *a3,
        const struct D3DXVECTOR4 *a4,
        float a5,
        float a6)
{
  struct D3DXVECTOR4 *result; // rax

  result = a1;
  *(float *)a1 = (float)((float)((float)(*(float *)a3 - *(float *)a2) * a5) + *(float *)a2)
               + (float)((float)(*(float *)a4 - *(float *)a2) * a6);
  *((float *)a1 + 1) = (float)((float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a5) + *((float *)a2 + 1))
                     + (float)((float)(*((float *)a4 + 1) - *((float *)a2 + 1)) * a6);
  *((float *)a1 + 2) = (float)((float)((float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * a5) + *((float *)a2 + 2))
                     + (float)((float)(*((float *)a4 + 2) - *((float *)a2 + 2)) * a6);
  *((float *)a1 + 3) = (float)((float)((float)(*((float *)a3 + 3) - *((float *)a2 + 3)) * a5) + *((float *)a2 + 3))
                     + (float)((float)(*((float *)a4 + 3) - *((float *)a2 + 3)) * a6);
  return result;
}

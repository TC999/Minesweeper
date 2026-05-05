struct D3DXVECTOR2 *__fastcall c_D3DXVec2BaryCentric(
        struct D3DXVECTOR2 *a1,
        const struct D3DXVECTOR2 *a2,
        const struct D3DXVECTOR2 *a3,
        const struct D3DXVECTOR2 *a4,
        float a5,
        float a6)
{
  struct D3DXVECTOR2 *result; // rax

  result = a1;
  *(float *)a1 = (float)((float)((float)(*(float *)a3 - *(float *)a2) * a5) + *(float *)a2)
               + (float)((float)(*(float *)a4 - *(float *)a2) * a6);
  *((float *)a1 + 1) = (float)((float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a5) + *((float *)a2 + 1))
                     + (float)((float)(*((float *)a4 + 1) - *((float *)a2 + 1)) * a6);
  return result;
}

struct D3DXMATRIX *__fastcall c_D3DXMatrixMultiplyTranspose(
        struct D3DXMATRIX *a1,
        const struct D3DXMATRIX *a2,
        const struct D3DXMATRIX *a3)
{
  float *p_Src; // rdx
  char Src; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 == a2 || (p_Src = (float *)a1, a1 == a3) )
    p_Src = (float *)&Src;
  *p_Src = (float)((float)((float)(*((float *)a3 + 4) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a3))
                 + (float)(*((float *)a3 + 8) * *((float *)a2 + 2)))
         + (float)(*((float *)a3 + 12) * *((float *)a2 + 3));
  p_Src[1] = (float)((float)((float)(*((float *)a3 + 4) * *((float *)a2 + 5))
                           + (float)(*(float *)a3 * *((float *)a2 + 4)))
                   + (float)(*((float *)a3 + 8) * *((float *)a2 + 6)))
           + (float)(*((float *)a3 + 12) * *((float *)a2 + 7));
  p_Src[2] = (float)((float)((float)(*((float *)a2 + 8) * *(float *)a3)
                           + (float)(*((float *)a3 + 4) * *((float *)a2 + 9)))
                   + (float)(*((float *)a3 + 8) * *((float *)a2 + 10)))
           + (float)(*((float *)a2 + 11) * *((float *)a3 + 12));
  p_Src[3] = (float)((float)((float)(*((float *)a2 + 12) * *(float *)a3)
                           + (float)(*((float *)a3 + 4) * *((float *)a2 + 13)))
                   + (float)(*((float *)a2 + 14) * *((float *)a3 + 8)))
           + (float)(*((float *)a3 + 12) * *((float *)a2 + 15));
  p_Src[4] = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 1))
                           + (float)(*((float *)a3 + 1) * *(float *)a2))
                   + (float)(*((float *)a3 + 9) * *((float *)a2 + 2)))
           + (float)(*((float *)a3 + 13) * *((float *)a2 + 3));
  p_Src[5] = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 5))
                           + (float)(*((float *)a3 + 1) * *((float *)a2 + 4)))
                   + (float)(*((float *)a2 + 6) * *((float *)a3 + 9)))
           + (float)(*((float *)a2 + 7) * *((float *)a3 + 13));
  p_Src[6] = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 9))
                           + (float)(*((float *)a3 + 1) * *((float *)a2 + 8)))
                   + (float)(*((float *)a2 + 10) * *((float *)a3 + 9)))
           + (float)(*((float *)a2 + 11) * *((float *)a3 + 13));
  p_Src[7] = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 13))
                           + (float)(*((float *)a3 + 1) * *((float *)a2 + 12)))
                   + (float)(*((float *)a2 + 14) * *((float *)a3 + 9)))
           + (float)(*((float *)a3 + 13) * *((float *)a2 + 15));
  p_Src[8] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 1))
                           + (float)(*((float *)a3 + 2) * *(float *)a2))
                   + (float)(*((float *)a3 + 10) * *((float *)a2 + 2)))
           + (float)(*((float *)a3 + 14) * *((float *)a2 + 3));
  p_Src[9] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 5))
                           + (float)(*((float *)a3 + 2) * *((float *)a2 + 4)))
                   + (float)(*((float *)a2 + 6) * *((float *)a3 + 10)))
           + (float)(*((float *)a2 + 7) * *((float *)a3 + 14));
  p_Src[10] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 9))
                            + (float)(*((float *)a3 + 2) * *((float *)a2 + 8)))
                    + (float)(*((float *)a2 + 10) * *((float *)a3 + 10)))
            + (float)(*((float *)a2 + 11) * *((float *)a3 + 14));
  p_Src[11] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 13))
                            + (float)(*((float *)a3 + 2) * *((float *)a2 + 12)))
                    + (float)(*((float *)a2 + 14) * *((float *)a3 + 10)))
            + (float)(*((float *)a3 + 14) * *((float *)a2 + 15));
  p_Src[12] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 1))
                            + (float)(*((float *)a3 + 3) * *(float *)a2))
                    + (float)(*((float *)a3 + 11) * *((float *)a2 + 2)))
            + (float)(*((float *)a3 + 15) * *((float *)a2 + 3));
  p_Src[13] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 5))
                            + (float)(*((float *)a3 + 3) * *((float *)a2 + 4)))
                    + (float)(*((float *)a2 + 6) * *((float *)a3 + 11)))
            + (float)(*((float *)a2 + 7) * *((float *)a3 + 15));
  p_Src[14] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 9))
                            + (float)(*((float *)a3 + 3) * *((float *)a2 + 8)))
                    + (float)(*((float *)a2 + 10) * *((float *)a3 + 11)))
            + (float)(*((float *)a2 + 11) * *((float *)a3 + 15));
  p_Src[15] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 13))
                            + (float)(*((float *)a3 + 3) * *((float *)a2 + 12)))
                    + (float)(*((float *)a2 + 14) * *((float *)a3 + 11)))
            + (float)(*((float *)a3 + 15) * *((float *)a2 + 15));
  if ( p_Src != (float *)a1 )
    memcpy(a1, p_Src, 0x40u);
  return a1;
}

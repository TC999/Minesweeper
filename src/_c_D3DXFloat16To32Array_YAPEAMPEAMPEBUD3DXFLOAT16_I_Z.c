float *__fastcall c_D3DXFloat16To32Array(float *a1, const struct D3DXFLOAT16 *a2, __int64 a3)
{
  float *v5; // r10
  int v6; // edx
  int v7; // ecx
  int i; // eax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // edx

  if ( (_DWORD)a3 )
  {
    v5 = a1;
    a3 = (unsigned int)a3;
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)a2;
      if ( (v6 & 0xFFFF7C00) != 0 )
        break;
      if ( (*(_WORD *)a2 & 0x3FF) != 0 )
      {
        v7 = -14;
        for ( i = v6 & 0x3FF; (i & 0x400) == 0; i *= 2 )
          --v7;
        v9 = ((i | (8 * (v6 & 0xFFFF8080))) & 0xFFFFFBFF) << 13;
        v10 = (v7 + 127) << 23;
        goto LABEL_11;
      }
      v11 = (v6 & 0xFFFF8000) << 16;
LABEL_12:
      *(_DWORD *)v5 = v11;
      a2 = (const struct D3DXFLOAT16 *)((char *)a2 + 2);
      ++v5;
      if ( !--a3 )
        return a1;
    }
    v10 = ((v6 & 0x7C00) << 13) + 939524096;
    v9 = (v6 & 0x3FF | (8 * (v6 & 0xFFFF8000))) << 13;
LABEL_11:
    v11 = v10 | v9;
    goto LABEL_12;
  }
  return a1;
}

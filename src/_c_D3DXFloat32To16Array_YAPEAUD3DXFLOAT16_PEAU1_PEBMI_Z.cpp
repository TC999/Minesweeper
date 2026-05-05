struct D3DXFLOAT16 *__fastcall c_D3DXFloat32To16Array(struct D3DXFLOAT16 *a1, const float *a2, unsigned int a3)
{
  struct D3DXFLOAT16 *v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r8d
  int v8; // edx
  __int16 v9; // dx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ecx

  if ( a3 )
  {
    v5 = a1;
    v6 = a3;
    do
    {
      v7 = *(_DWORD *)a2 & 0x7FFFFFFF;
      v8 = HIWORD(*(_DWORD *)a2) & 0x8000;
      if ( v7 <= 0x47FFEFFF )
      {
        if ( v7 >= 0x38800000 )
        {
          v12 = ((v7 >> 13) & 1) + v7 - 939520001;
        }
        else
        {
          v10 = v7 >> 23;
          v11 = (*(_DWORD *)a2 & 0x7FFFFF | 0x800000u) >> (113 - ((*(_DWORD *)a2 & 0x7FFFFFFFu) >> 23));
          if ( (int)(113 - v10) > 31 )
            v11 = 0;
          v12 = ((v11 >> 13) & 1) + v11 + 4095;
        }
        v9 = (v12 >> 13) | v8;
      }
      else
      {
        v9 = v8 | 0x7FFF;
      }
      *(_WORD *)v5 = v9;
      ++a2;
      v5 = (struct D3DXFLOAT16 *)((char *)v5 + 2);
      --v6;
    }
    while ( v6 );
  }
  return a1;
}

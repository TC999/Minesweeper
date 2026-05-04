__int64 __fastcall D3DXTex::c_BoxFilter2D_X8R8G8B8(
        unsigned int *a1,
        int *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  int *v6; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r12
  int *v12; // r15
  unsigned int *v13; // r14
  int v14; // r8d
  int v15; // r10d
  int v16; // r9d
  int v17; // r11d

  v6 = a2;
  v8 = (unsigned __int64)a2 + a5 * a4;
  if ( (unsigned __int64)a2 < v8 )
  {
    v9 = a6;
    v10 = (unsigned __int64)&a2[a3];
    v11 = 2LL * a5;
    do
    {
      v12 = v6;
      if ( (unsigned __int64)v6 < v10 )
      {
        v13 = a1;
        do
        {
          v14 = *(int *)((char *)v12 + a5 + 4);
          v15 = *(int *)((char *)v12 + a5);
          v16 = *v12;
          v17 = v12[1];
          v12 += 2;
          *v13++ = (((v16 & 0xFF00) + (v14 & 0xFF00) + (v15 & 0xFF00) + (v17 & 0xFF00) + 512) & 0x3FC00
                  | ((v16 & 0xFF00FF) + (v14 & 0xFF00FF) + (v15 & 0xFF00FF) + (v17 & 0xFF00FF) + 131074) & 0x3FC03FCu) >> 2;
        }
        while ( (unsigned __int64)v12 < v10 );
        v9 = a6;
      }
      v6 = (int *)((char *)v6 + v11);
      a1 = (unsigned int *)((char *)a1 + v9);
      v10 += v11;
    }
    while ( (unsigned __int64)v6 < v8 );
  }
  return 0;
}

__int64 __fastcall D3DXTex::c_BoxFilter2D_A8R8G8B8(
        D3DXTex *this,
        unsigned int *a2,
        unsigned int *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int *v6; // rbx
  unsigned int *v8; // rdi
  __int64 v9; // r14
  unsigned int *v10; // rsi
  __int64 v11; // r12
  unsigned int *v12; // r15
  D3DXTex *v13; // r14
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  unsigned int v18; // ecx

  v6 = a2;
  v8 = (unsigned int *)((char *)a2 + a5 * a4);
  if ( a2 < v8 )
  {
    v9 = a6;
    v10 = &a2[(unsigned int)a3];
    v11 = 2LL * a5;
    do
    {
      v12 = v6;
      if ( v6 < v10 )
      {
        v13 = this;
        do
        {
          v14 = v12[1];
          v15 = *v12;
          v16 = *(unsigned int *)((char *)v12 + a5);
          v17 = *(unsigned int *)((char *)v12 + a5 + 4);
          v18 = *v12 >> 2;
          v12 += 2;
          *(_DWORD *)v13 = (((v15 >> 2) & 0x3FC03FC0)
                          + ((v17 >> 2) & 0x3FC03FC0)
                          + ((v16 >> 2) & 0x3FC03FC0)
                          + ((v14 >> 2) & 0x3FC03FC0)
                          + 8388736)
                         ^ ((((v15 & 0xFF00FF) + (v17 & 0xFF00FF) + (v16 & 0xFF00FF) + (v14 & 0xFF00FF) + 131074) >> 2)
                          ^ (((v16 >> 2) & 0xFFC03FC0)
                           + ((v14 >> 2) & 0xFFC03FC0)
                           + (v18 & 0xFFC03FC0)
                           + ((v17 >> 2) & 0xFFC03FC0)
                           - 8388480))
                         & 0xFF00FF;
          v13 = (D3DXTex *)((char *)v13 + 4);
        }
        while ( v12 < v10 );
        v9 = a6;
      }
      v6 = (unsigned int *)((char *)v6 + v11);
      this = (D3DXTex *)((char *)this + v9);
      v10 = (unsigned int *)((char *)v10 + v11);
    }
    while ( v6 < v8 );
  }
  return 0;
}

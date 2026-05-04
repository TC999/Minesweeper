__int64 __fastcall D3DXTex::CBlt::BltBox2D_A8R3G3B2(D3DXTex::CBlt *this)
{
  __int64 v1; // rdx
  D3DXTex::CBlt *v2; // rsi
  char *v3; // rbx
  _WORD *v4; // rbp
  char *v5; // rdi
  _WORD *v6; // r15
  unsigned __int64 v7; // r13
  __int16 *v8; // r12
  __int16 *v9; // r14
  __int16 v10; // r8
  __int16 v11; // r10
  __int16 v12; // r9
  __int16 v13; // r11
  int v14; // ecx
  int v15; // ecx

  v1 = *(_QWORD *)this;
  v2 = this;
  v3 = *(char **)(*(_QWORD *)this + 40LL);
  v4 = *(_WORD **)(*((_QWORD *)this + 1) + 40LL);
  v5 = &v3[*(_DWORD *)(*(_QWORD *)this + 128LL) * *(_DWORD *)(*(_QWORD *)this + 140LL)];
  while ( v3 < v5 )
  {
    v6 = v4;
    v7 = (unsigned __int64)&v3[2 * *(unsigned int *)(v1 + 136)];
    v8 = (__int16 *)&v3[*(unsigned int *)(v1 + 128)];
    v9 = (__int16 *)v3;
    if ( (unsigned __int64)v3 < v7 )
    {
      do
      {
        v10 = *v8;
        v11 = *v9;
        v12 = v9[1];
        v13 = v8[1];
        v14 = *v9 & 0xE3;
        v9 += 2;
        v15 = (*v8 & 0xE3) + v14;
        v8 += 2;
        *v6++ = (((v12 & 0xFF1C) + (v10 & 0xFF1C) + (v11 & 0xFF1C) + (v13 & 0xFF1Cu) + 520) >> 2)
              ^ ((((v12 & 0xFF1C) + (v10 & 0xFF1C) + (v11 & 0xFF1C) + (v13 & 0xFF1Cu) + 520) >> 2)
               ^ (((v12 & 0xE3) + v15 + (v13 & 0xE3u) + 66) >> 2))
              & 0xE3;
      }
      while ( (unsigned __int64)v9 < v7 );
      v2 = this;
    }
    v1 = *(_QWORD *)v2;
    v3 += 2 * *(unsigned int *)(*(_QWORD *)v2 + 128LL);
    v4 = (_WORD *)((char *)v4 + *(unsigned int *)(*((_QWORD *)v2 + 1) + 128LL));
  }
  return 0;
}

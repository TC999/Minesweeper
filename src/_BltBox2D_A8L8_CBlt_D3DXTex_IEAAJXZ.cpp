__int64 __fastcall D3DXTex::CBlt::BltBox2D_A8L8(D3DXTex::CBlt *this)
{
  __int64 v1; // rdx
  char *v2; // rbx
  _WORD *v3; // rbp
  char *v4; // rsi
  _WORD *v5; // r15
  unsigned __int64 v6; // r13
  __int16 *v7; // r12
  __int16 *v8; // r14
  __int16 v9; // r8
  __int16 v10; // r10
  __int16 v11; // r9
  __int16 v12; // r11

  v1 = *(_QWORD *)this;
  v2 = *(char **)(*(_QWORD *)this + 40LL);
  v3 = *(_WORD **)(*((_QWORD *)this + 1) + 40LL);
  v4 = &v2[*(_DWORD *)(*(_QWORD *)this + 128LL) * *(_DWORD *)(*(_QWORD *)this + 140LL)];
  while ( v2 < v4 )
  {
    v5 = v3;
    v6 = (unsigned __int64)&v2[2 * *(unsigned int *)(v1 + 136)];
    v7 = (__int16 *)&v2[*(unsigned int *)(v1 + 128)];
    v8 = (__int16 *)v2;
    if ( (unsigned __int64)v2 < v6 )
    {
      do
      {
        v9 = *v7;
        v10 = *v8;
        v11 = v8[1];
        v12 = v7[1];
        v8 += 2;
        v7 += 2;
        *v5++ = (((v11 & 0xFF00) + (v9 & 0xFF00) + (v10 & 0xFF00) + (v12 & 0xFF00u) + 512) >> 2)
              ^ (unsigned __int8)((((v11 & 0xFF00) + (v9 & 0xFF00) + (v10 & 0xFF00) + (v12 & 0xFF00u) + 512) >> 2)
                                ^ (((unsigned __int8)v11
                                  + (unsigned __int8)v9
                                  + (unsigned __int8)v10
                                  + (unsigned int)(unsigned __int8)v12
                                  + 2) >> 2));
      }
      while ( (unsigned __int64)v8 < v6 );
    }
    v1 = *(_QWORD *)this;
    v2 += 2 * *(unsigned int *)(*(_QWORD *)this + 128LL);
    v3 = (_WORD *)((char *)v3 + *(unsigned int *)(*((_QWORD *)this + 1) + 128LL));
  }
  return 0;
}

__int64 __fastcall D3DXTex::CBlt::BltBox2D_A8(D3DXTex::CBlt *this)
{
  __int64 v1; // r8
  unsigned __int8 *v3; // rdx
  _BYTE *v4; // r11
  unsigned __int8 *v5; // r10
  __int64 v6; // rbx
  _BYTE *v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int8 *v9; // rbx
  unsigned __int8 *i; // rdi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  v1 = *(_QWORD *)this;
  v3 = *(unsigned __int8 **)(*(_QWORD *)this + 40LL);
  v4 = *(_BYTE **)(*((_QWORD *)this + 1) + 40LL);
  v5 = &v3[*(_DWORD *)(*(_QWORD *)this + 128LL) * *(_DWORD *)(*(_QWORD *)this + 140LL)];
  while ( v3 < v5 )
  {
    v6 = *(unsigned int *)(v1 + 128);
    v7 = v4;
    v8 = (unsigned __int64)&v3[*(unsigned int *)(v1 + 136)];
    v9 = &v3[v6];
    for ( i = v3; (unsigned __int64)i < v8; ++v7 )
    {
      v11 = i[1] + v9[1];
      v12 = *v9;
      v9 += 2;
      v13 = v12 + v11;
      v14 = *i;
      i += 2;
      *v7 = (unsigned int)(v13 + v14 + 2) >> 2;
    }
    v1 = *(_QWORD *)this;
    v3 += 2 * *(unsigned int *)(*(_QWORD *)this + 128LL);
    v4 += *(unsigned int *)(*((_QWORD *)this + 1) + 128LL);
  }
  return 0;
}

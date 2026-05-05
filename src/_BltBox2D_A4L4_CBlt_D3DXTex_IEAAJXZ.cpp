__int64 __fastcall D3DXTex::CBlt::BltBox2D_A4L4(D3DXTex::CBlt *this)
{
  __int64 v1; // rdx
  char *v3; // rbx
  _BYTE *v4; // rbp
  char *v5; // rdi
  _BYTE *v6; // r15
  unsigned __int64 v7; // r12
  char *v8; // r13
  char *i; // r14
  char v10; // r8
  char v11; // r10
  char v12; // r9
  char v13; // r11
  int v14; // ecx
  int v15; // eax

  v1 = *(_QWORD *)this;
  v3 = *(char **)(*(_QWORD *)this + 40LL);
  v4 = *(_BYTE **)(*((_QWORD *)this + 1) + 40LL);
  v5 = &v3[*(_DWORD *)(*(_QWORD *)this + 128LL) * *(_DWORD *)(*(_QWORD *)this + 140LL)];
  while ( v3 < v5 )
  {
    v6 = v4;
    v7 = (unsigned __int64)&v3[*(unsigned int *)(v1 + 136)];
    v8 = &v3[*(unsigned int *)(v1 + 128)];
    for ( i = v3; (unsigned __int64)i < v7; ++v6 )
    {
      v10 = *v8;
      v11 = *i;
      v12 = i[1];
      v13 = v8[1];
      v14 = *i & 0xF0;
      i += 2;
      v15 = *v8 & 0xF0;
      v8 += 2;
      *v6 = (((v12 & 0xF0) + (v10 & 0xF0) + (v11 & 0xF0) + (v13 & 0xF0u) + 32) >> 2)
          ^ ((((v12 & 0xF) + (v10 & 0xF) + (v11 & 0xF) + (v13 & 0xFu) + 2) >> 2)
           ^ (((v12 & 0xF0) + v15 + v14 + (v13 & 0xF0u) + 32) >> 2))
          & 0xF;
    }
    v1 = *(_QWORD *)this;
    v3 += 2 * *(unsigned int *)(*(_QWORD *)this + 128LL);
    v4 += *(unsigned int *)(*((_QWORD *)this + 1) + 128LL);
  }
  return 0;
}

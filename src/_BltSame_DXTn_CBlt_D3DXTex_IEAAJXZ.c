__int64 __fastcall D3DXTex::CBlt::BltSame_DXTn(D3DXTex::CBlt *this)
{
  unsigned int v2; // r11d
  unsigned int v3; // r10d
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // eax
  int v8; // edx
  unsigned int v9; // r14d
  size_t v10; // r15
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned int v13; // r8d
  unsigned int v14; // ebp
  char *v15; // rdi
  char *v16; // rsi
  __int64 v17; // r11
  __int64 v18; // rdx
  unsigned int v19; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(*(_QWORD *)this + 80LL);
  v3 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( (((unsigned __int8)v3
       | (unsigned __int8)(v2 | *(_BYTE *)(*(_QWORD *)this + 88LL) | *(_BYTE *)(*(_QWORD *)this + 92LL)))
      & 3) != 0 )
    return 2147500037LL;
  v5 = *((_QWORD *)this + 1);
  if ( ((*(_BYTE *)(v5 + 80) | (unsigned __int8)(*(_BYTE *)(v5 + 84) | *(_BYTE *)(v5 + 88) | *(_BYTE *)(v5 + 92))) & 3) != 0 )
    return 2147500037LL;
  v6 = *((_QWORD *)this + 1);
  v7 = *(_DWORD *)(v5 + 8);
  if ( v7 == 827611204 )
  {
    v8 = 8;
    goto LABEL_11;
  }
  if ( v7 != 844388420 && v7 != 861165636 && v7 != 877942852 && v7 != 894720068 )
    return 2147500037LL;
  v8 = 16;
LABEL_11:
  v9 = 0;
  v10 = (unsigned int)(v8 * (*(_DWORD *)(v6 + 136) >> 2));
  v19 = v8 * (*(_DWORD *)(v6 + 136) >> 2);
  v11 = *(_QWORD *)(v6 + 40)
      + (unsigned int)(v8 * (*(_DWORD *)(v6 + 80) >> 2))
      + (unsigned int)(*(_DWORD *)(v6 + 96) * *(_DWORD *)(v6 + 132))
      + (unsigned __int64)(unsigned int)(*(_DWORD *)(v6 + 128) * (*(_DWORD *)(v6 + 84) >> 2));
  v12 = *(_QWORD *)(*(_QWORD *)this + 40LL)
      + v8 * (v2 >> 2)
      + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 96LL) * *(_DWORD *)(*(_QWORD *)this + 132LL))
      + (unsigned __int64)(*(_DWORD *)(*(_QWORD *)this + 128LL) * (v3 >> 2));
  if ( *(_DWORD *)(v6 + 144) )
  {
    v13 = *(_DWORD *)(v6 + 140);
    do
    {
      v14 = 0;
      v15 = (char *)v11;
      v16 = (char *)v12;
      if ( v13 )
      {
        do
        {
          memcpy(v15, v16, v10);
          v17 = *((_QWORD *)this + 1);
          v14 += 4;
          v13 = *(_DWORD *)(v17 + 140);
          v15 += *(unsigned int *)(v17 + 128);
          v16 += *(unsigned int *)(*(_QWORD *)this + 128LL);
        }
        while ( v14 < v13 );
        v10 = v19;
      }
      v18 = *((_QWORD *)this + 1);
      ++v9;
      v11 += *(unsigned int *)(v18 + 132);
      v12 += *(unsigned int *)(*(_QWORD *)this + 132LL);
    }
    while ( v9 < *(_DWORD *)(v18 + 144) );
  }
  return 0;
}

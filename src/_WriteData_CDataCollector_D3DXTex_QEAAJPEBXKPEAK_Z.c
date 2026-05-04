__int64 __fastcall D3DXTex::CDataCollector::WriteData(
        D3DXTex::CDataCollector *this,
        char *a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  size_t v7; // rsi
  char *v8; // r12
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbp
  void *v13; // rax
  void *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  DWORD v19; // ebx

  v4 = *((_DWORD *)this + 8);
  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( !v4 )
    return 0;
  v10 = v4 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      if ( a3 + *((_DWORD *)this + 15) > (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5)) )
      {
        v11 = v7 + *((_DWORD *)this + 15);
        if ( v11 <= 2 * (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5)) )
          v11 = 2 * (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5));
        v12 = *((_QWORD *)this + 5);
        if ( v11 > *(_DWORD *)(v12 + 12) )
        {
          v13 = operator new(v11, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          v14 = v13;
          if ( !v13 )
            return 2147942414LL;
          memcpy(v13, *(const void **)(v12 + 16), *(unsigned int *)(v12 + 12));
          operator delete(*(void **)(v12 + 16));
          *(_QWORD *)(v12 + 16) = v14;
          *(_DWORD *)(v12 + 12) = v11;
        }
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5));
      memcpy((void *)(v15 + *((unsigned int *)this + 15)), v8, v7);
      *a4 = v7;
      *((_DWORD *)this + 15) += v7;
      return 0;
    }
    return 2147500037LL;
  }
  v17 = *((unsigned int *)this + 14);
  if ( (unsigned int)v17 + a3 > 0x10000 )
  {
    if ( (_DWORD)v17 != 0x10000 )
    {
      if ( !(_DWORD)v17 )
      {
LABEL_21:
        v18 = ((unsigned int)v7 - v5) >> 16;
        if ( v18 )
        {
          v19 = v18 << 16;
          if ( !WriteFile(*(HANDLE *)this, v8, v19, a4, 0) )
            return 2147500037LL;
          *((_DWORD *)this + 15) += v19;
          v5 += v19;
          v8 += v19;
        }
        if ( v5 < (unsigned int)v7 )
        {
          memcpy(*((void **)this + 6), v8, (unsigned int)v7 - v5);
          *((_DWORD *)this + 14) = v7 - v5;
        }
        goto LABEL_26;
      }
      memcpy((void *)(*((_QWORD *)this + 6) + v17), a2, (unsigned int)(0x10000 - v17));
      v17 = *((unsigned int *)this + 14);
      v8 = &v8[-v17 + 0x10000];
    }
    if ( (_DWORD)v17 )
    {
      if ( !WriteFile(*(HANDLE *)this, *((LPCVOID *)this + 6), 0x10000u, a4, 0) )
        return 2147500037LL;
      *((_DWORD *)this + 15) += 0x10000;
      v5 = 0x10000 - *((_DWORD *)this + 14);
      *((_DWORD *)this + 14) = 0;
    }
    goto LABEL_21;
  }
  memcpy((void *)(*((_QWORD *)this + 6) + v17), a2, a3);
  *((_DWORD *)this + 14) += v7;
LABEL_26:
  *a4 = v7;
  return 0;
}

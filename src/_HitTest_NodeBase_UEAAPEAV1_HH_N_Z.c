struct NodeBase *__fastcall NodeBase::HitTest(unsigned __int64 this, signed int a2, signed int a3, char a4)
{
  unsigned __int64 v7; // rax
  bool v8; // di
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // r13
  struct NodeBase *result; // rax
  int v13; // esi
  int v14; // r13d
  int v15; // r14d
  int v16; // r15d
  __int64 v17; // rax

  v7 = this;
  v8 = 0;
  while ( *(_BYTE *)(v7 + 41) )
  {
    v7 = *(_QWORD *)(v7 + 136);
    if ( !v7 )
      goto LABEL_6;
  }
  if ( !a4 )
    return 0;
LABEL_6:
  if ( !*(_BYTE *)(this + 64) )
    return 0;
  v9 = *(_DWORD *)(this + 80);
  if ( !v9 )
  {
LABEL_11:
    if ( *(_BYTE *)(this + 72) )
    {
      if ( *(_BYTE *)(this + 42) && !*(_BYTE *)(this + 43) )
      {
        v13 = *(_DWORD *)(this + 8);
        v14 = *(_DWORD *)(this + 12);
        v15 = *(_DWORD *)(this + 16);
        v16 = *(_DWORD *)(this + 20);
        *(_DWORD *)(this + 8) = *(_DWORD *)(this + 44);
        *(_DWORD *)(this + 12) = *(_DWORD *)(this + 48);
        *(_DWORD *)(this + 16) = *(_DWORD *)(this + 52);
        *(_DWORD *)(this + 20) = *(_DWORD *)(this + 56);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 8LL))(this);
        if ( a2 >= *(_DWORD *)(this + 264) && a2 < *(_DWORD *)(this + 272) && a3 >= *(_DWORD *)(this + 268) )
          v8 = a3 < *(_DWORD *)(this + 276);
        v17 = *(_QWORD *)this;
        *(_DWORD *)(this + 8) = v13;
        *(_DWORD *)(this + 12) = v14;
        *(_DWORD *)(this + 16) = v15;
        *(_DWORD *)(this + 20) = v16;
        (*(void (__fastcall **)(unsigned __int64))(v17 + 8))(this);
        return (struct NodeBase *)(this & -(__int64)v8);
      }
      if ( a2 >= *(_DWORD *)(this + 264)
        && a2 < *(_DWORD *)(this + 272)
        && a3 >= *(_DWORD *)(this + 268)
        && a3 < *(_DWORD *)(this + 276) )
      {
        return (struct NodeBase *)this;
      }
    }
    return 0;
  }
  v10 = v9 - 1;
  v11 = 8LL * (v9 - 1);
  while ( 1 )
  {
    result = (struct NodeBase *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v11 + *(_QWORD *)(this + 96))
                                                                                          + 80LL))(
                                  *(_QWORD *)(v11 + *(_QWORD *)(this + 96)),
                                  (unsigned int)a2,
                                  (unsigned int)a3,
                                  0);
    if ( result )
      return result;
    --v10;
    v11 -= 8;
    if ( v10 > *(_DWORD *)(this + 80) )
      goto LABEL_11;
  }
}

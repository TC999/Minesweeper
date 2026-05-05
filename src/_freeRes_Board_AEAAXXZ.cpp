void __fastcall Board::freeRes(Board *this)
{
  _DWORD *v1; // rax
  unsigned int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  void *v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  void *v13; // rcx
  _QWORD *v14; // rdi
  void *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rsi

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( v1 )
  {
    v3 = 0;
    if ( *v1 )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD **)(v4 + *(_QWORD *)(*((_QWORD *)this + 10) + 16LL));
        if ( v5 )
        {
          v6 = (void *)v5[2];
          if ( v6 )
            free(v6);
          operator delete(v5);
        }
        ++v3;
        *(_QWORD *)(v4 + *(_QWORD *)(*((_QWORD *)this + 10) + 16LL)) = 0;
        v4 += 8;
      }
      while ( v3 < **((_DWORD **)this + 10) );
    }
    v7 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v7 )
    {
      v8 = (void *)v7[2];
      if ( v8 )
        free(v8);
      operator delete(v7);
    }
    *((_QWORD *)this + 10) = 0;
  }
  v9 = (_DWORD *)*((_QWORD *)this + 11);
  if ( v9 )
  {
    v10 = 0;
    if ( *v9 )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD **)(v11 + *(_QWORD *)(*((_QWORD *)this + 11) + 16LL));
        if ( v12 )
        {
          v13 = (void *)v12[2];
          if ( v13 )
            free(v13);
          operator delete(v12);
        }
        ++v10;
        *(_QWORD *)(v11 + *(_QWORD *)(*((_QWORD *)this + 11) + 16LL)) = 0;
        v11 += 8;
      }
      while ( v10 < **((_DWORD **)this + 11) );
    }
    v14 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v14 )
    {
      v15 = (void *)v14[2];
      if ( v15 )
        free(v15);
      operator delete(v14);
    }
    *((_QWORD *)this + 11) = 0;
  }
  v16 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v17 = 0;
    do
    {
      operator delete(*(void **)(*((_QWORD *)this + 9) + v17));
      ++v16;
      *(_QWORD *)(v17 + *((_QWORD *)this + 9)) = 0;
      v17 += 8;
    }
    while ( v16 < *((_DWORD *)this + 14) );
  }
  *((_DWORD *)this + 14) = 0;
}

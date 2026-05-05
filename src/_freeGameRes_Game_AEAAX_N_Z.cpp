// Hidden C++ exception states: #wind=1
void __fastcall Game::freeGameRes(Game *this)
{
  Board *v2; // rdi
  void *v3; // rcx
  NodeBase *v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdi
  void **v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rdi
  void **v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rdi
  void **v13; // rbp
  unsigned int v14; // esi
  __int64 v15; // rdi
  void **v16; // rbp
  __int64 v17; // rcx

  v2 = (Board *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    *(_QWORD *)v2 = &Board::`vftable';
    Board::freeRes(v2);
    v3 = (void *)*((_QWORD *)v2 + 9);
    if ( v3 )
      free(v3);
    operator delete(v2);
    *((_QWORD *)this + 3) = 0;
  }
  v4 = (NodeBase *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    NodeBase::DeleteSelf(v4);
    *((_QWORD *)this + 1) = 0;
    v5 = 0;
    if ( *((_DWORD *)this + 36) )
    {
      v6 = 0;
      do
      {
        v7 = *(void ***)(v6 + *((_QWORD *)this + 20));
        if ( v7 )
        {
          operator delete(v7[2]);
          operator delete(v7);
        }
        *(_QWORD *)(v6 + *((_QWORD *)this + 20)) = 0;
        ++v5;
        v6 += 8;
      }
      while ( v5 < *((_DWORD *)this + 36) );
    }
    v8 = 0;
    if ( *((_DWORD *)this + 42) )
    {
      v9 = 0;
      do
      {
        v10 = *(void ***)(v9 + *((_QWORD *)this + 23));
        if ( v10 )
        {
          operator delete(v10[2]);
          operator delete(v10);
        }
        *(_QWORD *)(v9 + *((_QWORD *)this + 23)) = 0;
        ++v8;
        v9 += 8;
      }
      while ( v8 < *((_DWORD *)this + 42) );
    }
    v11 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      v12 = 0;
      do
      {
        v13 = *(void ***)(v12 + *((_QWORD *)this + 11));
        if ( v13 )
        {
          operator delete(v13[2]);
          operator delete(v13);
        }
        *(_QWORD *)(v12 + *((_QWORD *)this + 11)) = 0;
        ++v11;
        v12 += 8;
      }
      while ( v11 < *((_DWORD *)this + 18) );
    }
    v14 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      v15 = 0;
      do
      {
        v16 = *(void ***)(v15 + *((_QWORD *)this + 14));
        if ( v16 )
        {
          operator delete(v16[2]);
          operator delete(v16);
        }
        *(_QWORD *)(v15 + *((_QWORD *)this + 14)) = 0;
        ++v14;
        v15 += 8;
      }
      while ( v14 < *((_DWORD *)this + 24) );
    }
    v17 = *((_QWORD *)this + 2);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1);
      *((_QWORD *)this + 2) = 0;
    }
  }
}

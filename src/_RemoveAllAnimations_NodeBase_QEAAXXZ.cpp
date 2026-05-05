// Hidden C++ exception states: #wind=1
void __fastcall NodeBase::RemoveAllAnimations(NodeBase *this)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  unsigned int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rcx
  void *v8; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 64) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD **)(*((_QWORD *)this + 31) + v3);
      if ( v4 )
      {
        v5 = 0;
        if ( *(_DWORD *)v4 )
        {
          v6 = 0;
          do
          {
            v7 = *(_QWORD *)(v6 + v4[2]);
            if ( v7 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1);
            ++v5;
            v6 += 16;
          }
          while ( v5 < *(_DWORD *)v4 );
        }
        v8 = (void *)v4[2];
        if ( v8 )
          free(v8);
        operator delete(v4);
      }
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)this + 64) );
  }
  *((_DWORD *)this + 64) = 0;
}

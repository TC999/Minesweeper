// Hidden C++ exception states: #wind=3
void __fastcall NodeEmitter::~NodeEmitter(NodeEmitter *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  unsigned int v5; // esi
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void *v8; // rcx
  void *v9; // rcx

  *(_QWORD *)this = &NodeEmitter::`vftable';
  v2 = 0;
  if ( *((_DWORD *)this + 118) )
  {
    v3 = 0;
    do
    {
      v4 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + *((_QWORD *)this + 61));
      if ( v4 )
        (**v4)(v4, 1);
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)this + 118) );
  }
  v5 = 0;
  if ( *((_DWORD *)this + 124) )
  {
    v6 = 0;
    do
    {
      v7 = *(void (__fastcall ****)(_QWORD, __int64))(v6 + *((_QWORD *)this + 64));
      if ( v7 )
        (**v7)(v7, 1);
      ++v5;
      v6 += 8;
    }
    while ( v5 < *((_DWORD *)this + 124) );
  }
  v8 = (void *)*((_QWORD *)this + 64);
  if ( v8 )
    free(v8);
  v9 = (void *)*((_QWORD *)this + 61);
  if ( v9 )
    free(v9);
  NodeSprite::~NodeSprite(this);
}

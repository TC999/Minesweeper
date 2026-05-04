void __fastcall NodeBase::Update(NodeBase *this, float a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rsi

  v2 = 0;
  if ( a2 > 0.0 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 64) )
    {
      v5 = 0;
      do
      {
        AnimationState::Update(*(AnimationState **)(*((_QWORD *)this + 31) + v5));
        ++v4;
        v5 += 8;
      }
      while ( v4 < *((_DWORD *)this + 64) );
    }
  }
  if ( *((_DWORD *)this + 20) )
  {
    v6 = 0;
    do
    {
      (***(void (__fastcall ****)(_QWORD))(v6 + *((_QWORD *)this + 12)))(*(_QWORD *)(v6 + *((_QWORD *)this + 12)));
      ++v2;
      v6 += 8;
    }
    while ( v2 < *((_DWORD *)this + 20) );
  }
}

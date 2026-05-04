void __fastcall NodeBase::HandleEvent(NodeBase *this, struct Event *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp

  v2 = 0;
  *((_QWORD *)a2 + 1) = this;
  if ( *((_DWORD *)this + 50) )
  {
    v5 = 0;
    do
    {
      (***(void (__fastcall ****)(_QWORD, struct Event *))(*((_QWORD *)this + 27) + v5))(
        *(_QWORD *)(*((_QWORD *)this + 27) + v5),
        a2);
      ++v2;
      v5 += 8;
    }
    while ( v2 < *((_DWORD *)this + 50) );
  }
}

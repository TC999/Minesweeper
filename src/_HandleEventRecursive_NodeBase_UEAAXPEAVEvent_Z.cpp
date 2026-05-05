void __fastcall NodeBase::HandleEventRecursive(NodeBase *this, struct Event *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi

  (*(void (__fastcall **)(NodeBase *))(*(_QWORD *)this + 16LL))(this);
  v4 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v5 = 0;
    do
    {
      (*(void (__fastcall **)(_QWORD, struct Event *))(**(_QWORD **)(v5 + *((_QWORD *)this + 12)) + 24LL))(
        *(_QWORD *)(v5 + *((_QWORD *)this + 12)),
        a2);
      ++v4;
      v5 += 8;
    }
    while ( v4 < *((_DWORD *)this + 20) );
  }
}

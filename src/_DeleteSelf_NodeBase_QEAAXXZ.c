void __fastcall NodeBase::DeleteSelf(NodeBase *this)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  NodeBase **i; // rax

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  if ( *(_DWORD *)(v1 + 80) )
  {
    for ( i = *(NodeBase ***)(v1 + 96); *i != this; ++i )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 80) )
        return;
    }
    Array<IEventListener *>::Add((__int64)g_pUserInterface + 232, *(_QWORD *)(*(_QWORD *)(v1 + 96) + 8 * v2));
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 96) + 8 * v2) + 200LL) = 0;
    Array<NodeBase *>::Remove(v1 + 80, v2);
  }
}

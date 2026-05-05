void __fastcall NodeBase::MoveToFront(NodeBase *this)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int *v4; // rcx
  NodeBase **v5; // r8

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  if ( v1 )
  {
    v4 = (unsigned int *)(v1 + 80);
    if ( *(_DWORD *)(v1 + 80) )
    {
      v5 = *(NodeBase ***)(v1 + 96);
      while ( *v5 != this )
      {
        ++v2;
        ++v5;
        if ( v2 >= *v4 )
          goto LABEL_6;
      }
      Array<NodeBase *>::Remove((__int64)v4, v2);
      Array<IEventListener *>::Add(*((_QWORD *)this + 17) + 80LL, (__int64)this);
    }
    else
    {
LABEL_6:
      Log(0x100u, 1210, "NodeBase.cpp", L"Couldn't find ourselves in our parent child list. Not good.");
    }
  }
}

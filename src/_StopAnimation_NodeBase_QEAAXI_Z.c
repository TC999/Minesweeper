void __fastcall NodeBase::StopAnimation(NodeBase *this, __int64 a2)
{
  int v2; // ebx
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+28h] [rbp-10h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet((char *)this + 240, a2, &v5) )
  {
    *(_BYTE *)(v5 + 40) = 0;
  }
  else
  {
    v4 = 2;
    v3 = v2;
    Log(0x200u, 2070, "NodeBase.cpp", L"Cannot set non existing animation: %d (type : %d)", v3, v4);
  }
}

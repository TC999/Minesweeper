void __fastcall NodeBase::SetAnimationReverse(NodeBase *this, __int64 a2, char a3)
{
  int v4; // edi
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet((char *)this + 240, a2, &v7) )
  {
    *(_BYTE *)(v7 + 41) = a3;
  }
  else
  {
    v6 = 2;
    v5 = v4;
    Log(0x200u, 1502, "NodeBase.cpp", L"Cannot set non existing animation: %d (type : %d)", v5, v6);
  }
}

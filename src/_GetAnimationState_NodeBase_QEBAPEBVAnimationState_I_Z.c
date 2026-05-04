const struct AnimationState *__fastcall NodeBase::GetAnimationState(NodeBase *this, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet((char *)this + 240, a2, &v6) )
    return (const struct AnimationState *)v6;
  v5 = 2;
  v4 = v2;
  Log(0x200u, 515, "NodeBase.cpp", L"Cannot get non existing animation: %d (type : %d)", v4, v5);
  return 0;
}

void __fastcall NodeBase::CompleteAnimation(NodeBase *this, __int64 a2)
{
  int v2; // ebx
  AnimationState *v3; // rbx
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]
  AnimationState *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet((char *)this + 240, a2, &v6) )
  {
    v3 = v6;
    *((_BYTE *)v6 + 40) = 1;
    *((_BYTE *)v3 + 42) = 0;
    while ( !*((_BYTE *)v3 + 24) )
      AnimationState::Update(v3);
    *((_BYTE *)v3 + 42) = 0;
  }
  else
  {
    v5 = 2;
    v4 = v2;
    Log(0x200u, 122, "NodeBase.cpp", L"Cannot set non existing animation: %d (type : %d)", v4, v5);
  }
}

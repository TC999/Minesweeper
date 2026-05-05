void __fastcall NodeBase::SetAnimationTime(NodeBase *this, __int64 a2, float a3)
{
  int v3; // ebx
  AnimationState *v4; // rbx
  float v5; // xmm0_4
  char v6; // di
  char v7; // si
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  AnimationState *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet((char *)this + 240, a2, &v10) )
  {
    v4 = v10;
    v5 = *((float *)v10 + 15);
    v6 = *((_BYTE *)v10 + 40);
    v7 = *((_BYTE *)v10 + 41);
    *((_BYTE *)v10 + 42) = 1;
    *((_BYTE *)v4 + 40) = 1;
    if ( v5 <= a3 )
    {
      *((_BYTE *)v4 + 41) = 0;
      if ( a3 > v5 )
      {
        do
        {
          if ( *((_BYTE *)v4 + 24) )
            break;
          AnimationState::Update(v4);
        }
        while ( a3 > *((float *)v4 + 15) );
      }
    }
    else
    {
      *((_BYTE *)v4 + 41) = 1;
      do
      {
        if ( *((_BYTE *)v4 + 24) )
          break;
        AnimationState::Update(v4);
      }
      while ( *((float *)v4 + 15) > a3 );
    }
    *((_BYTE *)v4 + 42) = 0;
    *((_BYTE *)v4 + 40) = v6;
    *((_BYTE *)v4 + 41) = v7;
  }
  else
  {
    v9 = 2;
    v8 = v3;
    Log(0x200u, 1526, "NodeBase.cpp", L"Cannot set non existing animation: %d (type : %d)", v8, v9);
  }
}

struct NodeBase *__fastcall UserInterface::GetCurrentFocus(UserInterface *this)
{
  __int64 v1; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 6);
  if ( (_DWORD)v1 == -1 )
    return 0;
  if ( !(unsigned __int8)SortedListI<NodeBase *>::TryGet(this, v1, &v4) )
  {
    UserInterface::ClearFocus(this);
    return 0;
  }
  return (struct NodeBase *)v4;
}

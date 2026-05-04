struct Access_Node *__fastcall UserInterface::Access_GetANodeFor(UserInterface *this, struct NodeBase *a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 i; // rcx

  v2 = *((_DWORD *)this + 8);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = *((_QWORD *)this + 6);
  for ( i = v4; *(struct NodeBase **)(*(_QWORD *)i + 16LL) != a2; i += 8 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return *(struct Access_Node **)(v4 + 8 * v3);
}

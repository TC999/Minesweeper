__int64 __fastcall Access_Node::Release(Access_Node *this)
{
  __int64 v1; // r8

  v1 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) )
    return (unsigned int)v1;
  (*(void (__fastcall **)(Access_Node *, __int64, __int64))(*(_QWORD *)this + 224LL))(this, 1, v1);
  return 0;
}

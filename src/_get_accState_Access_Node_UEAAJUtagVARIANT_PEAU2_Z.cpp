__int64 __fastcall Access_Node::get_accState(Access_Node *this, struct tagVARIANT *a2, struct tagVARIANT *a3)
{
  if ( a2->vt != 3 || a2->lVal )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 2) )
    return 2147500037LL;
  a3->vt = 3;
  a3->lVal = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
  return 0;
}

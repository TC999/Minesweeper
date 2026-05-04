__int64 __fastcall Access_Node::get_accName(Access_Node *this, struct tagVARIANT *a2, unsigned __int16 **a3)
{
  const OLECHAR *v6; // rax

  if ( a2->vt != 3 || a2->lVal )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 2) )
    return 2147500037LL;
  if ( !(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2)) )
    return 1;
  v6 = (const OLECHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2));
  *a3 = SysAllocString(v6);
  return 0;
}

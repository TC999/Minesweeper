__int64 __fastcall Access_Node::get_accRole(Access_Node *this, struct tagVARIANT *a2, struct tagVARIANT *a3)
{
  __int64 result; // rax

  if ( a2->vt != 3 || a2->lVal )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 2) )
    return 2147500037LL;
  a3->vt = 3;
  result = 0;
  a3->lVal = *(_DWORD *)(*((_QWORD *)this + 2) + 192LL);
  return result;
}

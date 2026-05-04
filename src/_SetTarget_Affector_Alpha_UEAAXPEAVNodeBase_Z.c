void __fastcall Affector_Alpha::SetTarget(Affector_Alpha *this, struct NodeBase *a2)
{
  int v2; // eax
  _DWORD *i; // r8

  v2 = 0;
  if ( a2 && *((_DWORD *)a2 + 26) )
  {
    for ( i = (_DWORD *)*((_QWORD *)a2 + 15); *i != 1; ++i )
    {
      if ( (unsigned int)++v2 >= *((_DWORD *)a2 + 26) )
        return;
    }
    *((_QWORD *)this + 1) = a2;
  }
}

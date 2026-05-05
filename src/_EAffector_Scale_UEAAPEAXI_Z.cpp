Affector_Scale *__fastcall Affector_Scale::`vector deleting destructor'(Affector_Scale *this, char a2)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
    free(v3);
  *(_QWORD *)this = &Affector_Base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

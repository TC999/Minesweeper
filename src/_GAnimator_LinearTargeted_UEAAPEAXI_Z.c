void **__fastcall Animator_LinearTargeted::`scalar deleting destructor'(void **this, char a2)
{
  *this = &Animator_Base::`vftable';
  operator delete(this[1]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

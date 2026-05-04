Affector_Base *__fastcall Affector_Base::`scalar deleting destructor'(Affector_Base *this, char a2)
{
  *(_QWORD *)this = &Affector_Base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

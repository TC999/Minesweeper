// Hidden C++ exception states: #wind=1
void **__fastcall Event_AnimationFrame::`vector deleting destructor'(void **this, char a2)
{
  *this = &Event_AnimationFrame::`vftable';
  operator delete(this[5]);
  *this = &Event::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

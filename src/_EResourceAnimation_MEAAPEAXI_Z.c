// Hidden C++ exception states: #wind=1
void **__fastcall ResourceAnimation::`vector deleting destructor'(void **this, char a2)
{
  AnimationDescriptor *v4; // rcx

  *this = &ResourceAnimation::`vftable';
  operator delete(this[7]);
  v4 = (AnimationDescriptor *)this[6];
  if ( v4 )
    AnimationDescriptor::`scalar deleting destructor'(v4, 1u);
  *this = &ResourceBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  operator delete(this[4]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

ResourceBase *__fastcall ResourceBase::`vector deleting destructor'(ResourceBase *this, char a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ResourceBase::`vftable';
  operator delete(*((void **)this + 4));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

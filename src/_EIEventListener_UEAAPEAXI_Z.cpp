IEventListener *__fastcall IEventListener::`vector deleting destructor'(IEventListener *this, char a2)
{
  *(_QWORD *)this = &IEventListener::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

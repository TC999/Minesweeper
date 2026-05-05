Event_FocusUnSelect *__fastcall Event_FocusUnSelect::`vector deleting destructor'(Event_FocusUnSelect *this, char a2)
{
  *(_QWORD *)this = &Event::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

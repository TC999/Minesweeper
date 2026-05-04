ITimerEventPrototype *__fastcall ITimerEventPrototype::`scalar deleting destructor'(
        ITimerEventPrototype *this,
        char a2)
{
  *(_QWORD *)this = &ITimerEventPrototype::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

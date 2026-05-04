Thread *__fastcall Thread::`vector deleting destructor'(Thread *this, char a2)
{
  *(_QWORD *)this = &Thread::`vftable';
  Thread::End(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

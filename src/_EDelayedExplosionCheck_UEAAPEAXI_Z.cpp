// Hidden C++ exception states: #wind=1
DelayedExplosionCheck *__fastcall DelayedExplosionCheck::`vector deleting destructor'(
        DelayedExplosionCheck *this,
        char a2)
{
  *(_QWORD *)this = &DelayedExplosionCheck::`vftable';
  if ( *((_BYTE *)this + 12) )
    Timer::DeleteEvent(g_pTimer, *((_DWORD *)this + 2));
  *(_QWORD *)this = &ITimerEventPrototype::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

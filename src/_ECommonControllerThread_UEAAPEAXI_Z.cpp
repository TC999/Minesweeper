// Hidden C++ exception states: #wind=1
CommonControllerThread *__fastcall CommonControllerThread::`vector deleting destructor'(
        CommonControllerThread *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CommonControllerThread::`vftable';
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1);
  *(_QWORD *)this = &Thread::`vftable';
  Thread::End(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

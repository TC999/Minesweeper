// Hidden C++ exception states: #wind=5
COberStatusbar::COberParentReflect *__fastcall COberStatusbar::COberParentReflect::`scalar deleting destructor'(
        COberStatusbar::COberParentReflect *this,
        char a2)
{
  struct _SLIST_ENTRY *v4; // rdx

  v4 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 5);
  if ( v4 )
    InterlockedPushEntrySList(__AtlThunkPool, v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

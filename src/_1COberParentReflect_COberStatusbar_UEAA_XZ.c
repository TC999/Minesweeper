// Hidden C++ exception states: #wind=5
void __fastcall COberStatusbar::COberParentReflect::~COberParentReflect(COberStatusbar::COberParentReflect *this)
{
  struct _SLIST_ENTRY *v1; // rdx

  v1 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 5);
  if ( v1 )
    InterlockedPushEntrySList(__AtlThunkPool, v1);
}

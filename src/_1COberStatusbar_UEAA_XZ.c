// Hidden C++ exception states: #wind=11
void __fastcall COberStatusbar::~COberStatusbar(COberStatusbar *this)
{
  struct _SLIST_ENTRY *v2; // rdx
  struct _SLIST_ENTRY *v3; // rdx

  *(_QWORD *)this = &COberStatusbar::`vftable';
  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 14);
  if ( v2 )
    InterlockedPushEntrySList(__AtlThunkPool, v2);
  v3 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 5);
  if ( v3 )
    InterlockedPushEntrySList(__AtlThunkPool, v3);
}

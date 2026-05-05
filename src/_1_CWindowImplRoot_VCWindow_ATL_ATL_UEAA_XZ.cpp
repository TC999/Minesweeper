// Hidden C++ exception states: #wind=2
PSLIST_ENTRY __fastcall ATL::CWindowImplRoot<ATL::CWindow>::~CWindowImplRoot<ATL::CWindow>(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rdx
  PSLIST_ENTRY result; // rax

  v1 = *(struct _SLIST_ENTRY **)(a1 + 40);
  if ( v1 )
    return InterlockedPushEntrySList(__AtlThunkPool, v1);
  return result;
}

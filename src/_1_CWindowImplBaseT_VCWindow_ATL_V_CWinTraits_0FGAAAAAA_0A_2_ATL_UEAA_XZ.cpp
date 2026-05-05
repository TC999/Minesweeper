// Hidden C++ exception states: #wind=3
PSLIST_ENTRY __fastcall ATL::CWindowImplBaseT<ATL::CWindow,ATL::CWinTraits<1442840576,0>>::~CWindowImplBaseT<ATL::CWindow,ATL::CWinTraits<1442840576,0>>(
        __int64 a1)
{
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *v2; // rdx

  result = (PSLIST_ENTRY)(a1 + 16);
  v2 = *(struct _SLIST_ENTRY **)(a1 + 40);
  if ( v2 )
    return InterlockedPushEntrySList(__AtlThunkPool, v2);
  return result;
}

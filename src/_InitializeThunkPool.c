signed __int64 _InitializeThunkPool()
{
  PPEB ProcessEnvironmentBlock; // rbx
  union _SLIST_HEADER *AltThunkSListPtr; // rax
  HANDLE ProcessHeap; // rax
  signed __int64 result; // rax
  void *v4; // rdi
  HANDLE v5; // rax

  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  AltThunkSListPtr = (union _SLIST_HEADER *)ProcessEnvironmentBlock->AltThunkSListPtr;
  if ( !AltThunkSListPtr )
  {
    ProcessHeap = GetProcessHeap();
    result = (signed __int64)HeapAlloc(ProcessHeap, 0, 0x10u);
    v4 = (void *)result;
    if ( !result )
      return result;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ProcessEnvironmentBlock->AltThunkSListPtr, result, 0) )
    {
      v5 = GetProcessHeap();
      HeapFree(v5, 0, v4);
    }
    AltThunkSListPtr = (union _SLIST_HEADER *)ProcessEnvironmentBlock->AltThunkSListPtr;
  }
  __AtlThunkPool = AltThunkSListPtr;
  return 1;
}

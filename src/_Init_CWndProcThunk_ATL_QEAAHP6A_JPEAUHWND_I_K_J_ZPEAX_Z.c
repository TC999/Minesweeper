__int64 __fastcall ATL::CWndProcThunk::Init(
        ATL::CWndProcThunk *this,
        __int64 (*a2)(HWND, unsigned int, unsigned __int64, __int64),
        void *a3)
{
  unsigned int v3; // ebx
  void *v7; // rax
  char *v8; // rbx
  HANDLE CurrentProcess; // rax

  v3 = 0;
  if ( *((_QWORD *)this + 3) || (v7 = __AllocStdCallThunk_cmn(), (*((_QWORD *)this + 3) = v7) != 0) )
  {
    if ( a2 || a3 )
    {
      v8 = (char *)*((_QWORD *)this + 3);
      *(_WORD *)v8 = -18104;
      *(_QWORD *)(v8 + 2) = a3;
      *((_WORD *)v8 + 5) = -18360;
      *(_QWORD *)(v8 + 12) = a2;
      *((_WORD *)v8 + 10) = -7937;
      CurrentProcess = GetCurrentProcess();
      FlushInstructionCache(CurrentProcess, v8, 0x16u);
    }
    return 1;
  }
  return v3;
}

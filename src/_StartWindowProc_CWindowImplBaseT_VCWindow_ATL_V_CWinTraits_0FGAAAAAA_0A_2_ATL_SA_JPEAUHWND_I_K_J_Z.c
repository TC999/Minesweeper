__int64 __fastcall ATL::CWindowImplBaseT<ATL::CWindow,ATL::CWinTraits<1442840576,0>>::StartWindowProc(
        HWND hWnd,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 (*v14)(HWND, unsigned int, unsigned __int64, __int64); // rax
  __int64 (__fastcall *v15)(HWND, _QWORD, __int64, __int64); // rbx

  v8 = 0;
  EnterCriticalSection(&CriticalSection);
  v9 = qword_1000A8500;
  if ( qword_1000A8500 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v11 = 0;
    while ( *(_DWORD *)(v9 + 8) != CurrentThreadId )
    {
      v11 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_10;
    }
    if ( v11 )
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(v9 + 16);
    else
      qword_1000A8500 = *(_QWORD *)(v9 + 16);
    v8 = *(__int64 **)v9;
  }
LABEL_10:
  LeaveCriticalSection(&CriticalSection);
  if ( !v8 )
    return 0;
  v13 = *v8;
  v8[1] = (__int64)hWnd;
  v14 = (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))(*(__int64 (__fastcall **)(__int64 *))(v13 + 16))(v8);
  ATL::CWndProcThunk::Init((ATL::CWndProcThunk *)(v8 + 2), v14, v8);
  v15 = (__int64 (__fastcall *)(HWND, _QWORD, __int64, __int64))v8[5];
  SetWindowLongPtrW(hWnd, -4, (LONG_PTR)v15);
  return v15(hWnd, a2, a3, a4);
}

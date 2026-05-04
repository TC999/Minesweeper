HWND __fastcall ATL::CWindowImpl<COberStatusbar,ATL::CWindow,ATL::CWinTraits<1442840576,0>>::Create(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        char a5,
        int a6,
        HMENU a7)
{
  HWND hWndParent; // r13
  __int64 v9; // rbp
  unsigned __int16 v10; // r12
  HMENU hMenu; // rbx
  int *v12; // rax

  hWndParent = g_hWnd;
  v9 = 0;
  v10 = ATL::AtlModuleRegisterWndClassInfoT<ATL::AtlModuleRegisterWndClassInfoParamW>(
          &ATL::_AtlBaseModule,
          &ATL::_AtlWinModule,
          &`COberStatusbar::GetWndClassInfo'::`2'::wc,
          &qword_1000A6DA0,
          a5);
  if ( qword_1000A6D88 || (qword_1000A6D88 = (__int64)__AllocStdCallThunk_cmn()) != 0 )
  {
    if ( v10 )
    {
      hMenu = (HMENU)&g_theStatusbar;
      qword_1000A6D70 = (__int64)&g_theStatusbar;
      dword_1000A6D78 = GetCurrentThreadId();
      EnterCriticalSection(&CriticalSection);
      qword_1000A6D80 = qword_1000A8500;
      qword_1000A8500 = (__int64)&qword_1000A6D70;
      LeaveCriticalSection(&CriticalSection);
      v12 = (int *)&ATL::CWindow::rcDefault;
      if ( a7 )
        hMenu = a7;
      if ( a3 )
        v12 = a3;
      return CreateWindowExW(
               0x2000000u,
               (LPCWSTR)v10,
               0,
               0x50000000u,
               *v12,
               v12[1],
               v12[2] - *v12,
               v12[3] - v12[1],
               hWndParent,
               hMenu,
               hInstance,
               0);
    }
  }
  else
  {
    SetLastError(0xEu);
  }
  return (HWND)v9;
}

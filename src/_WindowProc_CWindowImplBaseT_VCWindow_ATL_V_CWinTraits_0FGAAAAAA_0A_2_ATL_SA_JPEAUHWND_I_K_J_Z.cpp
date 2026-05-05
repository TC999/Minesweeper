LRESULT __fastcall ATL::CWindowImplBaseT<ATL::CWindow,ATL::CWinTraits<1442840576,0>>::WindowProc(
        __int64 a1,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  LONG_PTR WindowLongPtrW; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  UINT v15; // [rsp+48h] [rbp-50h]
  WPARAM v16; // [rsp+50h] [rbp-48h]
  LPARAM v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]
  int v20; // [rsp+68h] [rbp-30h]
  int v21; // [rsp+70h] [rbp-28h]
  int v22; // [rsp+74h] [rbp-24h]
  LRESULT v23; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v16 = a3;
  v17 = a4;
  v21 = 56;
  v22 = 1;
  v15 = a2;
  v14 = v6;
  *(_QWORD *)(a1 + 48) = &v14;
  if ( !(**(unsigned int (__fastcall ***)(__int64, __int64, _QWORD, WPARAM, LPARAM, LRESULT *, _DWORD))a1)(
          a1,
          v6,
          a2,
          a3,
          a4,
          &v23,
          0) )
  {
    if ( a2 == 130 )
    {
      WindowLongPtrW = GetWindowLongPtrW(*(HWND *)(a1 + 8), -4);
      v23 = CallWindowProcW(*(WNDPROC *)(a1 + 64), *(HWND *)(a1 + 8), 0x82u, a3, a4);
      if ( *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(a1 + 64) != DefWindowProcW
        && GetWindowLongPtrW(*(HWND *)(a1 + 8), -4) == WindowLongPtrW )
      {
        SetWindowLongPtrW(*(HWND *)(a1 + 8), -4, *(_QWORD *)(a1 + 64));
      }
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    else
    {
      v23 = CallWindowProcW(*(WNDPROC *)(a1 + 64), *(HWND *)(a1 + 8), a2, a3, a4);
    }
  }
  v11 = *(_DWORD *)(a1 + 56);
  if ( (v11 & 1) == 0 || v4 )
  {
    *(_QWORD *)(a1 + 48) = v4;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 56) = v11 & 0xFFFFFFFE;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v12);
  }
  return v23;
}

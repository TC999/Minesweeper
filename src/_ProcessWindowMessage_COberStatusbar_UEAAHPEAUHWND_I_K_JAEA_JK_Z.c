__int64 __fastcall COberStatusbar::ProcessWindowMessage(
        COberStatusbar *this,
        HWND a2,
        unsigned __int64 a3,
        WPARAM a4,
        COberStatusbar *lParam,
        __int64 *a6,
        unsigned int a7)
{
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  __int64 v10; // rbx
  HWND v12; // rbx
  __int64 (*v13)(HWND, unsigned int, unsigned __int64, __int64); // rax
  LONG_PTR v14; // rax
  LRESULT v15; // rax
  char *v16; // r9
  int *v17; // [rsp+20h] [rbp-8h]

  v7 = 0;
  v8 = a4;
  if ( a7 )
    return 0;
  if ( (_DWORD)a3 != 2 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        v12 = (HWND)*((_QWORD *)lParam + 3);
        v13 = (__int64 (*)(HWND, unsigned int, unsigned __int64, __int64))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 9) + 16LL))((char *)this + 72);
        if ( (unsigned int)ATL::CWndProcThunk::Init((COberStatusbar *)((char *)this + 88), v13, (char *)this + 72) )
        {
          v14 = SetWindowLongPtrW(v12, -4, *((_QWORD *)this + 14));
          if ( v14 )
          {
            *((_QWORD *)this + 17) = v14;
            *((_QWORD *)this + 10) = v12;
          }
        }
        *a6 = 0;
        return 0;
      case 0x113:
        *a6 = COberStatusbar::onTimer(this, a4, (unsigned __int8)a4, a4, v17);
        return 1;
      case 0x202B:
        if ( !lParam )
        {
LABEL_20:
          *a6 = v7;
          return 1;
        }
        v15 = COberStatusbar::onDrawItem(lParam, 0x202Bu, a3, a4, v17);
LABEL_19:
        v7 = v15;
        goto LABEL_20;
      case 0x464:
        v15 = COberStatusbar::onSetTextEffect(this, a4, (unsigned __int64)lParam, (unsigned __int8)a4, v17);
        goto LABEL_19;
      case 0x465:
        if ( (unsigned __int8)a4 > 0xBu )
          goto LABEL_20;
        v16 = (char *)this + 288 * (unsigned __int8)a4 + 144;
        *((_DWORD *)v16 + 4) = (_DWORD)lParam;
        *((_QWORD *)v16 + 1) = 0;
        *((_DWORD *)v16 + 5) = 0;
        *((_DWORD *)v16 + 6) = 0;
        *(_QWORD *)v16 = &COberStatusbar::_pane_effects;
        v15 = SendMessageW(*((HWND *)this + 1), 0x40Bu, v8 | 0x1000LL, (LPARAM)v16);
        goto LABEL_19;
    }
    if ( (unsigned int)a3 > 0x2111 )
    {
      if ( (unsigned int)a3 < 0x2114
        || (unsigned int)a3 > 0x2115 && ((unsigned int)a3 <= 0x2131 || (unsigned int)a3 > 0x2138 && (_DWORD)a3 != 8720) )
      {
        return 0;
      }
    }
    else if ( (_DWORD)a3 != 8465
           && ((unsigned int)a3 < 0x202B || (unsigned int)a3 > 0x202F && (_DWORD)a3 != 8249 && (_DWORD)a3 != 8270) )
    {
      return 0;
    }
    *a6 = DefWindowProcW(a2, (int)a3 - 0x2000, a4, (LPARAM)lParam);
    return 1;
  }
  v10 = *((_QWORD *)this + 14);
  if ( v10 == GetWindowLongPtrW(*((HWND *)this + 10), -4) )
  {
    if ( SetWindowLongPtrW(*((HWND *)this + 10), -4, *((_QWORD *)this + 17)) )
    {
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 17) = DefWindowProcW;
    }
  }
  *a6 = 0;
  return 1;
}

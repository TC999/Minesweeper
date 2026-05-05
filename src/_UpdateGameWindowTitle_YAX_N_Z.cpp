// Hidden C++ exception states: #wind=4
void __fastcall UpdateGameWindowTitle(char a1)
{
  const WCHAR *v2; // rax
  const unsigned __int16 *v3; // rbx
  __int64 v4; // rax
  const unsigned __int16 *v5; // rbx
  __int64 v6; // rax
  const unsigned __int16 *v7; // rbx
  __int64 v8; // rax
  HCURSOR CursorW; // rax
  LONG_PTR v10; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-78h] BYREF
  LPCWSTR lpString; // [rsp+30h] [rbp-68h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  _BYTE v14[16]; // [rsp+40h] [rbp-58h] BYREF
  void *Block; // [rsp+50h] [rbp-48h]
  _BYTE v16[16]; // [rsp+58h] [rbp-40h] BYREF
  void *v17; // [rsp+68h] [rbp-30h]
  _BYTE v18[16]; // [rsp+70h] [rbp-28h] BYREF
  void *v19; // [rsp+80h] [rbp-18h]

  v13 = -2;
  if ( a1 != byte_1000ABAA8 )
  {
    byte_1000ABAA8 = a1;
    if ( a1 )
    {
      v11[0] = 0;
      v11[1] = 0;
      lpString = 0;
      if ( g_bInitializing )
      {
        v3 = (const unsigned __int16 *)*((_QWORD *)Str::Str((Str *)v14, 0x37Au) + 2);
        v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 48LL))(g_pInterface);
        Str::Format((Str *)v11, v3, v4);
        operator delete(Block);
      }
      else if ( g_bDoubleDPI )
      {
        v7 = (const unsigned __int16 *)*((_QWORD *)Str::Str((Str *)v18, 0x383u) + 2);
        v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 48LL))(g_pInterface);
        Str::Format((Str *)v11, v7, v8);
        operator delete(v19);
      }
      else
      {
        v5 = (const unsigned __int16 *)*((_QWORD *)Str::Str((Str *)v16, 0x382u) + 2);
        v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 48LL))(g_pInterface);
        Str::Format((Str *)v11, v5, v6);
        operator delete(v17);
      }
      SetWindowTextW(g_hWnd, lpString);
      operator delete((void *)lpString);
    }
    else
    {
      v2 = (const WCHAR *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)g_pInterface + 48LL))(g_pInterface);
      SetWindowTextW(g_hWnd, v2);
    }
    CursorW = LoadCursorW(0, (LPCWSTR)(a1 != 0 ? 32514LL : 32512LL));
    v10 = (LONG_PTR)CursorW;
    if ( CursorW )
    {
      SetCursor(CursorW);
      SetClassLongPtrW(g_hWnd, -12, v10);
    }
  }
}

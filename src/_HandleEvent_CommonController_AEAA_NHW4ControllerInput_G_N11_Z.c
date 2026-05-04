char __fastcall CommonController::HandleEvent(HWND *a1, int a2, int a3, __int16 a4, char a5, bool a6, bool a7)
{
  char v7; // bl
  __int64 (__fastcall ***v9)(_QWORD, _DWORD *, _DWORD *, _WORD *, _BYTE *, bool *, bool *); // rcx
  __int16 v10; // ax
  char v11; // di
  HWND v12; // rcx
  int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF
  __int16 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v7 = 0;
  v9 = (__int64 (__fastcall ***)(_QWORD, _DWORD *, _DWORD *, _WORD *, _BYTE *, bool *, bool *))a1[14];
  v10 = a4;
  a5 = 0;
  v11 = 0;
  if ( !v9 || !a3 )
    goto LABEL_5;
  v11 = (**v9)(v9, &v14, &v15, &v16, &a5, &a6, &a7);
  if ( !v11 )
  {
    v7 = a5;
    v10 = v16;
    a2 = v14;
LABEL_5:
    v12 = *a1;
    v14 = a2 + 1;
    FakeKeyPress(v12, v10, v7, a6, a7, a2 + 1);
  }
  return v11;
}

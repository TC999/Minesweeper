// Hidden C++ exception states: #wind=4
char __fastcall DllFileMgr::Open(DllFileMgr *this, LPCWSTR *a2, __int64 a3, const unsigned __int16 *a4)
{
  bool v5; // bp
  DllFileMgr *v6; // rsi
  HMODULE Library; // r13
  DWORD LastError; // r12d
  const wchar_t *v9; // r9
  char v10; // di
  Str *ModulePath; // rax
  __int64 *v12; // rax
  unsigned int v13; // ebx
  WCHAR *v14; // rbp
  HMODULE v15; // rax
  _BYTE v17[16]; // [rsp+38h] [rbp-50h] BYREF
  LPCWSTR lpLibFileName; // [rsp+48h] [rbp-40h]
  const wchar_t *v19[2]; // [rsp+50h] [rbp-38h] BYREF
  void *Block; // [rsp+60h] [rbp-28h]

  v5 = g_bDebugEnabled;
  v6 = qword_1000AAC98;
  DllFileMgr::Close(qword_1000AAC98);
  Library = LoadLibraryExW(a2[2], 0, 2u);
  LastError = GetLastError();
  v9 = L"failure";
  v10 = 0;
  if ( Library )
    v9 = L"success";
  Log(4u, L"Loading resource dll '%s', result = %s (0x%08X)", a2[2], v9, LastError);
  if ( Library )
  {
    Array<IEventListener *>::Add((__int64)v6 + 10272, (__int64)Library);
    if ( (unsigned int)*a2 > 4 )
    {
      Str::SubString((__int64)a2, (Str *)v19, 0, (unsigned int)*a2 - 4);
      v13 = 2;
      while ( 1 )
      {
        Str::Str((Str *)v17, v19);
        Str::AppendF((Str *)v17, L"%d.dll", v13);
        v14 = (WCHAR *)lpLibFileName;
        v15 = LoadLibraryExW(lpLibFileName, 0, 2u);
        if ( !v15 )
          break;
        Array<IEventListener *>::Add((__int64)v6 + 10272, (__int64)v15);
        operator delete(v14);
        if ( ++v13 >= 0x64 )
          goto LABEL_13;
      }
      operator delete(v14);
LABEL_13:
      operator delete(Block);
    }
  }
  else if ( LastError == 2 && v5 )
  {
    ModulePath = GetModulePath((Str *)v19);
    Str::operator=((__int64)v6 + 10296, (__int64)ModulePath);
    operator delete(Block);
    v12 = (__int64 *)Str::Str((Str *)v19, L"input\\");
    Str::operator+=((__int64)v6 + 10296, v12);
    operator delete(Block);
    Log(4u, L"Falling back to loose files, loaded from '%s'...", *((_QWORD *)v6 + 1289));
  }
  if ( *((_DWORD *)v6 + 2568) || *((_QWORD *)v6 + 1287) )
    return 1;
  return v10;
}

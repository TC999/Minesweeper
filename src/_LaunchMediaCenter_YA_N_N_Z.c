bool __fastcall LaunchMediaCenter()
{
  bool result; // al
  WCHAR Src[32]; // [rsp+30h] [rbp-268h] BYREF
  WCHAR Dst[264]; // [rsp+70h] [rbp-228h] BYREF

  result = (_BYTE)g_bMediaCenter
        && (memset(Dst, 0, 520),
            memcpy(Src, L"%SystemRoot%\\ehome\\ehshell.exe", 0x3Eu),
            ExpandEnvironmentStringsW(Src, Dst, 0x104u))
        && PathFileExistsW(Dst)
        && (__int64)ShellExecuteW(0, L"open", Dst, 0, 0, 1) > 32;
  return result;
}

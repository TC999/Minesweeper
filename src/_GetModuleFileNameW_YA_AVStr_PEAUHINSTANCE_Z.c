Str *__fastcall GetModuleFileNameW(Str *a1)
{
  DWORD ModuleFileNameW; // eax
  WCHAR *v3; // rdx
  WCHAR Filename[1024]; // [rsp+30h] [rbp-818h] BYREF

  ModuleFileNameW = GetModuleFileNameW(0, Filename, 0x400u);
  if ( !ModuleFileNameW || (v3 = Filename, ModuleFileNameW >= 0x400) )
    v3 = (WCHAR *)&String;
  Str::Str(a1, v3);
  return a1;
}

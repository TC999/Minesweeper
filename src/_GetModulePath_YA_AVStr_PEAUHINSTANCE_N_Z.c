// Hidden C++ exception states: #wind=2
Str *__fastcall GetModulePath(Str *a1)
{
  Str *ModuleFileNameW; // rax
  _BYTE v4[16]; // [rsp+28h] [rbp-20h] BYREF
  void *Block; // [rsp+38h] [rbp-10h]

  ModuleFileNameW = GetModuleFileNameW((Str *)v4);
  GetPathOnly(a1, *((wchar_t **)ModuleFileNameW + 2));
  operator delete(Block);
  return a1;
}

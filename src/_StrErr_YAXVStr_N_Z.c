// Hidden C++ exception states: #wind=1
void __fastcall StrErr(void **a1)
{
  Str *v2; // rax
  _BYTE v3[32]; // [rsp+28h] [rbp-20h] BYREF

  v2 = Str::Str((Str *)v3, (const struct Str *)a1);
  StrErr((__int64)v2);
  operator delete(a1[2]);
}

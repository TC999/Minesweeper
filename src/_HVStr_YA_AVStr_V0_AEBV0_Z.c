// Hidden C++ exception states: #wind=3
Str *__fastcall operator+<Str>(Str *this, void **a2, __int64 a3)
{
  const struct Str *v6; // rax
  _BYTE v8[16]; // [rsp+28h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-20h]

  Str::Str((Str *)v8, (const struct Str *)a2);
  v6 = (const struct Str *)Str::operator+=(v8, a3);
  Str::Str(this, v6);
  operator delete(Block);
  operator delete(a2[2]);
  return this;
}

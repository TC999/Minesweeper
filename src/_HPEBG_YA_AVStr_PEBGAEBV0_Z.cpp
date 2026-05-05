// Hidden C++ exception states: #wind=2
Str *__fastcall operator+<unsigned short const *>(Str *this, const unsigned __int16 *a2, __int64 a3)
{
  const struct Str *v5; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-20h] BYREF
  void *Block; // [rsp+38h] [rbp-10h]

  Str::Str((Str *)v7, a2);
  v5 = (const struct Str *)Str::operator+=(v7, a3);
  Str::Str(this, v5);
  operator delete(Block);
  return this;
}

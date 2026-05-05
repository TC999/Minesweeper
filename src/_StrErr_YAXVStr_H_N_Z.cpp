// Hidden C++ exception states: #wind=2
void __fastcall StrErr(__int64 a1)
{
  _BYTE v2[16]; // [rsp+28h] [rbp-20h] BYREF
  void *Block; // [rsp+38h] [rbp-10h]

  operator+<unsigned short const *>((Str *)v2, L"!!! ", a1);
  Log(0x30000u, (const unsigned __int16 *)Block);
  operator delete(Block);
  operator delete(*(void **)(a1 + 16));
}

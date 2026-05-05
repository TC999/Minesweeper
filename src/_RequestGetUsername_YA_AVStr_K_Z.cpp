// Hidden C++ exception states: #wind=2
Str *__fastcall RequestGetUsername(Str *a1, ULONG a2)
{
  WCHAR *v3; // rax
  wchar_t *v4; // rbx
  const wchar_t *v6[2]; // [rsp+28h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-20h]
  ULONG nSize; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h]

  nSize = a2;
  v9 = 0;
  Str::Str((Str *)v6, &String);
  nSize = 64;
  v3 = (WCHAR *)operator new(saturated_mul(0x40u, 2u));
  v4 = v3;
  if ( v3 )
  {
    if ( GetUserNameExW(NameDisplay, v3, &nSize) || (nSize = 64, GetUserNameW(v4, &nSize)) )
      Str::operator=((__int64)v6, v4);
    operator delete(v4);
    Str::Str(a1, v6);
    v9 = 1;
    operator delete(Block);
    return a1;
  }
  else
  {
    Str::Str(a1, v6);
    v9 = 1;
    operator delete(Block);
    return a1;
  }
}

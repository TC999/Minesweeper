// Hidden C++ exception states: #wind=4
Str *__fastcall XmlUtil::GetAttrAsStr(Str *a1, __int64 a2, __int64 a3, const unsigned __int16 *a4, _BYTE *a5)
{
  const unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rdi
  unsigned int v10; // eax
  Str *v11; // rbx
  void **v12; // rax
  void **v13; // rax
  Str *v14; // rax
  __int64 v15; // rdx
  _BYTE v17[16]; // [rsp+28h] [rbp-90h] BYREF
  void *v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+40h] [rbp-78h]
  _BYTE v20[16]; // [rsp+48h] [rbp-70h] BYREF
  void *Block; // [rsp+58h] [rbp-60h]
  _BYTE v22[24]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v23[24]; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v24[32]; // [rsp+90h] [rbp-28h] BYREF

  v19 = -2;
  v8 = XmlNode::XPathAttributeSearchSingle((XmlNode *)a3, a4);
  v9 = (unsigned __int16 *)v8;
  if ( v8 )
  {
    Str::Str((Str *)v17, v8);
    operator delete(v9);
    *a5 = 1;
    Str::Str(a1, (const struct Str *)v17);
    operator delete(v18);
    return a1;
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 72);
    if ( v10 <= 0x3FFFFFF )
    {
      v9 = (unsigned __int16 *)operator new(saturated_mul(v10 + 1, 2u));
      if ( v9 )
        wcsncpy_s(
          v9,
          (unsigned int)(*(_DWORD *)(a3 + 72) + 1),
          *(const wchar_t **)(a3 + 64),
          *(unsigned int *)(a3 + 72));
    }
    Str::Str((Str *)v17, L" attribute not defined in ");
    v11 = Str::Str((Str *)v20, v9);
    v12 = (void **)Str::Str((Str *)v23, a4);
    v13 = (void **)operator+<Str>((Str *)v22, v12, (__int64)v17);
    v14 = operator+<Str>((Str *)v24, v13, (__int64)v11);
    LOBYTE(v15) = 1;
    StrErr(v14, v15);
    operator delete(Block);
    operator delete(v18);
    operator delete(v9);
    *a5 = 0;
    Str::Str(a1, &String);
    return a1;
  }
}

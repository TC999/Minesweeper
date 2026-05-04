// Hidden C++ exception states: #wind=4
bool __fastcall HighScore::FromXML(HighScore *this, struct SerialXML *a2, const struct XmlNode *a3)
{
  Str *v6; // rbx
  void **v7; // rax
  Str *v8; // rax
  const struct XmlNode *v9; // rax
  Str *v11; // rbx
  void **v12; // rax
  Str *v13; // rax
  XmlNode *v14; // rax
  const wchar_t *NodeValue; // rax
  wchar_t *v16; // rbx
  char v17; // al
  bool v18; // bl
  _BYTE v19[16]; // [rsp+28h] [rbp-50h] BYREF
  void *Block; // [rsp+38h] [rbp-40h]
  _BYTE v21[16]; // [rsp+40h] [rbp-38h] BYREF
  void *v22; // [rsp+50h] [rbp-28h]
  _BYTE v23[24]; // [rsp+58h] [rbp-20h] BYREF

  v6 = Str::Str((Str *)v21, L"Score");
  v7 = (void **)Str::Str((Str *)v23, L"/");
  v8 = operator+<Str>((Str *)v19, v7, (__int64)v6);
  v9 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v8 + 2));
  LOBYTE(v6) = !SerialXML::FromXML(a2, (int *)this + 2, v9);
  operator delete(Block);
  operator delete(v22);
  if ( (_BYTE)v6 )
    return 0;
  v11 = Str::Str((Str *)v19, L"Time");
  v12 = (void **)Str::Str((Str *)v23, L"/");
  v13 = operator+<Str>((Str *)v21, v12, (__int64)v11);
  v14 = XmlNode::XPathElementSearchSingle(a3, *((const unsigned __int16 **)v13 + 2));
  if ( !v14 )
    goto LABEL_7;
  NodeValue = XmlNode::GetNodeValue(v14);
  v16 = (wchar_t *)NodeValue;
  if ( NodeValue )
  {
    *((_QWORD *)this + 2) = _wcstoui64(NodeValue, 0, 10);
    operator delete(v16);
LABEL_7:
    v17 = 1;
    goto LABEL_8;
  }
  v17 = 0;
LABEL_8:
  v18 = v17 == 0;
  operator delete(v22);
  operator delete(Block);
  return !v18;
}

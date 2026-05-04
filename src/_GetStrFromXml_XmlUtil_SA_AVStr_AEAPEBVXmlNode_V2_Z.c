// Hidden C++ exception states: #wind=3
Str *__fastcall XmlUtil::GetStrFromXml(Str *a1, XmlNode **a2, __int64 a3)
{
  XmlNode *v6; // rax
  unsigned __int16 *NodeValue; // rbx
  Str *v8; // rax
  _BYTE v10[16]; // [rsp+28h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-20h]

  Str::Str(a1, &String);
  v6 = XmlNode::XPathElementSearchSingle(*a2, *(const unsigned __int16 **)(a3 + 16));
  if ( v6 )
  {
    NodeValue = XmlNode::GetNodeValue(v6);
    v8 = Str::Str((Str *)v10, NodeValue);
    Str::operator=(a1, v8);
    operator delete(Block);
    operator delete(NodeValue);
  }
  operator delete(*(void **)(a3 + 16));
  return a1;
}

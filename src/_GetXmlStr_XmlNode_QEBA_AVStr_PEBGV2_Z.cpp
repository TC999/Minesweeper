// Hidden C++ exception states: #wind=3
_QWORD *__fastcall XmlNode::GetXmlStr(XmlNode *a1, _QWORD *a2, const unsigned __int16 *a3, __int64 a4)
{
  XmlNode *v6; // rax
  unsigned __int16 *NodeValue; // rbx
  Str *v8; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  void *Block; // [rsp+40h] [rbp-18h]

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v6 = XmlNode::XPathElementSearchSingle(a1, a3);
  if ( v6 )
  {
    NodeValue = XmlNode::GetNodeValue(v6);
    v8 = Str::Str((Str *)v10, NodeValue);
    Str::operator=((__int64)a2, (__int64)v8);
    operator delete(Block);
    operator delete(NodeValue);
  }
  else
  {
    Str::operator=((__int64)a2, a4);
  }
  operator delete(*(void **)(a4 + 16));
  return a2;
}

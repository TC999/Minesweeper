unsigned int __fastcall XmlNode::GetXmlHex(XmlNode *this, const unsigned __int16 *a2, int a3)
{
  const struct XmlNode *v4; // rax
  const struct XmlNode *v5; // rdi
  unsigned int result; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int16 v9; // bx

  v4 = XmlNode::XPathElementSearchSingle(this, a2);
  v5 = v4;
  if ( !v4 || !*((_QWORD *)v4 + 15) )
    return a3;
  v7 = *((unsigned int *)v4 + 32);
  v8 = *((_QWORD *)v4 + 15);
  v9 = *(_WORD *)(v8 + 2 * v7);
  *(_WORD *)(v8 + 2 * v7) = 0;
  result = wcstoul(*((const wchar_t **)v5 + 15), 0, 16);
  *(_WORD *)(*((_QWORD *)v5 + 15) + 2LL * *((unsigned int *)v5 + 32)) = v9;
  return result;
}

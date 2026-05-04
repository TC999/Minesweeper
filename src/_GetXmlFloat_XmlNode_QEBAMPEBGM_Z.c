float __fastcall XmlNode::GetXmlFloat(XmlNode *this, const unsigned __int16 *a2, float a3)
{
  const struct XmlNode *v3; // rax
  const struct XmlNode *v4; // rdi
  float result; // xmm0_4
  __int64 v6; // rcx
  __int64 v7; // rax
  __int16 v8; // bx

  v3 = XmlNode::XPathElementSearchSingle(this, a2);
  v4 = v3;
  if ( !v3 || !*((_QWORD *)v3 + 15) )
    return a3;
  v6 = *((unsigned int *)v3 + 32);
  v7 = *((_QWORD *)v3 + 15);
  v8 = *(_WORD *)(v7 + 2 * v6);
  *(_WORD *)(v7 + 2 * v6) = 0;
  result = wcstod(*((const wchar_t **)v4 + 15), 0);
  *(_WORD *)(*((_QWORD *)v4 + 15) + 2LL * *((unsigned int *)v4 + 32)) = v8;
  return result;
}

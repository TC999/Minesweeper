char __fastcall XmlNode::GetXmlBool(XmlNode *this, const unsigned __int16 *a2, char a3)
{
  const struct XmlNode *v4; // rax
  const struct XmlNode *v5; // rbx
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int16 v9; // si

  v4 = XmlNode::XPathElementSearchSingle(this, a2);
  v5 = v4;
  if ( !v4 || !*((_QWORD *)v4 + 15) )
    return a3;
  v7 = *((unsigned int *)v4 + 32);
  v8 = *((_QWORD *)v4 + 15);
  v9 = *(_WORD *)(v8 + 2 * v7);
  *(_WORD *)(v8 + 2 * v7) = 0;
  if ( _wcsicmp(*((const wchar_t **)v5 + 15), L"true") )
    result = _wcsicmp(*((const wchar_t **)v5 + 15), L"false") != 0 ? a3 : 0;
  else
    result = 1;
  *(_WORD *)(*((_QWORD *)v5 + 15) + 2LL * *((unsigned int *)v5 + 32)) = v9;
  return result;
}

char __fastcall XmlNode::GetXmlString(
        XmlNode *this,
        unsigned __int16 *a2,
        rsize_t SizeInWords,
        const unsigned __int16 *a4)
{
  rsize_t v5; // rsi
  const struct XmlNode *v8; // rax
  char v9; // bl
  const wchar_t *v10; // r8
  rsize_t v11; // rcx

  v5 = (unsigned int)SizeInWords;
  memset(a2, 0, 2LL * (unsigned int)SizeInWords);
  v8 = XmlNode::XPathElementSearchSingle(this, a4);
  v9 = 0;
  if ( !v8 )
    return 0;
  if ( (_DWORD)v5 )
    *a2 = 0;
  v10 = (const wchar_t *)*((_QWORD *)v8 + 15);
  if ( v10 )
  {
    v11 = *((unsigned int *)v8 + 32);
    if ( (unsigned int)v5 >= (int)v11 + 1 )
      return wcsncpy_s(a2, v5, v10, v11) == 0;
  }
  return v9;
}

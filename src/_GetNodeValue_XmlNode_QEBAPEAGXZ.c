unsigned __int16 *__fastcall XmlNode::GetNodeValue(XmlNode *this)
{
  unsigned int v3; // eax
  wchar_t *v4; // rdi

  if ( !*((_QWORD *)this + 15) )
    return 0;
  v3 = *((_DWORD *)this + 32);
  if ( v3 > 0x3FFFFFF )
    return 0;
  v4 = (wchar_t *)operator new(saturated_mul(v3 + 1, 2u));
  if ( !v4 )
    return 0;
  wcsncpy_s(
    v4,
    (unsigned int)(*((_DWORD *)this + 32) + 1),
    *((const wchar_t **)this + 15),
    *((unsigned int *)this + 32));
  return v4;
}

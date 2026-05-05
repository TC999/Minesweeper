bool __fastcall XmlNode::MatchName(XmlNode *this, const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const unsigned __int16 *v5; // rdi
  bool v6; // zf

  v4 = -1;
  v5 = a2;
  do
  {
    if ( !v4 )
      break;
    v6 = *v5++ == 0;
    --v4;
  }
  while ( !v6 );
  return *((_DWORD *)this + 18) == -(int)v4 - 2
      && wcsncmp(a2, *((const wchar_t **)this + 8), *((unsigned int *)this + 18)) == 0;
}

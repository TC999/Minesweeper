void __fastcall SerialXML::ToXML(SerialXML *this, char a2, const unsigned __int16 *a3)
{
  const wchar_t *v6; // r8

  SerialXML::WriteStartTag(this, a3, 0);
  v6 = L"false";
  if ( a2 )
    v6 = L"true";
  Str::AppendF((SerialXML *)((char *)this + 8), L"%s", v6);
  if ( a3 )
    Str::AppendF((SerialXML *)((char *)this + 8), L"</%s>\n", a3);
}

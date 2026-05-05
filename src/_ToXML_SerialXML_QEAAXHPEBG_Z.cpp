void __fastcall SerialXML::ToXML(SerialXML *this, unsigned int a2, const unsigned __int16 *a3)
{
  SerialXML::WriteStartTag(this, a3, 0);
  Str::AppendF((SerialXML *)((char *)this + 8), L"%d", a2);
  if ( a3 )
    Str::AppendF((SerialXML *)((char *)this + 8), L"</%s>\n", a3);
}

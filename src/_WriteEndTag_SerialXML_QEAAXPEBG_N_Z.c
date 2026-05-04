void __fastcall SerialXML::WriteEndTag(SerialXML *this, const unsigned __int16 *a2, char a3)
{
  if ( a3 )
  {
    --*(_DWORD *)this;
    SerialXML::PrintTabs(this);
  }
  if ( a2 )
    Str::AppendF((SerialXML *)((char *)this + 8), L"</%s>\n", a2);
}

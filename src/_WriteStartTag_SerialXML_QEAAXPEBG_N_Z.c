void __fastcall SerialXML::WriteStartTag(SerialXML *this, const unsigned __int16 *a2, char a3)
{
  if ( a2 )
  {
    SerialXML::PrintTabs(this);
    Str::AppendF((SerialXML *)((char *)this + 8), L"<%s>", a2);
  }
  if ( a3 )
  {
    Str::AppendF((SerialXML *)((char *)this + 8), L"\n");
    ++*(_DWORD *)this;
  }
}

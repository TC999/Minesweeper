void __fastcall SerialXML::PrintTabs(SerialXML *this)
{
  int i; // edi

  for ( i = 0; i < *(_DWORD *)this; ++i )
    Str::AppendF((SerialXML *)((char *)this + 8), L"\t");
}

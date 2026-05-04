void __fastcall GameStats::ToXML(GameStats *this, struct SerialXML *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi

  SerialXML::WriteStartTag(a2, L"GameStats", 1);
  SerialXML::WriteStartTag(a2, L"IndividualStats", 0);
  v4 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v5 = 0;
    do
    {
      Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
      (***(void (__fastcall ****)(_QWORD, struct SerialXML *))(v5 + *((_QWORD *)this + 3)))(
        *(_QWORD *)(v5 + *((_QWORD *)this + 3)),
        a2);
      ++v4;
      v5 += 8;
    }
    while ( v4 < *((_DWORD *)this + 2) );
  }
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"IndividualStats");
  SerialXML::WriteEndTag(a2, L"GameStats", 1);
}

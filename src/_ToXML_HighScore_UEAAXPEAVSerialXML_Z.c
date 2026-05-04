void __fastcall HighScore::ToXML(HighScore *this, struct SerialXML *a2)
{
  SerialXML::WriteStartTag(a2, L"HighScore", 1);
  SerialXML::ToXML(a2, *((_DWORD *)this + 2), L"Score");
  swprintf_s(&Buffer, 0x100u, L"%I64u", *((_QWORD *)this + 2));
  SerialXML::WriteStartTag(a2, L"Time", 0);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"%s", &Buffer);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"Time");
  SerialXML::WriteEndTag(a2, L"HighScore", 1);
}

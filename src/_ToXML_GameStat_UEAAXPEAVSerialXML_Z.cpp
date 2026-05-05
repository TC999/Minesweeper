void __fastcall GameStat::ToXML(GameStat *this, struct SerialXML *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbp

  SerialXML::WriteStartTag(a2, L"GameStat", 1);
  SerialXML::ToXML(a2, *((_DWORD *)this + 2), L"GamesWon");
  SerialXML::ToXML(a2, *((_DWORD *)this + 3), L"GamesPlayed");
  SerialXML::ToXML(a2, *((_DWORD *)this + 4), L"LowestScore");
  SerialXML::ToXML(a2, *((_DWORD *)this + 5), L"HighestScore");
  SerialXML::ToXML(a2, *((_DWORD *)this + 6), L"AverageScore");
  SerialXML::WriteStartTag(a2, L"HighScores", 0);
  v4 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    v5 = 0;
    do
    {
      Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
      (***(void (__fastcall ****)(_QWORD, struct SerialXML *))(*((_QWORD *)this + 8) + v5))(
        *(_QWORD *)(*((_QWORD *)this + 8) + v5),
        a2);
      ++v4;
      v5 += 8;
    }
    while ( v4 < *((_DWORD *)this + 12) );
  }
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"HighScores");
  SerialXML::ToXML(a2, *((_DWORD *)this + 7), L"LongestWinStreak");
  SerialXML::ToXML(a2, *((_DWORD *)this + 8), L"LongestLoseStreak");
  SerialXML::ToXML(a2, *((_DWORD *)this + 9), L"CurrentStreak");
  SerialXML::ToXML(a2, *((_BYTE *)this + 40), L"CurrentStreakTypeIsWin");
  SerialXML::WriteEndTag(a2, L"GameStat", 1);
}

void __fastcall Game::ToXML(Game *this, struct SerialXML *a2)
{
  SerialXML::WriteStartTag(a2, L"Game", 1);
  SerialXML::ToXML(a2, 3, L"SaveVersion");
  (**((void (__fastcall ***)(char *, struct SerialXML *))this + 29))((char *)this + 232, a2);
  SerialXML::ToXML(a2, *((_BYTE *)this + 271), L"FirstPlay");
  SerialXML::ToXML(a2, *((_BYTE *)this + 270), L"AutoContinueSaveGames");
  SerialXML::ToXML(a2, *((_BYTE *)this + 42), L"SoundEnabled");
  SerialXML::ToXML(a2, *((_BYTE *)this + 43), L"AnimationsEnabled");
  SerialXML::ToXML(a2, *((_BYTE *)this + 44), L"QuestionMarksEnabled");
  SerialXML::ToXML(a2, *((_BYTE *)this + 45), L"TipsEnabled");
  SerialXML::ToXML(a2, *((_BYTE *)this + 46), L"UserPrefersKeyboard");
  SerialXML::ToXML(a2, *((_BYTE *)this + 269), L"UseRandomArt");
  SerialXML::ToXML(a2, *((_DWORD *)this + 69), L"PreferredDifficulty");
  SerialXML::ToXML(a2, *((_DWORD *)this + 70), L"CustomWidth");
  SerialXML::ToXML(a2, *((_DWORD *)this + 71), L"CustomHeight");
  SerialXML::ToXML(a2, *((_DWORD *)this + 72), L"CustomMines");
  SerialXML::ToXML(a2, *((_DWORD *)this + 16), L"BoardStyleIndex");
  SerialXML::ToXML(a2, *((_DWORD *)this + 17), L"GameStyleIndex");
  SerialXML::ToXML(a2, *((_BYTE *)this + 272), L"AutoSaveGameOnExit");
  SerialXML::ToXML(a2, *((_DWORD *)this + 12), L"WinLoseDialogX");
  SerialXML::ToXML(a2, *((_DWORD *)this + 13), L"WinLoseDialogY");
  SerialXML::WriteEndTag(a2, L"Game", 1);
}

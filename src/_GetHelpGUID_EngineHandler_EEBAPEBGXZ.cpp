const unsigned __int16 *__fastcall EngineHandler::GetHelpGUID(EngineHandler *this)
{
  int v2; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-10h]

  v2 = 2;
  v3 = L"HELP_ENTRY_ID_GAMES_MINESWEEPER_HELP";
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))WinSqmAddToStream)(0, 911, 1, &v2);
  return L"mshelp://windows/?id=ea853d89-9242-48a8-a655-20c5bf92a90e";
}

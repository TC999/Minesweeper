const unsigned __int16 *__fastcall MsLog::MsLogResolver(MsLog *this)
{
  const unsigned __int16 *result; // rax

  result = 0;
  switch ( (_DWORD)this )
  {
    case 0x10000:
      return L"General";
    case 0x20000:
      return L"Err";
    case 0x40000:
      return L"Warn";
    case 0x80000:
      return L"Events";
    case 0x100000:
      return L"Scoring";
    case 0x200000:
      return L"BoardLogic";
    case 0x400000:
      return L"LoadSave";
    case 0x800000:
      return L"Sound";
  }
  return result;
}

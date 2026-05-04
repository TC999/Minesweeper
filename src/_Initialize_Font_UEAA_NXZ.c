char __fastcall Font::Initialize(Font *this)
{
  HDC CompatibleDC; // rax
  DWORD LastError; // [rsp+20h] [rbp-18h]

  CompatibleDC = CreateCompatibleDC(0);
  *((_QWORD *)this + 6) = CompatibleDC;
  if ( CompatibleDC )
    return 1;
  LastError = GetLastError();
  Log(2u, 639, "Font.cpp", L"CreateCompatibleDC Failed: %d", LastError);
  return 0;
}

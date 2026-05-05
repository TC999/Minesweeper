__int64 SharedDialogs::ChangeAppearance::LogCallback(unsigned int a1, const wchar_t *a2, ...)
{
  wchar_t Buffer[4096]; // [rsp+30h] [rbp-2018h] BYREF
  va_list va; // [rsp+2060h] [rbp+18h] BYREF

  va_start(va, a2);
  vsnwprintf_s(Buffer, 0x1000u, 0xFFFFFFFFFFFFFFFFuLL, a2, va);
  return (*(__int64 (__fastcall **)(_QWORD, wchar_t *))(qword_1000A8640 + 24))(a1, Buffer);
}

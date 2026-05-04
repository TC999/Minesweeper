__int64 pre_cpp_init()
{
  __int64 result; // rax

  dword_1000A7EDC = newmode;
  result = __getmainargs(&unk_1000A7EC0, &unk_1000A7ED0, &unk_1000A7EC8, (unsigned int)dowildcard, &dword_1000A7EDC);
  dword_1000A7ED8 = result;
  return result;
}

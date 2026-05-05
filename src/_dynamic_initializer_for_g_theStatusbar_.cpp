int dynamic_initializer_for__g_theStatusbar__()
{
  DWORD SysColor; // eax
  DWORD *v1; // rcx
  __int64 v2; // rdx

  qword_1000A6DA0 = (__int64)DefWindowProcW;
  qword_1000A6DE8 = (__int64)DefWindowProcW;
  memset(&unk_1000A6DF0, 0, 0xD80u);
  SysColor = GetSysColor(8);
  v1 = (DWORD *)&unk_1000A6E00;
  v2 = 12;
  do
  {
    *v1 = SysColor;
    v1 += 72;
    --v2;
  }
  while ( v2 );
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_theStatusbar__);
}

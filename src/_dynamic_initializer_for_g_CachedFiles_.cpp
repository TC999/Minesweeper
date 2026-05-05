int dynamic_initializer_for__g_CachedFiles__()
{
  void *v0; // rax

  g_CachedFiles = malloc(0x80u);
  v0 = malloc(0x80u);
  dword_1000AB640 = 0;
  qword_1000AB638 = v0;
  dword_1000AB644 = 16;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CachedFiles__);
}

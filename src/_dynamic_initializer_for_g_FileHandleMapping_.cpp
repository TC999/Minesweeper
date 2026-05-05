int dynamic_initializer_for__g_FileHandleMapping__()
{
  void *v0; // rax

  g_FileHandleMapping = malloc(0x40u);
  v0 = malloc(0x80u);
  dword_1000AB658 = 0;
  qword_1000AB650 = v0;
  dword_1000AB65C = 16;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_FileHandleMapping__);
}

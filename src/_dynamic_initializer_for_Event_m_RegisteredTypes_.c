int dynamic_initializer_for__Event::m_RegisteredTypes__()
{
  void *v0; // rax

  Event::m_RegisteredTypes = malloc(0x40u);
  v0 = malloc(0x80u);
  dword_1000AB628 = 0;
  Src = v0;
  dword_1000AB62C = 16;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Event::m_RegisteredTypes__);
}

void dynamic_atexit_destructor_for__Event::m_RegisteredTypes__()
{
  dword_1000AB628 = 0;
  dword_1000AB62C = 0;
  free(Event::m_RegisteredTypes);
  free(Src);
  Event::m_RegisteredTypes = 0;
  Src = 0;
}

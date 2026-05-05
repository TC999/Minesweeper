__int64 __fastcall Event::CreateGameEvent(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // eax

  v2 = 0;
  v3 = SortedListI<Event::RegisteredType>::BinSearch(&Event::m_RegisteredTypes, a1, 0, (unsigned int)dword_1000AB628);
  if ( v3 >= 0 )
    return (*((__int64 (**)(void))Src + v3))();
  Log(0x40u, L"CreateGameEvent, unknown event id: %d", a1);
  return v2;
}

void __fastcall Timer::DeleteEvent(Timer *this, __int64 a2)
{
  Timer *v2; // rdi
  unsigned int v3; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = g_pTimer;
  v3 = a2;
  if ( *((_BYTE *)g_pTimer + 72) )
  {
    if ( (int)SortedListI<Event::RegisteredType>::BinSearch(
                (char *)g_pTimer + 24,
                a2,
                0,
                *((unsigned int *)g_pTimer + 10)) < 0 )
      SortedListI<int>::Add((char *)v2 + 24, v3, &v4);
  }
  else if ( (int)SortedListI<Event::RegisteredType>::BinSearch(g_pTimer, a2, 0, *((unsigned int *)g_pTimer + 4)) >= 0 )
  {
    SortedListI<Timer::TimerEvent>::Remove(v2, v3);
  }
}

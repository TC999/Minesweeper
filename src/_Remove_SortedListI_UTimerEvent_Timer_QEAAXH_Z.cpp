__int64 __fastcall SortedListI<Timer::TimerEvent>::Remove(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rbp

  v2 = *(_DWORD *)(a1 + 16);
  result = SortedListI<Event::RegisteredType>::BinSearch(a1, a2, 0, v2);
  v5 = result;
  if ( (unsigned int)result < v2 - 1 )
  {
    v6 = 32LL * (int)result;
    v7 = 4LL * (int)result;
    do
    {
      *(_DWORD *)(*(_QWORD *)a1 + v7) = *(_DWORD *)(*(_QWORD *)a1 + v7 + 4);
      memcpy((void *)(v6 + *(_QWORD *)(a1 + 8)), (const void *)(v6 + *(_QWORD *)(a1 + 8) + 32), 0x20u);
      ++v5;
      result = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
      v7 += 4;
      v6 += 32;
    }
    while ( v5 < (unsigned int)result );
  }
  --*(_DWORD *)(a1 + 16);
  return result;
}

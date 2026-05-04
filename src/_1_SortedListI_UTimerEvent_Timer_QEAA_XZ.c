void __fastcall SortedListI<Timer::TimerEvent>::~SortedListI<Timer::TimerEvent>(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  free(*(void **)a1);
  free(*(void **)(a1 + 8));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
}

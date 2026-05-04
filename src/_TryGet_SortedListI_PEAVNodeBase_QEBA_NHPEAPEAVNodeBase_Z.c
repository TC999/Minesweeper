char __fastcall SortedListI<NodeBase *>::TryGet(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  char result; // al
  __int64 v7; // rcx

  v5 = SortedListI<Event::RegisteredType>::BinSearch(a1, a2, 0, *(unsigned int *)(a1 + 16));
  if ( v5 < 0 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v5);
  result = 1;
  *a3 = v7;
  return result;
}

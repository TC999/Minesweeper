void __fastcall SortedListI<Event::RegisteredType>::Add(unsigned int a1, __int64 *a2)
{
  unsigned int v2; // ebx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // edi
  void *v8; // rbx
  void *v9; // rax
  void *v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx

  v2 = dword_1000AB628;
  v5 = SortedListI<Event::RegisteredType>::BinSearch(&Event::m_RegisteredTypes, a1, 0, (unsigned int)dword_1000AB628);
  if ( v5 < 0 )
  {
    v6 = dword_1000AB62C;
    v7 = ~v5;
    if ( v2 + 1 >= dword_1000AB62C )
    {
      if ( !dword_1000AB62C )
        v6 = 2;
      dword_1000AB62C = v6;
      v8 = malloc(8LL * v6);
      v9 = malloc(16LL * (unsigned int)dword_1000AB62C);
      v10 = v9;
      if ( !v9 || !v8 )
      {
        CheckAllocation(v9);
        CheckAllocation(v8);
        return;
      }
      memcpy(v8, Event::m_RegisteredTypes, 4LL * (unsigned int)dword_1000AB628);
      memcpy(v10, Src, 8LL * (unsigned int)dword_1000AB628);
      free(Event::m_RegisteredTypes);
      free(Src);
      Event::m_RegisteredTypes = v8;
      v2 = dword_1000AB628;
      Src = v10;
      dword_1000AB62C *= 2;
    }
    v11 = v2 - 1;
    if ( v2 - 1 >= v7 )
    {
      v12 = 8LL * (int)v11;
      v13 = 4LL * (int)v11;
      do
      {
        if ( v11 >= v2 )
          break;
        --v11;
        v14 = *(_DWORD *)((char *)Event::m_RegisteredTypes + v13);
        v13 -= 4;
        *(_DWORD *)((char *)Event::m_RegisteredTypes + v13 + 8) = v14;
        v15 = *(_QWORD *)((char *)Src + v12);
        v12 -= 8;
        *(_QWORD *)((char *)Src + v12 + 16) = v15;
        v2 = dword_1000AB628;
      }
      while ( v11 >= v7 );
    }
    v16 = *a2;
    dword_1000AB628 = v2 + 1;
    *((_DWORD *)Event::m_RegisteredTypes + v7) = a1;
    *((_QWORD *)Src + v7) = v16;
  }
}

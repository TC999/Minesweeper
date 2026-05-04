void __fastcall ResourceManager::DestroyResource(ResourceManager *this, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r12
  int v7; // eax
  bool v8; // cl
  int v9; // eax
  bool v10; // al
  signed int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // ebx
  signed int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // r11d
  __int64 v21; // r9
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // [rsp+50h] [rbp+8h]

  v4 = SortedListI<Event::RegisteredType>::BinSearch((__int64 *)this + 1, a2, 0, *((_DWORD *)this + 6));
  v5 = 0;
  if ( v4 >= 0 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v4);
    v7 = *(_DWORD *)(v6 + 8);
    if ( v7 )
    {
      v9 = v7 - 1;
      *(_DWORD *)(v6 + 8) = v9;
      v8 = v9 == 0;
    }
    else
    {
      v8 = 1;
    }
    v10 = v8;
    if ( *(_BYTE *)(v6 + 20) )
      v10 = 0;
    if ( v10 )
    {
      v11 = SortedListW<TipManager::TipInfo *>::BinSearch(
              (char *)this + 104,
              *(_QWORD *)(v6 + 32),
              0,
              *((unsigned int *)this + 30));
      v12 = v11;
      v25 = v11;
      free(*(void **)(*((_QWORD *)this + 13) + 8LL * v11));
      v13 = v25;
      if ( v25 < *((_DWORD *)this + 30) - 1 )
      {
        v14 = 4 * v12;
        v15 = 8 * v12;
        do
        {
          ++v13;
          *(_QWORD *)(v15 + *((_QWORD *)this + 13)) = *(_QWORD *)(v15 + *((_QWORD *)this + 13) + 8);
          v15 += 8;
          *(_DWORD *)(v14 + *((_QWORD *)this + 14)) = *(_DWORD *)(v14 + *((_QWORD *)this + 14) + 4);
          v14 += 4;
        }
        while ( v13 < *((_DWORD *)this + 30) - 1 );
      }
      --*((_DWORD *)this + 30);
      v16 = *((_DWORD *)this + 6);
      v17 = SortedListI<Event::RegisteredType>::BinSearch((__int64 *)this + 1, a2, 0, v16);
      v20 = v17;
      v21 = v17;
      if ( v17 < v16 - 1 )
      {
        v19 = 8LL * v17;
        v21 = 4LL * v17;
        do
        {
          v18 = *((_QWORD *)this + 1);
          ++v20;
          *(_DWORD *)(v18 + v21) = *(_DWORD *)(v18 + v21 + 4);
          v21 += 4;
          *(_QWORD *)(v19 + *((_QWORD *)this + 2)) = *(_QWORD *)(v19 + *((_QWORD *)this + 2) + 8);
          v19 += 8;
        }
        while ( v20 < *((_DWORD *)this + 6) - 1 );
      }
      --*((_DWORD *)this + 6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 32LL))(
             v6,
             v18,
             v19,
             v21) )
      {
        v22 = *((_DWORD *)this + 14);
        if ( v22 )
        {
          v23 = (_QWORD *)*((_QWORD *)this + 9);
          while ( *v23 != v6 )
          {
            ++v5;
            ++v23;
            if ( v5 >= v22 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          v5 = -1;
        }
        if ( v5 != -1 )
        {
          if ( v5 < v22 - 1 )
          {
            v24 = 8LL * (int)v5;
            do
            {
              ++v5;
              *(_QWORD *)(v24 + *((_QWORD *)this + 9)) = *(_QWORD *)(v24 + *((_QWORD *)this + 9) + 8);
              v24 += 8;
            }
            while ( v5 < *((_DWORD *)this + 14) - 1 );
          }
          --*((_DWORD *)this + 14);
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1);
    }
  }
}

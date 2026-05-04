void __fastcall Board::placeMines(Board *this, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  _DWORD *v8; // rax
  _QWORD *v9; // rbx
  int i; // edi
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  unsigned int *v15; // rdi
  unsigned int v16; // eax
  int v17; // ebp
  int v18; // edx
  __int64 v19; // rbp
  __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // r10
  int v23; // eax
  void *v24; // rcx
  void *v25; // rcx

  v3 = *((_DWORD *)this + 12);
  v4 = Seed;
  srand(v3);
  Seed = v3;
  v8 = operator new(0x18u);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
    *((_QWORD *)v8 + 2) = 0;
    v8[2] = 16;
  }
  else
  {
    v9 = 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 3) * *((_DWORD *)this + 4); ++i )
  {
    v11 = 1;
    v12 = i / *((_DWORD *)this + 4) - a3;
    v13 = i % *((_DWORD *)this + 4) - a2;
    if ( v13 < 0 )
      v11 = -1;
    if ( v13 * v11 <= 1 )
    {
      v14 = 1;
      if ( v12 < 0 )
        v14 = -1;
      if ( v12 * v14 <= 1 )
        continue;
    }
    Array<enum NodeType>::Add(v9, (unsigned int)i);
  }
  v15 = (unsigned int *)operator new(0x18u);
  if ( v15 )
  {
    v16 = *((_DWORD *)this + 2);
    *v15 = 0;
    v15[1] = 0;
    *((_QWORD *)v15 + 2) = 0;
    v15[2] = v16;
  }
  else
  {
    v15 = 0;
  }
  while ( *v15 != *((_DWORD *)this + 2) && *(_DWORD *)v9 )
  {
    v17 = *(_DWORD *)v9;
    v18 = rand() % v17;
    v19 = v18;
    Array<enum NodeType>::Add(v15, *(unsigned int *)(v9[2] + 4LL * (unsigned int)v18));
    if ( (unsigned int)v19 < *(_DWORD *)v9 - 1 )
    {
      v20 = 4 * v19;
      do
      {
        LODWORD(v19) = v19 + 1;
        *(_DWORD *)(v20 + v9[2]) = *(_DWORD *)(v20 + v9[2] + 4);
        v20 += 4;
      }
      while ( (unsigned int)v19 < *(_DWORD *)v9 - 1 );
    }
    --*(_DWORD *)v9;
  }
  v21 = 0;
  if ( *v15 )
  {
    v22 = 0;
    do
    {
      ++v21;
      v23 = *(_DWORD *)(v22 + *((_QWORD *)v15 + 2));
      v22 += 4;
      *(_BYTE *)((unsigned int)(v23 / *((_DWORD *)this + 4))
               + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL)
                                       + 8LL * (unsigned int)(v23 % *((_DWORD *)this + 4)))
                           + 16LL)) = 1;
    }
    while ( v21 < *v15 );
  }
  v24 = (void *)*((_QWORD *)v15 + 2);
  if ( v24 )
    free(v24);
  operator delete(v15);
  if ( v9 )
  {
    v25 = (void *)v9[2];
    if ( v25 )
      free(v25);
    operator delete(v9);
  }
  srand(v4);
  Seed = v4;
}

// Hidden C++ exception states: #wind=1
__int64 __fastcall Board::Board(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  _DWORD *v10; // rax
  int v11; // edi
  __int64 v12; // rsi
  _DWORD *v13; // rax
  int i; // ebp
  _DWORD *v15; // rax
  int v16; // edi
  __int64 v17; // rsi
  _DWORD *v18; // rax
  int j; // ebp
  int v20; // edx
  int v21; // r8d
  Str *v22; // rax
  __int64 v23; // rdx
  _BYTE v25[24]; // [rsp+28h] [rbp-40h] BYREF

  *(_QWORD *)a1 = &Board::`vftable';
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 16;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 40) = a7;
  *(_DWORD *)(a1 + 44) = a8;
  v10 = operator new(0x18u);
  if ( v10 )
  {
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 16;
    *((_QWORD *)v10 + 2) = 0;
  }
  else
  {
    v10 = 0;
  }
  *(_QWORD *)(a1 + 80) = v10;
  v11 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v12 = 0;
    do
    {
      v13 = operator new(0x18u);
      if ( v13 )
      {
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 16;
        *((_QWORD *)v13 + 2) = 0;
      }
      else
      {
        v13 = 0;
      }
      Array<IEventListener *>::Add(*(_QWORD *)(a1 + 80), v13);
      for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
        Array<enum NodeType>::Add(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + v12), 9);
      ++v11;
      v12 += 8;
    }
    while ( v11 < *(_DWORD *)(a1 + 16) );
  }
  v15 = operator new(0x18u);
  if ( v15 )
  {
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 16;
    *((_QWORD *)v15 + 2) = 0;
  }
  else
  {
    v15 = 0;
  }
  *(_QWORD *)(a1 + 88) = v15;
  v16 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v17 = 0;
    do
    {
      v18 = operator new(0x18u);
      if ( v18 )
      {
        *v18 = 0;
        v18[1] = 0;
        v18[2] = 16;
        *((_QWORD *)v18 + 2) = 0;
      }
      else
      {
        v18 = 0;
      }
      Array<IEventListener *>::Add(*(_QWORD *)(a1 + 88), v18);
      for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
        Array<bool>::Add(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + v17), 0);
      ++v16;
      v17 += 8;
    }
    while ( v16 < *(_DWORD *)(a1 + 16) );
  }
  v20 = *(_DWORD *)(a1 + 40);
  if ( v20 != -1 )
  {
    v21 = *(_DWORD *)(a1 + 44);
    if ( v21 != -1 )
    {
      if ( a9 )
      {
        Board::placeMines((Board *)a1, v20, v21);
        ++*(_DWORD *)(a1 + 28);
      }
      else
      {
        Board::AttemptReveal((Board *)a1, v20, v21);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 8) > *(_DWORD *)(a1 + 12) * *(_DWORD *)(a1 + 16) - 9 )
  {
    v22 = Str::Str((Str *)v25, L"Too many mines for tile count");
    LOBYTE(v23) = 1;
    StrErr(v22, v23);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 12) * *(_DWORD *)(a1 + 16) - 9;
  }
  return a1;
}

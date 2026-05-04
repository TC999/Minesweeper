char __fastcall SerialXML::FromXML(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  unsigned int v9; // ebp
  __int64 i; // r12
  _QWORD *v11; // rax
  void *v12; // rbx
  __int64 v13; // r8

  v3 = 0;
  if ( *(_DWORD *)a2 )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD **)(v7 + *(_QWORD *)(a2 + 16));
      if ( v8 )
      {
        *v8 = &HighScore::`vftable';
        operator delete(v8);
      }
      ++v3;
      *(_QWORD *)(v7 + *(_QWORD *)(a2 + 16)) = 0;
      v7 += 8;
    }
    while ( v3 < *(_DWORD *)a2 );
  }
  *(_DWORD *)a2 = 0;
  if ( !a3 )
    return 1;
  v9 = 0;
  if ( !*(_DWORD *)(a3 + 24) )
    return 1;
  for ( i = 0; ; i += 8 )
  {
    v11 = operator new(0x18u);
    v12 = v11;
    if ( v11 )
      *v11 = &HighScore::`vftable';
    else
      v12 = 0;
    v13 = v9 < *(_DWORD *)(a3 + 24) ? *(_QWORD *)(i + *(_QWORD *)(a3 + 40)) : 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, a1, v13) )
      break;
    Array<IEventListener *>::Add(a2, (__int64)v12);
    if ( ++v9 >= *(_DWORD *)(a3 + 24) )
      return 1;
  }
  *(_QWORD *)v12 = &HighScore::`vftable';
  operator delete(v12);
  return 0;
}

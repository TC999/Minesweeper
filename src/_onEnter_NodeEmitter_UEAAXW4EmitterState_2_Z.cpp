__int64 __fastcall NodeEmitter::onEnter(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a2 == 3 )
  {
    *(_DWORD *)(a1 + 528) = 0;
    v2 = 0;
    if ( *(_DWORD *)(a1 + 472) )
    {
      v4 = 0;
      do
      {
        *(_BYTE *)(*(_QWORD *)(v4 + *(_QWORD *)(a1 + 488)) + 24LL) = 1;
        result = Array<IEventListener *>::Add(a1 + 496, *(_QWORD *)(v4 + *(_QWORD *)(a1 + 488)));
        ++v2;
        v4 += 8;
      }
      while ( v2 < *(_DWORD *)(a1 + 472) );
    }
    *(_DWORD *)(a1 + 472) = 0;
  }
  return result;
}

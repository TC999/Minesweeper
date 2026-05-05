__int64 __fastcall D3DXCore::CSprite::CompareTexture(unsigned int a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax

  v3 = a3[30];
  v4 = *(_QWORD *)(v3 + 8LL * a2);
  if ( *(_QWORD *)(v3 + 8LL * a1) > v4 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(v3 + 8LL * a1) < v4 )
    return 1;
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  return a1 > a2;
}

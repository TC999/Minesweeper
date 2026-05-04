__int64 __fastcall D3DXCore::CSprite::CompareDepthBTF(unsigned int a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rax

  v3 = a3[31];
  if ( *(float *)(v3 + 4LL * a1) > *(float *)(v3 + 4LL * a2) )
    return 0xFFFFFFFFLL;
  if ( *(float *)(v3 + 4LL * a2) > *(float *)(v3 + 4LL * a1) )
    return 1;
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  return a1 > a2;
}

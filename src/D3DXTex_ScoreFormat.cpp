__int64 __fastcall D3DXTex::ScoreFormat(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r9d
  unsigned int *v4; // r8
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned int v8; // edx

  if ( !*((_DWORD *)qword_1000215D0 + 5 * *(int *)(a1 + 4) + *(int *)(a2 + 4)) )
    return 0xFFFFFFFFLL;
  result = 0;
  v3 = 0;
  v4 = (unsigned int *)(a1 + 12);
  v5 = 5;
  v6 = a2 - a1;
  do
  {
    v7 = *v4;
    if ( *v4 )
      ++v3;
    v8 = *(unsigned int *)((char *)v4 + v6);
    if ( v7 >= v8 )
    {
      if ( v7 > v8 )
      {
        if ( v8 )
          result = ((v7 - v8) << 16) + (unsigned int)result;
        else
          result = (unsigned int)(result + 0x1000000);
      }
    }
    else if ( v7 )
    {
      result = v8 - v7 + (unsigned int)result;
    }
    else
    {
      result = (unsigned int)(result + 256);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( v3 == BYTE3(result) )
    return 0xFFFFFFFFLL;
  return result;
}

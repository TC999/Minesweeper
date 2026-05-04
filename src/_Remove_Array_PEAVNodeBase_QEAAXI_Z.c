__int64 __fastcall Array<NodeBase *>::Remove(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r10

  v2 = a2;
  result = (unsigned int)(*(_DWORD *)a1 - 1);
  if ( a2 < (unsigned int)result )
  {
    v4 = 8LL * (int)a2;
    do
    {
      ++v2;
      *(_QWORD *)(v4 + *(_QWORD *)(a1 + 16)) = *(_QWORD *)(v4 + *(_QWORD *)(a1 + 16) + 8);
      v4 += 8;
      result = (unsigned int)(*(_DWORD *)a1 - 1);
    }
    while ( v2 < (unsigned int)result );
  }
  --*(_DWORD *)a1;
  return result;
}

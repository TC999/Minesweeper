__int64 __fastcall CabLoader::CabSeekFunc(__int64 a1, int a2, int a3)
{
  int v3; // r8d
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( v3 )
    {
      if ( v3 == 1 && (a2 >= 0 || *(_DWORD *)(a1 + 32) >= (unsigned int)-a2) )
      {
        result = (unsigned int)(a2 + *(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 36) = result;
        return result;
      }
      goto LABEL_9;
    }
    if ( a2 < 0 && *(_DWORD *)(a1 + 36) < (unsigned int)-a2 )
    {
LABEL_9:
      *_errno() = 22;
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 36) += a2;
    return *(unsigned int *)(a1 + 36);
  }
  else
  {
    if ( a2 < 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 36) = a2;
    return (unsigned int)a2;
  }
}

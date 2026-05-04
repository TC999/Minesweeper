__int64 __fastcall CabLoader::CabReadFunc(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 32);
  v4 = a3;
  if ( *(_DWORD *)(a1 + 36) <= v3 )
  {
    v6 = v3 - *(_DWORD *)(a1 + 36);
    if ( v6 < a3 )
      v4 = v6;
  }
  else
  {
    v4 = 0;
  }
  memcpy(a2, (const void *)(*(_QWORD *)(a1 + 24) + *(unsigned int *)(a1 + 36)), v4);
  *(_DWORD *)(a1 + 36) += v4;
  return v4;
}

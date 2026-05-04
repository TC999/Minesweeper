void __fastcall SortedListW<unsigned int>::RemoveAll(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  void *v4; // rcx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v3 = 0;
    do
    {
      free(*(void **)(v3 + *(_QWORD *)a1));
      ++v1;
      v3 += 8;
    }
    while ( v1 < *(_DWORD *)(a1 + 16) );
  }
  v4 = *(void **)a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  free(v4);
  free(*(void **)(a1 + 8));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
}

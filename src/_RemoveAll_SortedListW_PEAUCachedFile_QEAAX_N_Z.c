void __fastcall SortedListW<CachedFile *>::RemoveAll(__int64 a1, char a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx

  v2 = 0;
  if ( dword_1000AB640 )
  {
    v4 = 0;
    do
    {
      free(*(void **)((char *)g_CachedFiles + v4));
      ++v2;
      v4 += 8;
    }
    while ( v2 < dword_1000AB640 );
  }
  dword_1000AB640 = 0;
  if ( a2 )
  {
    dword_1000AB644 = 0;
    free(g_CachedFiles);
    free(qword_1000AB638);
    g_CachedFiles = 0;
    qword_1000AB638 = 0;
  }
}

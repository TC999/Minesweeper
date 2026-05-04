void __fastcall SortedListW<XmlNode::XmlString *>::RemoveAll(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rdi
  void *v6; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v5 = 0;
    do
    {
      free(*(void **)(v5 + *(_QWORD *)a1));
      ++v2;
      v5 += 8;
    }
    while ( v2 < *(_DWORD *)(a1 + 16) );
  }
  *(_DWORD *)(a1 + 16) = 0;
  if ( a2 )
  {
    v6 = *(void **)a1;
    *(_DWORD *)(a1 + 20) = 0;
    free(v6);
    free(*(void **)(a1 + 8));
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
}

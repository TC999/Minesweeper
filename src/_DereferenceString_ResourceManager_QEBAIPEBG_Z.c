__int64 __fastcall ResourceManager::DereferenceString(ResourceManager *this, const unsigned __int16 *a2)
{
  ResourceManager *v2; // rbx
  int v3; // eax

  v2 = g_pResourceManager;
  v3 = SortedListW<TipManager::TipInfo *>::BinSearch(
         (char *)g_pResourceManager + 104,
         ResourceBase::wszCache,
         0,
         *((unsigned int *)g_pResourceManager + 30));
  if ( v3 < 0 )
    return 0;
  else
    return *(unsigned int *)(*((_QWORD *)v2 + 14) + 4LL * v3);
}

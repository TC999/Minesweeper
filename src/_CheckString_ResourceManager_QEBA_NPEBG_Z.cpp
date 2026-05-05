bool __fastcall ResourceManager::CheckString(ResourceManager *this, const unsigned __int16 *a2)
{
  return (int)SortedListW<TipManager::TipInfo *>::BinSearch(
                (char *)g_pResourceManager + 104,
                ResourceBase::wszCache,
                0,
                *((unsigned int *)g_pResourceManager + 30)) >= 0;
}

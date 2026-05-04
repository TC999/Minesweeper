void __fastcall CabLoader::CabOpenFunc_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry((DllFileMgr::ResourceCacheEntry *)(a2 + 64));
  }
}

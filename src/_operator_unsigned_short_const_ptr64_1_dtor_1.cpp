void __fastcall operator__unsigned_short_const_____ptr64__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry(*(DllFileMgr::ResourceCacheEntry **)(a2 + 80));
  }
}

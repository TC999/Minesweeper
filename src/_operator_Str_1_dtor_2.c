void __fastcall operator__Str__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry(*(DllFileMgr::ResourceCacheEntry **)(a2 + 96));
  }
}

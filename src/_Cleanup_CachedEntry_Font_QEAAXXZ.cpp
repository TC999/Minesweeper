void __fastcall Font::CachedEntry::Cleanup(Font::CachedEntry *this)
{
  ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 6));
  operator delete(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
}

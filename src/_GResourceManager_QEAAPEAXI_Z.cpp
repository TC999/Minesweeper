// Hidden C++ exception states: #wind=5
ResourceManager *__fastcall ResourceManager::`scalar deleting destructor'(ResourceManager *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 6) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)this + 2));
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1);
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)this + 6) );
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  free(*((void **)this + 1));
  free(*((void **)this + 2));
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  LOBYTE(v5) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 104, v5);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  free(*((void **)this + 9));
  *((_QWORD *)this + 9) = 0;
  LOBYTE(v6) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 80, v6);
  if ( ResourceBase::wszCache )
  {
    operator delete(ResourceBase::wszCache);
    ResourceBase::wszCache = 0;
    LODWORD(ResourceBase::CacheCch[0]) = 0;
  }
  LOBYTE(v7) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 104, v7);
  LOBYTE(v8) = 1;
  SortedListW<unsigned int>::RemoveAll((char *)this + 80, v8);
  v9 = (void *)*((_QWORD *)this + 9);
  if ( v9 )
    free(v9);
  v10 = (void *)*((_QWORD *)this + 6);
  if ( v10 )
    free(v10);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  free(*((void **)this + 1));
  free(*((void **)this + 2));
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  operator delete(this);
  return this;
}

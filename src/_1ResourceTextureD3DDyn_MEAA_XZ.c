// Hidden C++ exception states: #wind=1
void __fastcall ResourceTextureD3DDyn::~ResourceTextureD3DDyn(ResourceTextureD3DDyn *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &ResourceTextureD3DDyn::`vftable';
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 6) = 0;
  }
  *(_QWORD *)this = &ResourceBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  operator delete(*((void **)this + 4));
}

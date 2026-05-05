// Hidden C++ exception states: #wind=1
void __fastcall Font::~Font(Font *this)
{
  HDC v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rdi
  void *v5; // rcx

  *(_QWORD *)this = &Font::`vftable';
  v2 = (HDC)*((_QWORD *)this + 6);
  if ( v2 )
    DeleteDC(v2);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 7) = 0;
  }
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    Font::CachedEntry::Cleanup((Font::CachedEntry *)(*((_QWORD *)this + 3) + 48 * i));
  *((_DWORD *)this + 2) = 0;
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    free(v5);
}

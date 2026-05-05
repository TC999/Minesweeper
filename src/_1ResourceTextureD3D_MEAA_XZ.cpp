// Hidden C++ exception states: #wind=1
void __fastcall ResourceTextureD3D::~ResourceTextureD3D(void **this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *this = &ResourceTextureD3D::`vftable';
  operator delete(this[8]);
  v2 = this[6];
  if ( v2 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
    this[6] = 0;
  }
  v3 = this[10];
  if ( v3 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
    this[10] = 0;
  }
  v4 = this[11];
  if ( v4 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    this[11] = 0;
  }
  v5 = this[12];
  if ( v5 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    this[12] = 0;
  }
  v6 = this[13];
  if ( v6 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    this[13] = 0;
  }
  *this = &ResourceBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  operator delete(this[4]);
}

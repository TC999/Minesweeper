// Hidden C++ exception states: #wind=1
void __fastcall Material::~Material(Material *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  void **v4; // rbp

  *(_QWORD *)this = &Material::`vftable';
  v2 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = 0;
    do
    {
      v4 = *(void ***)(v3 + *((_QWORD *)this + 3));
      if ( v4 )
      {
        operator delete(v4[1]);
        operator delete(*v4);
        operator delete(v4);
      }
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  free(*((void **)this + 3));
  *((_QWORD *)this + 3) = 0;
}

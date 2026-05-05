// Hidden C++ exception states: #wind=1
void **__fastcall ResourceWav::`vector deleting destructor'(void **this, char a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  char *v6; // rcx
  void *v7; // rcx

  *this = &ResourceWav::`vftable';
  operator delete(this[9]);
  operator delete(this[8]);
  if ( this[11] )
  {
    v4 = 1;
    if ( *((_BYTE *)this + 52) > 1u )
    {
      v5 = 0;
      do
      {
        v6 = (char *)this[11];
        if ( *(_QWORD *)&v6[v5] )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v6[v5] + 16LL))(*(_QWORD *)&v6[v5]);
          *(_QWORD *)((char *)this[11] + v5) = 0;
        }
        ++v4;
        v5 += 8;
      }
      while ( v4 < *((unsigned __int8 *)this + 52) );
    }
    operator delete(this[11]);
  }
  v7 = this[12];
  if ( v7 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    this[12] = 0;
  }
  operator delete(this[13]);
  *this = &ResourceBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  operator delete(this[4]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

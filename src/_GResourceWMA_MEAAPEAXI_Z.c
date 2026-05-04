// Hidden C++ exception states: #wind=1
void **__fastcall ResourceWMA::`scalar deleting destructor'(void **this, char a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  char *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  *this = &ResourceWMA::`vftable';
  operator delete(this[13]);
  operator delete(this[10]);
  operator delete(this[12]);
  this[12] = 0;
  if ( this[16] )
  {
    v4 = 1;
    if ( *((_BYTE *)this + 52) > 1u )
    {
      v5 = 0;
      do
      {
        v6 = (char *)this[16];
        if ( *(_QWORD *)&v6[v5] )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v6[v5] + 16LL))(*(_QWORD *)&v6[v5]);
          *(_QWORD *)((char *)this[16] + v5) = 0;
        }
        ++v4;
        v5 += 8;
      }
      while ( v4 < *((unsigned __int8 *)this + 52) );
    }
    operator delete(this[16]);
  }
  v7 = this[17];
  if ( v7 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    this[17] = 0;
  }
  v8 = this[15];
  if ( v8 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    this[15] = 0;
  }
  operator delete(this[19]);
  operator delete(this[9]);
  *this = &ResourceBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  operator delete(this[4]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

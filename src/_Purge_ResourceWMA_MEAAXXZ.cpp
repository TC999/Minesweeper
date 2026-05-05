void __fastcall ResourceWMA::Purge(void **this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  char *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8

  operator delete(this[10]);
  operator delete(this[12]);
  if ( this[16] )
  {
    v2 = 1;
    if ( *((_BYTE *)this + 52) > 1u )
    {
      v3 = 0;
      do
      {
        v4 = (char *)this[16];
        if ( *(_QWORD *)&v4[v3] )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v4[v3] + 16LL))(*(_QWORD *)&v4[v3]);
          *(_QWORD *)((char *)this[16] + v3) = 0;
        }
        ++v2;
        v3 += 8;
      }
      while ( v2 < *((unsigned __int8 *)this + 52) );
    }
    operator delete(this[16]);
  }
  v5 = this[17];
  if ( v5 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    this[17] = 0;
  }
  v6 = this[15];
  if ( v6 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    this[15] = 0;
  }
  v7 = 0;
  if ( *((_BYTE *)this + 52) )
  {
    v8 = 0;
    do
    {
      ++v7;
      *(_DWORD *)((char *)this[9] + v8) = *(_DWORD *)((char *)this[19] + v8);
      v8 += 4;
    }
    while ( v7 < *((unsigned __int8 *)this + 52) );
  }
  operator delete(this[19]);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  this[10] = 0;
  this[12] = 0;
  this[16] = 0;
  this[19] = 0;
}

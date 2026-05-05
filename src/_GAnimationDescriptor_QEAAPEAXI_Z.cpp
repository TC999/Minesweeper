// Hidden C++ exception states: #wind=2
AnimationDescriptor *__fastcall AnimationDescriptor::`scalar deleting destructor'(AnimationDescriptor *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = 0;
    do
    {
      v4 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + *((_QWORD *)this + 3));
      if ( v4 )
        (**v4)(v4, 1);
      v5 = *(_QWORD *)(v3 + *((_QWORD *)this + 6));
      if ( v5 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1);
      ++v2;
      v3 += 8;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
    free(v6);
  v7 = (void *)*((_QWORD *)this + 3);
  if ( v7 )
    free(v7);
  operator delete(this);
  return this;
}

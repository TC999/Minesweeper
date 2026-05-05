struct Animator_Base *__fastcall Animator_LinearAbsolute::Copy(Animator_LinearAbsolute *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  void *v4; // rcx
  _WORD *v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  unsigned __int64 v8; // rdi
  void *v9; // rax

  v2 = operator new(0x20u);
  v3 = v2;
  if ( v2 )
  {
    v2[1] = 0;
    *v2 = &Animator_LinearAbsolute::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v4 = (void *)v3[1];
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 4);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 5);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 6);
  operator delete(v4);
  v5 = (_WORD *)*((_QWORD *)this + 1);
  v6 = -1;
  do
  {
    if ( !v6 )
      break;
    v7 = *v5++ == 0;
    --v6;
  }
  while ( !v7 );
  v8 = (unsigned int)~(_DWORD)v6;
  v9 = operator new[](saturated_mul(v8, 2u));
  v3[1] = v9;
  memcpy(v9, *((const void **)this + 1), 2 * v8);
  return (struct Animator_Base *)v3;
}

// Hidden C++ exception states: #wind=2
SerialXML *__fastcall SerialXML::SerialXML(SerialXML *this)
{
  size_t v2; // rax
  _WORD *v3; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = &Stash::`vftable';
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 16;
  *((_QWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 2) <= 0x9C4u )
  {
    operator delete(*((void **)this + 3));
    *((_QWORD *)this + 2) = 2500;
    v2 = 5000;
    if ( !is_mul_ok(0x9C4u, 2u) )
      v2 = -1;
    *((_QWORD *)this + 3) = operator new(v2);
  }
  *((_QWORD *)this + 1) = 0;
  v3 = (_WORD *)*((_QWORD *)this + 3);
  if ( v3 )
    *v3 = 0;
  return this;
}

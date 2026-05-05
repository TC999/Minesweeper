// Hidden C++ exception states: #wind=1
ResourceWav *__fastcall ResourceWav::ResourceWav(
        ResourceWav *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4)
{
  rsize_t v5; // rdi
  wchar_t *v8; // rax

  v5 = a3;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_DWORD *)this + 6) = 3;
  *(_QWORD *)this = &ResourceWav::`vftable';
  v8 = (wchar_t *)operator new[](saturated_mul(a3, 2u));
  *((_QWORD *)this + 9) = v8;
  if ( v8 )
    wcscpy_s(v8, v5, a2);
  *((_DWORD *)this + 20) = v5;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 52) = a4;
  return this;
}

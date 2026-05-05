// Hidden C++ exception states: #wind=1
ResourceWMA *__fastcall ResourceWMA::ResourceWMA(
        ResourceWMA *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  rsize_t v5; // r13
  unsigned int v8; // edi
  wchar_t *v9; // rax
  void *v10; // rax
  __int64 v11; // rcx

  v5 = a3;
  v8 = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_DWORD *)this + 6) = 3;
  *(_QWORD *)this = &ResourceWMA::`vftable';
  v9 = (wchar_t *)operator new[](saturated_mul(a3, 2u));
  *((_QWORD *)this + 13) = v9;
  if ( v9 )
    wcscpy_s(v9, v5, a2);
  *((_DWORD *)this + 28) = v5;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_BYTE *)this + 52) = a4;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 144) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  v10 = operator new[](saturated_mul(a4, 4u));
  *((_QWORD *)this + 9) = v10;
  if ( v10 && *((_BYTE *)this + 52) )
  {
    v11 = 0;
    do
    {
      *(_DWORD *)(v11 + *((_QWORD *)this + 9)) = 100;
      ++v8;
      v11 += 4;
    }
    while ( v8 < *((unsigned __int8 *)this + 52) );
  }
  return this;
}

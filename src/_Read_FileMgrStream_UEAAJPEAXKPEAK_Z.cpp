__int64 __fastcall FileMgrStream::Read(FileMgrStream *this, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax

  v5 = a3;
  if ( !*((_QWORD *)this + 1) )
    return 2147549183LL;
  v8 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 5) >= v8 )
    return 1;
  v9 = v8 - *((_DWORD *)this + 5);
  if ( a3 >= v9 )
    v5 = v9;
  memcpy(a2, (const void *)(*((_QWORD *)this + 1) + *((unsigned int *)this + 5)), v5);
  if ( a4 )
    *a4 = v5;
  *((_DWORD *)this + 5) += v5;
  return 0;
}

__int64 __fastcall FileMgrStream::Stat(FileMgrStream *this, struct tagSTATSTG *a2, int a3)
{
  if ( !a2 || a3 != 1 )
    return 2147942487LL;
  if ( !*((_QWORD *)this + 1) )
    return 2147549183LL;
  memset(a2, 0, 0x50u);
  *((_DWORD *)a2 + 2) = 2;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
  return 0;
}

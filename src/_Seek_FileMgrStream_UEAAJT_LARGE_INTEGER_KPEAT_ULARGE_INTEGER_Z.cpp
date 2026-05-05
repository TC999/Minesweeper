__int64 __fastcall FileMgrStream::Seek(FileMgrStream *this, union _LARGE_INTEGER a2, int a3, union _ULARGE_INTEGER *a4)
{
  int v5; // r11d
  int v6; // r8d
  DWORD v7; // eax

  if ( !*((_QWORD *)this + 1) )
    return 2147549183LL;
  v5 = *((_DWORD *)this + 5);
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 2147942487LL;
      *((_DWORD *)this + 5) = a2.LowPart + *((_DWORD *)this + 4);
    }
    else
    {
      *((_DWORD *)this + 5) = v5 + a2.LowPart;
    }
  }
  else
  {
    *((_DWORD *)this + 5) = a2.LowPart;
  }
  v7 = *((_DWORD *)this + 5);
  if ( v7 >= *((_DWORD *)this + 4) )
  {
    *((_DWORD *)this + 5) = v5;
    return 2147942487LL;
  }
  if ( a4 )
  {
    a4->HighPart = 0;
    a4->LowPart = v7;
  }
  return 0;
}

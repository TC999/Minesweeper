__int64 __fastcall CabLoader::ExtractCab_::_2_::LocalScope::CabNotify(int a1, unsigned int *a2)
{
  int v2; // ecx
  Str *v5; // rax
  size_t v6; // rsi
  __int64 v7; // rdi
  void *v8; // rax

  v2 = a1 - 2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      CabLoader::CabCloseFunc(*((void **)a2 + 5));
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = CabLoader::CabOpenFunc(*((LPCCH *)a2 + 1), 256);
    v6 = *a2;
    v7 = (__int64)v5;
    if ( *((_BYTE *)v5 + 40) )
    {
      operator delete(*((void **)v5 + 3));
      *(_DWORD *)(v7 + 32) = v6;
      v8 = operator new(v6);
      *(_DWORD *)(v7 + 36) = 0;
      *(_QWORD *)(v7 + 24) = v8;
    }
    Str::operator=(*((_QWORD *)a2 + 4), v7);
    return v7;
  }
}

__int64 __fastcall ATL::AtlWinModuleTerm(struct ATL::_ATL_WIN_MODULE70 *a1, HINSTANCE a2)
{
  int v5; // edi
  __int64 v6; // rsi
  void *v7; // rcx

  if ( !a1 )
    return 2147942487LL;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 != 72 )
      return 2147942487LL;
    v5 = 0;
    if ( *((int *)a1 + 16) > 0 )
    {
      v6 = 0;
      do
      {
        if ( v6 < 0 || v5 >= *((_DWORD *)a1 + 16) )
        {
          RaiseException(0xC000008C, 1u, 0, 0);
          JUMPOUT(0x10008FC1BLL);
        }
        UnregisterClassA((LPCSTR)*(unsigned __int16 *)(*((_QWORD *)a1 + 7) + v6), a2);
        ++v5;
        v6 += 2;
      }
      while ( v5 < *((_DWORD *)a1 + 16) );
    }
    v7 = (void *)*((_QWORD *)a1 + 7);
    if ( v7 )
    {
      free(v7);
      *((_QWORD *)a1 + 7) = 0;
    }
    *((_DWORD *)a1 + 16) = 0;
    *((_DWORD *)a1 + 17) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8));
    *(_DWORD *)a1 = 0;
  }
  return 0;
}

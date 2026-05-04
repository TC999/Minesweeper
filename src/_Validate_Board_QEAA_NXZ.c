char __fastcall Board::Validate(Board *this)
{
  int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // r11d
  _DWORD **i; // r10
  _DWORD **j; // r8

  v2 = *((_DWORD *)this + 9);
  if ( v2 >= 1 && v2 <= 4 )
  {
    if ( v2 == 4
      || (v3 = EDifficultyToWidth(),
          v4 = EDifficultyToHeight(*((unsigned int *)this + 9)),
          v5 = EDifficultyToMineCount(*((unsigned int *)this + 9)),
          __PAIR64__(v3, v4) == *(_QWORD *)((char *)this + 12))
      && v5 == *((_DWORD *)this + 2) )
    {
      v6 = *((_DWORD *)this + 4);
      v7 = 0;
      if ( v6 > 0 )
      {
        v8 = *((_DWORD *)this + 3);
        if ( v8 > 0 )
        {
          v9 = *((_QWORD *)this + 10);
          if ( v9 )
          {
            v10 = *((_QWORD *)this + 11);
            if ( v10 )
            {
              if ( v6 == *(_DWORD *)v9 )
              {
                v11 = 0;
                for ( i = *(_DWORD ***)(v9 + 16); v8 == **i; ++i )
                {
                  if ( ++v11 >= v6 )
                  {
                    if ( v6 == *(_DWORD *)v10 )
                    {
                      for ( j = *(_DWORD ***)(v10 + 16); v8 == **j; ++j )
                      {
                        if ( ++v7 >= v6 )
                          return 1;
                      }
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

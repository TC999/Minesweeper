__int64 __fastcall Board::attemptRevealStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r13
  __int64 v10; // r8
  int v11; // r11d
  int v12; // r10d
  __int64 v13; // r9
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  Str *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _BYTE v25[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (int)a2;
  v4 = a3;
  v5 = a2;
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 8LL * a2) + 16LL)
                           + 4LL * a3);
  if ( (_DWORD)result == 9 || (_DWORD)result == 11 )
  {
    ++*(_DWORD *)(a1 + 24);
    v8 = 0;
    v9 = v3;
    v10 = -1;
    v11 = v3 - 1;
    do
    {
      if ( v10 + v9 >= 0 && v11 < *(_DWORD *)(a1 + 16) )
      {
        v12 = -1;
        v13 = (unsigned int)(v4 - 1);
        do
        {
          if ( (int)v13 >= 0
            && (int)v13 < *(_DWORD *)(a1 + 12)
            && (v10 || v12)
            && *(_BYTE *)(v13
                        + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) + 8 * (v10 + v9)) + 16LL)) )
          {
            ++v8;
          }
          ++v12;
          v13 = (unsigned int)(v13 + 1);
        }
        while ( v12 < 2 );
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 2 );
    v14 = 12;
    if ( v8 )
    {
      v15 = v8 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 == 1 )
                    {
                      v14 = 8;
                    }
                    else
                    {
                      v22 = Str::Str((Str *)v25, L"Unexpected value returned from getAdjMineCount");
                      LOBYTE(v23) = 1;
                      StrErr(v22, v23);
                    }
                  }
                  else
                  {
                    v14 = 7;
                  }
                }
                else
                {
                  v14 = 6;
                }
              }
              else
              {
                v14 = 5;
              }
            }
            else
            {
              v14 = 4;
            }
          }
          else
          {
            v14 = 3;
          }
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 8 * v5) + 16LL);
    if ( *(_DWORD *)(v24 + 4 * v4) != v14 )
    {
      *(_DWORD *)(v24 + 4 * v4) = v14;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Game::G + 2) + 24LL) + 8 * v5) + 16LL)
                           + 8 * v4)
               + 64LL) = 1;
    }
    return v14;
  }
  return result;
}

__int64 __fastcall COberStatusbar::onTimer(COberStatusbar *this, UINT_PTR a2, int a3)
{
  WPARAM v6; // rsi
  int v7; // r9d
  int v8; // r8d
  char *v9; // rbx
  _DWORD *v10; // r10
  int v11; // ebp
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  LPARAM v14; // r9
  _DWORD *v15; // rax

  if ( a3 >= 12 )
    return 1;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v9 = (char *)this + 288 * v6 + 144;
  v10 = *(_DWORD **)v9;
  v11 = 100 * *((_DWORD *)this + 72 * v6 + 41);
  *((_DWORD *)v9 + 5) = *((_DWORD *)this + 72 * v6 + 41) + 1;
  if ( *v10 != 3 )
  {
    v12 = 0;
    v13 = v10 + 3;
    while ( v12 < 100 )
    {
      v7 += *v13;
      if ( v11 < v7 )
      {
        v15 = &v10[4 * v8];
        if ( v15 == *((_DWORD **)v9 + 1) )
          ++*((_DWORD *)v9 + 6);
        else
          *((_DWORD *)v9 + 6) = 0;
        if ( v15 )
        {
          *((_QWORD *)v9 + 1) = v15;
          v6 |= 0x1000uLL;
          v14 = (LPARAM)v9;
          goto LABEL_9;
        }
        break;
      }
      v12 += 4;
      ++v8;
      v13 += 4;
      if ( v10[v12] == 3 )
        break;
    }
  }
  KillTimer(*((HWND *)this + 1), a2);
  v14 = (LPARAM)(v9 + 28);
LABEL_9:
  SendMessageW(*((HWND *)this + 1), 0x40Bu, v6, v14);
  return 0;
}

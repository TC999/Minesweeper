void __fastcall Board::StartAlphaAnimation(Board *this, int a2, int a3, float a4, bool a5)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  void *v12; // rax

  v8 = operator new(0x1Cu);
  v9 = v8;
  if ( v8 )
  {
    v8[6] = 0;
    *((float *)v8 + 2) = a4;
    *v8 = a2;
    v8[1] = a3;
    v8[5] = 1041865114;
    if ( a5 )
    {
      v8[3] = 0;
      v8[4] = 255;
    }
    else
    {
      v8[4] = 0;
      v8[3] = 255;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = *((_DWORD *)this + 15);
  if ( ++*((_DWORD *)this + 14) > v10 )
  {
    v11 = *((_DWORD *)this + 16) + v10;
    *((_DWORD *)this + 15) = v11;
    v12 = realloc(*((void **)this + 9), 8 * v11);
    if ( !v12 )
    {
      CheckAllocation(0);
      return;
    }
    *((_QWORD *)this + 9) = v12;
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * (unsigned int)(*((_DWORD *)this + 14) - 1)) = v9;
}

void __fastcall DelayedExplosionCheck::HandleEvent(DelayedExplosionCheck *this, unsigned int a2, UIBoardCanvas *a3)
{
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r11
  unsigned int v11; // r10d
  __int64 v12; // r11

  *((_BYTE *)this + 13) = 1;
  Timer::DeleteEvent(g_pTimer, a2);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 5);
  v7 = *((_DWORD *)this + 4);
  *((_BYTE *)this + 12) = 0;
  if ( UIBoardCanvas::explodeMinesWithDist(a3, v7, v6, v5) )
  {
    UIBoardCanvas::addExplosionChecker(a3, *((_DWORD *)this + 4), *((_DWORD *)this + 5), *((_DWORD *)this + 6) + 1);
    v10 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      if ( (unsigned int)v8 >= *((_DWORD *)a3 + 70) )
        break;
      if ( *(DelayedExplosionCheck **)(v9 + *((_QWORD *)a3 + 37)) == this )
      {
        v11 = v8;
        if ( (unsigned int)v8 < *((_DWORD *)a3 + 70) - 1 )
        {
          v12 = v9;
          do
          {
            ++v11;
            *(_QWORD *)(v12 + *((_QWORD *)a3 + 37)) = *(_QWORD *)(v12 + *((_QWORD *)a3 + 37) + 8);
            v12 += 8;
          }
          while ( v11 < *((_DWORD *)a3 + 70) - 1 );
        }
        --*((_DWORD *)a3 + 70);
        v10 = 1;
      }
      v8 = (unsigned int)(v8 + 1);
      v9 += 8;
    }
    while ( !v10 );
  }
  (**(void (__fastcall ***)(DelayedExplosionCheck *, __int64, __int64, __int64))this)(this, 1, v8, v9);
}

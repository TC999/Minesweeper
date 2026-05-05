void __fastcall DelayedExplosion::HandleEvent(DelayedExplosion *this, unsigned int a2, UIBoardCanvas *a3)
{
  int v5; // r8d
  int v6; // edx
  char v7; // r11
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // r11

  *((_BYTE *)this + 13) = 1;
  Timer::DeleteEvent(g_pTimer, a2);
  v5 = *((_DWORD *)this + 5);
  v6 = *((_DWORD *)this + 4);
  *((_BYTE *)this + 12) = 0;
  UIBoardCanvas::doMineExplosion(a3, v6, v5, 0);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do
  {
    if ( (unsigned int)v8 >= *((_DWORD *)a3 + 76) )
      break;
    if ( *(DelayedExplosion **)(v9 + *((_QWORD *)a3 + 40)) == this )
    {
      v10 = v8;
      if ( (unsigned int)v8 < *((_DWORD *)a3 + 76) - 1 )
      {
        v11 = v9;
        do
        {
          ++v10;
          *(_QWORD *)(v11 + *((_QWORD *)a3 + 40)) = *(_QWORD *)(v11 + *((_QWORD *)a3 + 40) + 8);
          v11 += 8;
        }
        while ( v10 < *((_DWORD *)a3 + 76) - 1 );
      }
      --*((_DWORD *)a3 + 76);
      v7 = 1;
    }
    v8 = (unsigned int)(v8 + 1);
    v9 += 8;
  }
  while ( !v7 );
  (**(void (__fastcall ***)(DelayedExplosion *, __int64, __int64, __int64))this)(this, 1, v8, v9);
}

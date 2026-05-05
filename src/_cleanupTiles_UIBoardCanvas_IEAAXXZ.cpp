void __fastcall UIBoardCanvas::cleanupTiles(UIBoardCanvas *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  void *v8; // rcx

  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 31) = 0;
  v1 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      if ( **(_DWORD **)(v3 + *((_QWORD *)this + 3)) )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v5 + *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)this + 3)) + 16LL));
          if ( v6 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1);
          ++v4;
          *(_QWORD *)(v5 + *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)this + 3)) + 16LL)) = 0;
          v5 += 8;
        }
        while ( v4 < **(_DWORD **)(v3 + *((_QWORD *)this + 3)) );
      }
      v7 = *(_QWORD **)(v3 + *((_QWORD *)this + 3));
      if ( v7 )
      {
        v8 = (void *)v7[2];
        if ( v8 )
          free(v8);
        operator delete(v7);
      }
      ++v1;
      *(_QWORD *)(v3 + *((_QWORD *)this + 3)) = 0;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 2) );
  }
  *((_DWORD *)this + 2) = 0;
}

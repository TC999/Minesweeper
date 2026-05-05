void __fastcall UIBoardCanvas::clearExplosionCheckers(UIBoardCanvas *this)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 70) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)this + 37));
      if ( !*(_BYTE *)(v4 + 13) )
      {
        if ( v4 )
          (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1);
        *(_QWORD *)(v3 + *((_QWORD *)this + 37)) = 0;
      }
      ++v1;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 70) );
  }
  *((_DWORD *)this + 70) = 0;
}

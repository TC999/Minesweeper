void __fastcall Stash::Cleanup(Stash *this)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = 0;
    do
    {
      v4 = *((_QWORD *)this + 3);
      if ( *(_QWORD *)(v4 + v3) )
      {
        operator delete(*(void **)(*(_QWORD *)(v4 + v3) + 8LL));
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v3) + 8LL) = 0;
        operator delete(*(void **)(*((_QWORD *)this + 3) + v3));
        *(_QWORD *)(v3 + *((_QWORD *)this + 3)) = 0;
      }
      ++v1;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 2) );
  }
  v5 = (void *)*((_QWORD *)this + 3);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  free(v5);
  *((_QWORD *)this + 3) = 0;
}

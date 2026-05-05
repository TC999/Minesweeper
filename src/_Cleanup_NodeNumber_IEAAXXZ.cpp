void __fastcall NodeNumber::Cleanup(NodeNumber *this)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 104) )
  {
    v3 = 0;
    do
    {
      v4 = *((_QWORD *)this + 54);
      if ( *(_QWORD *)(v4 + v3) )
      {
        NodeBase::DeleteSelf(*(NodeBase **)(v4 + v3));
        *(_QWORD *)(v3 + *((_QWORD *)this + 54)) = 0;
      }
      ++v1;
      v3 += 8;
    }
    while ( v1 < *((_DWORD *)this + 104) );
  }
  v5 = (void *)*((_QWORD *)this + 54);
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  free(v5);
  *((_QWORD *)this + 54) = 0;
}

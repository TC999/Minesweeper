void __fastcall NodeBase::RemoveListener(NodeBase *this, struct IEventListener *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // r9d
  struct IEventListener **v5; // rax
  __int64 v6; // r10

  v3 = *((_DWORD *)this + 50);
  v4 = 0;
  if ( v3 )
  {
    v5 = (struct IEventListener **)*((_QWORD *)this + 27);
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    if ( v4 < *((_DWORD *)this + 50) - 1 )
    {
      v6 = 8LL * (int)v4;
      do
      {
        ++v4;
        *(_QWORD *)(v6 + *((_QWORD *)this + 27)) = *(_QWORD *)(v6 + *((_QWORD *)this + 27) + 8);
        v6 += 8;
      }
      while ( v4 < *((_DWORD *)this + 50) - 1 );
    }
    --*((_DWORD *)this + 50);
  }
  else
  {
LABEL_5:
    Log(0x100u, L"RemoveListener(), event did not exist", this);
  }
}

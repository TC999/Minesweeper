void __fastcall NodeBase::Render(NodeBase *this, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  _BYTE *v6; // rcx

  if ( *((_BYTE *)this + 41) )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      v5 = 0;
      do
      {
        v6 = *(_BYTE **)(v5 + *((_QWORD *)this + 12));
        if ( !v6[40] )
          (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, a2);
        ++v4;
        v5 += 8;
      }
      while ( v4 < *((_DWORD *)this + 20) );
    }
  }
}

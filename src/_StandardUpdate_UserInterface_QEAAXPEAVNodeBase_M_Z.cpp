void __fastcall UserInterface::StandardUpdate(UserInterface *this, struct NodeBase *a2, float a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx

  v3 = 0;
  if ( *((_DWORD *)this + 58) )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(v5 + *((_QWORD *)this + 31));
      if ( v6 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 104LL))(v6, 1);
      ++v3;
      v5 += 8;
    }
    while ( v3 < *((_DWORD *)this + 58) );
  }
  *((_DWORD *)this + 58) = 0;
}

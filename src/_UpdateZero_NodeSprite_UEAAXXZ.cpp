void __fastcall NodeSprite::UpdateZero(NodeSprite *this)
{
  int v2; // r8d
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax

  NodeBase::UpdateZero(this);
  v2 = *((_DWORD *)this + 6) * *((_DWORD *)this + 7) * *((_DWORD *)this + 97) / 10000;
  v3 = *((_DWORD *)this + 6) * *((_DWORD *)this + 8) * *((_DWORD *)this + 98) / 10000;
  if ( *((_DWORD *)this + 106) )
  {
    v4 = *((_QWORD *)this + 52);
    if ( v4 )
    {
      v5 = 32LL * *((unsigned int *)this + 107);
      v2 += *(_DWORD *)(v5 + v4 + 24);
      v3 += *(_DWORD *)(v5 + v4 + 28);
    }
  }
  *((_DWORD *)this + 66) -= v2;
  *((_DWORD *)this + 67) -= v3;
  *((_DWORD *)this + 68) -= v2;
  *((_DWORD *)this + 69) -= v3;
}

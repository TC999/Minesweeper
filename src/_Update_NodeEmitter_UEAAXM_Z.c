void __fastcall NodeEmitter::Update(NodeEmitter *this, float a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8

  v3 = (*(__int64 (__fastcall **)(NodeEmitter *, _QWORD))(*(_QWORD *)this + 120LL))(this, *((unsigned int *)this + 145));
  if ( v3 != *((_DWORD *)this + 145) )
  {
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 145) = v3;
    (*(void (__fastcall **)(NodeEmitter *, _QWORD))(v4 + 112))(this, v3);
  }
  NodeSprite::Update(this, a2);
}

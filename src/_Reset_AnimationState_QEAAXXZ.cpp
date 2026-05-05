void __fastcall AnimationState::Reset(AnimationState *this)
{
  AnimationState *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // edx
  _QWORD *v5; // rcx

  v1 = this;
  if ( *((_BYTE *)this + 41) )
  {
    v2 = *((_QWORD *)this + 4);
    v3 = *(_DWORD *)(v2 + 8);
    v4 = v3 - 1;
    if ( v3 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL * (int)v4);
      while ( *v5 )
      {
        --v4;
        --v5;
        if ( v4 >= v3 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v4 = 0;
    }
    this = v1;
  }
  else
  {
    v4 = 0;
  }
  AnimationState::ResetToSync(this, v4);
  *((_BYTE *)v1 + 24) = 0;
}

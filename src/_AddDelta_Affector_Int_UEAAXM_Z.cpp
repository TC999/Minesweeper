void __fastcall Affector_Int::AddDelta(Affector_Int *this, float a2)
{
  float v2; // xmm1_4
  __int64 v4; // rsi
  unsigned int v5; // r11d
  _DWORD *v6; // rcx
  __int64 GameEvent; // rbx
  float v8; // xmm0_4
  __int64 v9; // rsi
  unsigned int v10; // r11d
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  float v13; // xmm0_4

  v2 = a2 + *((float *)this + 6);
  *((float *)this + 6) = v2;
  if ( v2 >= 1.0 )
  {
    do
    {
      v4 = (*(unsigned int (__fastcall **)(Affector_Int *))(*(_QWORD *)this + 48LL))(this) + 1;
      (*(void (__fastcall **)(Affector_Int *, __int64))(*(_QWORD *)this + 56LL))(this, v4);
      v5 = 0;
      if ( *((_DWORD *)this + 8) )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 6);
        while ( *v6 != (_DWORD)v4 )
        {
          ++v5;
          ++v6;
          if ( v5 >= *((_DWORD *)this + 8) )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v5 = -1;
      }
      if ( v5 != -1
        && !*((_BYTE *)NodeBase::GetAnimationState(*((NodeBase **)this + 1), *((unsigned int *)this + 4)) + 42) )
      {
        GameEvent = Event::CreateGameEvent(0xEu);
        *(_DWORD *)(GameEvent + 40) = v4;
        *(_QWORD *)(GameEvent + 24) = *((_QWORD *)this + 1);
        *(_DWORD *)(GameEvent + 32) = *((_DWORD *)this + 4);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1), GameEvent);
        (**(void (__fastcall ***)(__int64, __int64))GameEvent)(GameEvent, 1);
      }
      v8 = *((float *)this + 6) - 1.0;
      *((float *)this + 6) = v8;
    }
    while ( v8 >= 1.0 );
  }
  if ( *((float *)this + 6) <= -1.0 )
  {
    do
    {
      v9 = (*(unsigned int (__fastcall **)(Affector_Int *))(*(_QWORD *)this + 48LL))(this) - 1;
      (*(void (__fastcall **)(Affector_Int *, __int64))(*(_QWORD *)this + 56LL))(this, v9);
      v10 = 0;
      if ( *((_DWORD *)this + 8) )
      {
        v11 = (_DWORD *)*((_QWORD *)this + 6);
        while ( *v11 != (_DWORD)v9 )
        {
          ++v10;
          ++v11;
          if ( v10 >= *((_DWORD *)this + 8) )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v10 = -1;
      }
      if ( v10 != -1
        && !*((_BYTE *)NodeBase::GetAnimationState(*((NodeBase **)this + 1), *((unsigned int *)this + 4)) + 42) )
      {
        v12 = Event::CreateGameEvent(0xEu);
        *(_DWORD *)(v12 + 40) = v9;
        *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 1);
        *(_DWORD *)(v12 + 32) = *((_DWORD *)this + 4);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1), v12);
        (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1);
      }
      v13 = *((float *)this + 6) + 1.0;
      *((float *)this + 6) = v13;
    }
    while ( v13 <= -1.0 );
  }
}

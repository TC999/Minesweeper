__int64 __fastcall NodeBase::GetAccessState(NodeBase *this)
{
  unsigned int v2; // ebx
  __int64 GameEvent; // rax
  __int64 v4; // rsi
  unsigned int v5; // ecx
  _DWORD *v6; // rax

  v2 = 0;
  if ( UserInterface::GetCurrentFocus(g_pUserInterface) == this )
    v2 = 4;
  GameEvent = Event::CreateGameEvent(16);
  *(_BYTE *)(GameEvent + 24) = 0;
  v4 = GameEvent;
  (*(void (__fastcall **)(NodeBase *, __int64))(*(_QWORD *)this + 16LL))(this, GameEvent);
  if ( *(_BYTE *)(v4 + 24) )
    v2 |= 0x100000u;
  if ( !*((_BYTE *)this + 41) || *(_BYTE *)(v4 + 26) )
    v2 |= 0x8000u;
  v5 = 0;
  if ( !*((_DWORD *)this + 26) )
    goto LABEL_14;
  v6 = (_DWORD *)*((_QWORD *)this + 15);
  while ( *v6 != 2 )
  {
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 26) )
      goto LABEL_14;
  }
  if ( *((_BYTE *)this + 72) )
  {
LABEL_14:
    if ( !*(_BYTE *)(v4 + 25) )
      goto LABEL_16;
  }
  v2 |= 1u;
LABEL_16:
  (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1);
  if ( *((_BYTE *)this + 196) )
    v2 |= 2u;
  if ( *((_BYTE *)this + 197) )
    v2 |= 0x200000u;
  return v2;
}

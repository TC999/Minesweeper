struct Event *Event_DoDefaultAction::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x18u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 24;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

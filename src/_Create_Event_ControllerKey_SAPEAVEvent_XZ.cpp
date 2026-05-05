struct Event *Event_ControllerKey::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_BYTE *)result + 26) = 0;
  *((_DWORD *)result + 4) = 35;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

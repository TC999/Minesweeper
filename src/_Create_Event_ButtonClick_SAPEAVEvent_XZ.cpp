struct Event *Event_ButtonClick::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x28u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 1;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

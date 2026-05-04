struct Event *Event_DragCheck::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 25;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

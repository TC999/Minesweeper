struct Event *Event_DragEnd::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x18u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 28;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

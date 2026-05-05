struct Event *Event_MouseLeave::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x30u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 3;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

struct Event *Event_MouseEnter::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x30u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 2;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

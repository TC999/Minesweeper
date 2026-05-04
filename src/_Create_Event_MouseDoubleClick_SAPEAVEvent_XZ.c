struct Event *Event_MouseDoubleClick::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x38u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 5;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

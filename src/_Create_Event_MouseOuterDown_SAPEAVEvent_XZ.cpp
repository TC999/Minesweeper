struct Event *Event_MouseOuterDown::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x38u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 9;
  *((_BYTE *)result + 52) = 0;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

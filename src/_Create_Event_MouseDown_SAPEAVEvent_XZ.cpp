struct Event *Event_MouseDown::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x38u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 4;
  *((_BYTE *)result + 52) = 0;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

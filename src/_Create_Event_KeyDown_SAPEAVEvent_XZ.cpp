struct Event *Event_KeyDown::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_BYTE *)result + 26) = 0;
  *((_DWORD *)result + 4) = 29;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

struct Event *Event_FocusCheck::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 16;
  *((_BYTE *)result + 25) = 0;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  *((_BYTE *)result + 26) = 0;
  return result;
}

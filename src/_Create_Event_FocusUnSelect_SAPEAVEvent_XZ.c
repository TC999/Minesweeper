struct Event *Event_FocusUnSelect::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 4) = 20;
  *(_QWORD *)result = &Event_FocusUnSelect::`vftable';
  return result;
}

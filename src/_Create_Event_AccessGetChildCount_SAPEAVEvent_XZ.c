struct Event *Event_AccessGetChildCount::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 6) = 0;
  *((_DWORD *)result + 4) = 32;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

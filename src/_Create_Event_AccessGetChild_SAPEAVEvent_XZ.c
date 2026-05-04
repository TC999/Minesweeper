struct Event *Event_AccessGetChild::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x28u);
  if ( !result )
    return 0;
  *((_QWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 33;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

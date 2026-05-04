struct Event *Event_AccessGetParent::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x20u);
  if ( !result )
    return 0;
  *((_QWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 31;
  *(_QWORD *)result = &Event_MouseOuterDown::`vftable';
  return result;
}

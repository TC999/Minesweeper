struct Event *Event_AnimationFrame::Create(void)
{
  struct Event *result; // rax

  result = (struct Event *)operator new(0x30u);
  if ( !result )
    return 0;
  *((_QWORD *)result + 5) = 0;
  *((_DWORD *)result + 4) = 12;
  *(_QWORD *)result = &Event_AnimationFrame::`vftable';
  return result;
}

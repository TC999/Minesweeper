// Hidden C++ exception states: #wind=2
AnimationDescriptor *__fastcall AnimationDescriptor::AnimationDescriptor(AnimationDescriptor *this)
{
  char *v2; // rcx

  v2 = (char *)this + 8;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 16;
  *((_QWORD *)v2 + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 16;
  *((_QWORD *)this + 6) = 0;
  Array<IEventListener *>::Add((__int64)v2, 0);
  Array<IEventListener *>::Add((__int64)this + 32, 0);
  *(_BYTE *)this = 1;
  return this;
}

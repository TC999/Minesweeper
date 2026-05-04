// Hidden C++ exception states: #wind=1
char __fastcall ResourceAnimation::Recreate(ResourceAnimation *this)
{
  AnimationDescriptor *v3; // rax
  AnimationDescriptor *v4; // rax
  const unsigned __int16 *v5; // rdx

  if ( *((_QWORD *)this + 6) )
    return 1;
  v3 = (AnimationDescriptor *)operator new(0x38u);
  if ( v3 )
    v4 = AnimationDescriptor::AnimationDescriptor(v3);
  else
    v4 = 0;
  *((_QWORD *)this + 6) = v4;
  if ( v4 )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)this + 7);
    if ( v5 )
    {
      if ( AnimationDescriptor::ParseXml(v4, v5) )
      {
        return 1;
      }
      else
      {
        Log(4u, 184, "ResourceAnimation.cpp", L"ParseXml failed (%s)", *((_QWORD *)this + 7));
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    CheckAllocation(0);
    return 0;
  }
}

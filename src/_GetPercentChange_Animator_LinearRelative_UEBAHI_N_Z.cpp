__int64 __fastcall Animator_LinearRelative::GetPercentChange(Animator_LinearRelative *this, __int64 a2, char a3)
{
  return (a3 != 0 ? -1 : 1) * (int)(float)(100000.0 / (float)(*((float *)this + 5) * 30.0));
}

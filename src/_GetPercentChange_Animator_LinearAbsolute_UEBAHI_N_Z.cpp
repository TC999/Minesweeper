__int64 __fastcall Animator_LinearAbsolute::GetPercentChange(Animator_LinearAbsolute *this, int a2, char a3)
{
  return (unsigned int)(-a2
                      - (int)(float)((float)((float)((int)(float)((float)((float)((float)a2 / 100000.0)
                                                                        * (float)(int)(float)(*((float *)this + 6) * 30.0))
                                                                + 0.5)
                                                   - (a3 != 0 ? 2 : 0)
                                                   + 1)
                                           / (float)(int)(float)(*((float *)this + 6) * 30.0))
                                   * -100000.0));
}

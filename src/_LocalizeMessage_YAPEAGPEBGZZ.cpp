unsigned __int16 *LocalizeMessage(const unsigned __int16 *a1, ...)
{
  va_list v2; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  va_copy(v2, va);
  return LocalizeMessageV(a1, &v2);
}

Str *__fastcall Str::FromNumber(Str *a1, unsigned int a2)
{
  int v4; // [rsp+20h] [rbp-128h]
  wchar_t Buffer[128]; // [rsp+30h] [rbp-118h] BYREF

  v4 = 0;
  swprintf_s(Buffer, 0x80u, L"%i", a2, v4);
  Str::Str(a1, Buffer);
  return a1;
}

struct Image *__fastcall Gdiplus::Image::Clone(Gdiplus::Image *this)
{
  int v2; // eax
  __int64 v3; // r11
  int v4; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = ((__int64 (__fastcall *)(_QWORD, __int64 *))GdipCloneImage)(*((_QWORD *)this + 1), &v6);
  if ( v2 )
    *((_DWORD *)this + 4) = v2;
  v3 = GdipAlloc(24);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)this + 4);
  *(_QWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 16) = v4;
  *(_QWORD *)v3 = &Gdiplus::Image::`vftable';
  return (struct Image *)v3;
}

Gdiplus::Font *__fastcall Gdiplus::Font::Font(Gdiplus::Font *this, HDC a2, HFONT a3)
{
  int ObjectA; // eax
  HDC v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  Gdiplus::Font *result; // rax
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  _BYTE pv[64]; // [rsp+28h] [rbp-50h] BYREF

  v10 = 0;
  if ( !DialogHelper::m_hFont )
  {
    v6 = a2;
    goto LABEL_5;
  }
  ObjectA = GetObjectA(DialogHelper::m_hFont, 60, pv);
  v6 = a2;
  if ( !ObjectA )
  {
LABEL_5:
    v7 = ((__int64 (__fastcall *)(HDC, __int64 *))GdipCreateFontFromDC)(v6, &v10);
    goto LABEL_6;
  }
  v7 = ((__int64 (__fastcall *)(HDC, _BYTE *, __int64 *))GdipCreateFontFromLogfontA)(a2, pv, &v10);
LABEL_6:
  v8 = v10;
  *((_DWORD *)this + 2) = v7;
  result = this;
  *(_QWORD *)this = v8;
  return result;
}

struct Image *__fastcall DialogHelper::LoadImageMCE(
        DialogHelper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // ecx

  v3 = 0;
  if ( this )
  {
    v5 = operator new(0x20u);
    v6 = v5;
    if ( v5 )
    {
      v5[1] = 0;
      *((_DWORD *)v5 + 4) = 0;
      *((_DWORD *)v5 + 5) = 0;
      *((_DWORD *)v5 + 6) = 1;
      *((_BYTE *)v5 + 28) = 1;
      *v5 = &FileMgrStream::`vftable';
    }
    else
    {
      v6 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, DialogHelper *, _QWORD))(*v6 + 112LL))(v6, this, 0) )
    {
      v3 = GdipAlloc(24);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 8) = 0;
        *(_QWORD *)v3 = &Gdiplus::Image::`vftable';
        *(_DWORD *)(v3 + 16) = ((__int64 (__fastcall *)(_QWORD *))GdipLoadImageFromStream)(v6);
      }
      else
      {
        v3 = 0;
      }
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      if ( v3 )
      {
        v7 = *(_DWORD *)(v3 + 16);
        *(_DWORD *)(v3 + 16) = 0;
        if ( v7 )
          (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
  }
  return (struct Image *)v3;
}

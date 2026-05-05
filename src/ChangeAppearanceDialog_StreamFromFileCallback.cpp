_QWORD *__fastcall ChangeAppearanceDialog::StreamFromFileCallback(__int64 a1)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  if ( !a1 )
    return 0;
  v3 = operator new(0x20u);
  v4 = v3;
  if ( v3 )
  {
    v3[1] = 0;
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 6) = 1;
    *((_BYTE *)v3 + 28) = 1;
    *v3 = &FileMgrStream::`vftable';
  }
  else
  {
    v4 = 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v4 + 112LL))(v4, a1, 0) )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    return 0;
  }
  return v4;
}

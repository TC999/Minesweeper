void __fastcall ResourceWMA::Update(ResourceWMA *this)
{
  unsigned int v1; // edi
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 144) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**((_QWORD **)this + 17) + 32LL))(
      *((_QWORD *)this + 17),
      &v5,
      0);
    v3 = *((_DWORD *)this + 12);
    if ( abs32(*((_DWORD *)this + 29) - v5) > v3 )
    {
      ResourceWMA::FillBuffer(this, 0, v3);
      *((_DWORD *)this + 29) = v5;
      return;
    }
    v4 = v3 >> 1;
    if ( *((_DWORD *)this + 29) > v5 )
    {
      v1 = v4;
LABEL_8:
      *((_DWORD *)this + 29) = v5;
      ResourceWMA::FillBuffer(this, v1, v4);
      return;
    }
    if ( *((_DWORD *)this + 29) < v4 && v5 > v4 )
      goto LABEL_8;
    *((_DWORD *)this + 29) = v5;
  }
}

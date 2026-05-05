void __fastcall D3DXTex::CCodec::QuantizeColorKey(D3DXTex::CCodec *this)
{
  int v1; // r12d
  __int64 v2; // r13
  int v3; // ebp
  __int64 v4; // r14
  int v5; // r15d
  int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 37);
  v2 = *((_QWORD *)this + 5);
  v3 = *((_DWORD *)this + 34);
  v4 = *((_QWORD *)this + 8);
  v5 = *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 38);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 37) = v7;
  *((_DWORD *)this + 34) = 1;
  *((_QWORD *)this + 5) = &v10;
  *((_QWORD *)this + 8) = &unk_1000A6570;
  if ( *((_DWORD *)this + 3) != 1 && *((_DWORD *)this + 3) != 4 )
  {
    v8 = *((_DWORD *)this + 26);
    v9 = *((_QWORD *)this + 14);
    *((_DWORD *)this + 26) = 1;
    *((_QWORD *)this + 14) = (char *)this + 48;
    D3DXTex::CCodec::Convert(this, (D3DXTex::CCodec *)((char *)this + 48));
    *((_DWORD *)this + 26) = v8;
    *((_QWORD *)this + 14) = v9;
  }
  (*(void (__fastcall **)(D3DXTex::CCodec *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 16LL))(
    this,
    0,
    0,
    (char *)this + 48);
  (*(void (__fastcall **)(D3DXTex::CCodec *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 8LL))(
    this,
    0,
    0,
    (char *)this + 48);
  *((_DWORD *)this + 34) = v3;
  *((_DWORD *)this + 37) = v1;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 8) = v4;
  *((_DWORD *)this + 7) = v5;
}

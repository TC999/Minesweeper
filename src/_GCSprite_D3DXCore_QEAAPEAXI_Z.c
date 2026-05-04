D3DXCore::CSprite *__fastcall D3DXCore::CSprite::`scalar deleting destructor'(D3DXCore::CSprite *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &D3DXCore::CSprite::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 2) = 0;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 3) = 0;
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 4) = 0;
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 5) = 0;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 6) = 0;
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 9) = 0;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 8) = 0;
  }
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 11) = 0;
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 10) = 0;
  }
  v11 = *((_QWORD *)this + 13);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 13) = 0;
  }
  v12 = *((_QWORD *)this + 12);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 12) = 0;
  }
  v13 = *((_QWORD *)this + 20);
  if ( v13 )
    operator delete((void *)(v13 - *(unsigned __int8 *)(v13 - 1)));
  operator delete(*((void **)this + 29));
  operator delete(*((void **)this + 30));
  operator delete(*((void **)this + 31));
  operator delete(*((void **)this + 32));
  operator delete(this);
  return this;
}

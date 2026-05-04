__int64 __fastcall D3DXTex::CLockSurface::Unlock(D3DXTex::CLockSurface *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct IDirect3DSurface9 *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 || (v2 = *((_QWORD *)this + 1)) != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      if ( *((_QWORD *)this + 4) )
      {
        if ( (*(_BYTE *)this & 1) == 0 )
        {
          D3DXDebugMuteInt(1u);
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 240LL))(
                 *((_QWORD *)this + 4),
                 *((_QWORD *)this + 2),
                 0,
                 *((_QWORD *)this + 1),
                 0);
          D3DXDebugMuteInt(0);
          if ( v3 < 0 )
          {
            D3DXDebugMuteInt(1u);
            D3DXTex::InternalCopy(*((D3DXTex **)this + 2), *((struct IDirect3DSurface9 **)this + 1), v4);
            D3DXDebugMuteInt(0);
          }
        }
      }
    }
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 2) = 0;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 3) = 0;
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 4) = 0;
  }
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 1) = 0;
  }
  return 0;
}

__int64 __fastcall D3DXCore::CSprite::GetDevice(D3DXCore::CSprite *this, struct IDirect3DDevice9 **a2)
{
  if ( !a2 )
    return 2289436780LL;
  *a2 = (struct IDirect3DDevice9 *)*((_QWORD *)this + 3);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
  return 0;
}

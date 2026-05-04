__int64 __fastcall D3DXCore::CFont::GetDevice(D3DXCore::CFont *this, struct IDirect3DDevice9 **a2)
{
  if ( !a2 )
    return 2289436780LL;
  *a2 = (struct IDirect3DDevice9 *)*((_QWORD *)this + 2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
  return 0;
}

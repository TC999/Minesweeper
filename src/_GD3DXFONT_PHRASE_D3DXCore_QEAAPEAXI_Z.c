D3DXCore::D3DXFONT_PHRASE *__fastcall D3DXCore::D3DXFONT_PHRASE::`scalar deleting destructor'(
        D3DXCore::D3DXFONT_PHRASE *this)
{
  D3DXCore::D3DXFONT_PHRASE *v2; // rcx
  D3DXCore::D3DXFONT_PHRASE *v3; // rcx

  v2 = (D3DXCore::D3DXFONT_PHRASE *)*((_QWORD *)this + 1);
  if ( v2 )
    D3DXCore::D3DXFONT_PHRASE::`scalar deleting destructor'(v2, 1u);
  v3 = (D3DXCore::D3DXFONT_PHRASE *)*((_QWORD *)this + 2);
  if ( v3 )
    D3DXCore::D3DXFONT_PHRASE::`scalar deleting destructor'(v3, 1u);
  operator delete(*((void **)this + 4));
  operator delete(*((void **)this + 5));
  operator delete(this);
  return this;
}

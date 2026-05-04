void **__fastcall D3DXCore::CBuffer::`vector deleting destructor'(void **this, char a2)
{
  *this = &D3DXCore::CBuffer::`vftable';
  operator delete(this[2]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

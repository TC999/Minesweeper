__int64 __fastcall D3DXCore::CBuffer::Set(void **this, unsigned __int8 *a2, int a3)
{
  operator delete(this[2]);
  this[2] = a2;
  *((_DWORD *)this + 3) = a3;
  return 0;
}

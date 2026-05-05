__int64 __fastcall D3DXCore::CBuffer::Release(D3DXCore::CBuffer *this)
{
  int v1; // r8d
  unsigned int v2; // ebx

  v1 = *((_DWORD *)this + 2);
  v2 = v1 - 1;
  *((_DWORD *)this + 2) = v1 - 1;
  if ( v1 == 1 )
    (*(void (__fastcall **)(D3DXCore::CBuffer *))(*(_QWORD *)this + 40LL))(this);
  return v2;
}

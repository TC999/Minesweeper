__int64 __fastcall D3DXCore::CBuffer::Init(D3DXCore::CBuffer *this, unsigned int a2)
{
  void *v4; // rax

  v4 = operator new(a2, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  *((_QWORD *)this + 2) = v4;
  if ( !v4 )
    return 2147942414LL;
  *((_DWORD *)this + 3) = a2;
  return 0;
}

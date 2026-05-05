__int64 __fastcall D3DXCore::CFont::Release(D3DXCore::CFont *this)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*((_DWORD *)this + 2))-- == 1;
  result = *((unsigned int *)this + 2);
  if ( v1 )
  {
    D3DXCore::CFont::~CFont(this);
    operator delete(this);
    return 0;
  }
  return result;
}

void __fastcall D3DXTex::CImage::~CImage(D3DXTex::CImage *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi
  D3DXTex::CImage *v5; // rbx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 && *((_DWORD *)this + 17) )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 && *((_DWORD *)this + 18) )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    D3DXTex::CImage::~CImage(*((D3DXTex::CImage **)this + 11));
    operator delete(v4);
  }
  v5 = (D3DXTex::CImage *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    D3DXTex::CImage::~CImage(v5);
    operator delete(v5);
  }
}

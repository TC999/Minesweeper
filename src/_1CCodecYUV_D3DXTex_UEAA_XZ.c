void __fastcall D3DXTex::CCodecYUV::~CCodecYUV(D3DXTex::CCodecYUV *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &D3DXTex::CCodec_UYVY::`vftable';
  D3DXTex::CCodecYUV::Commit(this);
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    operator delete(v2);
  D3DXTex::CCodec::~CCodec((void **)this);
}

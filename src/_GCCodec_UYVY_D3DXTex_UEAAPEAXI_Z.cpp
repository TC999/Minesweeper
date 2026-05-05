D3DXTex::CCodec_UYVY *__fastcall D3DXTex::CCodec_UYVY::`scalar deleting destructor'(
        D3DXTex::CCodec_UYVY *this,
        char a2)
{
  D3DXTex::CCodecYUV::~CCodecYUV(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

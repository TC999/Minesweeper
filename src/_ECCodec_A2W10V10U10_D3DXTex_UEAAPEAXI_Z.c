D3DXTex::CCodec_A2W10V10U10 *__fastcall D3DXTex::CCodec_A2W10V10U10::`vector deleting destructor'(
        D3DXTex::CCodec_A2W10V10U10 *this,
        char a2)
{
  D3DXTex::CCodec::~CCodec(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

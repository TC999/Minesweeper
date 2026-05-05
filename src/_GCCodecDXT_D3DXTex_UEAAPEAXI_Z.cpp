D3DXTex::CCodecDXT *__fastcall D3DXTex::CCodecDXT::`scalar deleting destructor'(D3DXTex::CCodecDXT *this, char a2)
{
  D3DXTex::CCodecDXT::~CCodecDXT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

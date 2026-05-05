D3DXTex::CWicSaver *__fastcall D3DXTex::CWicSaver::`vector deleting destructor'(D3DXTex::CWicSaver *this, char a2)
{
  D3DXTex::CWicSaver::~CWicSaver(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

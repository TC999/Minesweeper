ResourceTextureD3D *__fastcall ResourceTextureD3D::`vector deleting destructor'(ResourceTextureD3D *this, char a2)
{
  ResourceTextureD3D::~ResourceTextureD3D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

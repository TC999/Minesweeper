ResourceTextureD3DDyn *__fastcall ResourceTextureD3DDyn::`vector deleting destructor'(
        ResourceTextureD3DDyn *this,
        char a2)
{
  ResourceTextureD3DDyn::~ResourceTextureD3DDyn(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

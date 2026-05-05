Material *__fastcall Material::`vector deleting destructor'(Material *this, char a2)
{
  Material::~Material(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

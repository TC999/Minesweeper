Font *__fastcall Font::`vector deleting destructor'(Font *this, char a2)
{
  Font::~Font(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

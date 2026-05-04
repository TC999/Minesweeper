MaterialAlpha *__fastcall MaterialAlpha::`scalar deleting destructor'(MaterialAlpha *this, char a2)
{
  MaterialAlpha::~MaterialAlpha(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

Tip *__fastcall Tip::`scalar deleting destructor'(Tip *this, char a2)
{
  Tip::~Tip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

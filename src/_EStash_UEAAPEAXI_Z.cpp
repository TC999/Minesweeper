Stash *__fastcall Stash::`vector deleting destructor'(Stash *this, char a2)
{
  Stash::~Stash(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

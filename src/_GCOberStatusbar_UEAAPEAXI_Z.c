COberStatusbar *__fastcall COberStatusbar::`scalar deleting destructor'(COberStatusbar *this, char a2)
{
  COberStatusbar::~COberStatusbar(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

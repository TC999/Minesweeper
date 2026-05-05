MaterialAdditive *__fastcall MaterialAdditive::`scalar deleting destructor'(MaterialAdditive *this, char a2)
{
  MaterialAdditive::~MaterialAdditive(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

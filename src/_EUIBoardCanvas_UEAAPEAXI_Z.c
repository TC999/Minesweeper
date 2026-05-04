UIBoardCanvas *__fastcall UIBoardCanvas::`vector deleting destructor'(UIBoardCanvas *this, char a2)
{
  UIBoardCanvas::~UIBoardCanvas(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

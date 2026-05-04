void __fastcall UIBoardCanvas::UpdateSecondaryRevealPreview(UIBoardCanvas *this, struct UITile *a2)
{
  struct UITile *v3; // rdx

  v3 = (struct UITile *)*((_QWORD *)this + 32);
  if ( v3 )
    UIBoardCanvas::ShowHideUnrevealedNeighborTops(this, v3, 1);
  *((_QWORD *)this + 32) = a2;
  if ( a2 )
    UIBoardCanvas::ShowHideUnrevealedNeighborTops(this, a2, 0);
}

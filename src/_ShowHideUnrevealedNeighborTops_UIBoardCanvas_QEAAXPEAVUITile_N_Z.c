void __fastcall UIBoardCanvas::ShowHideUnrevealedNeighborTops(UIBoardCanvas *this, struct UITile *a2, bool a3)
{
  __int64 v3; // rax
  int v4; // ebp
  int v5; // ebx
  int v6; // r14d
  int v7; // r13d

  v3 = *((_QWORD *)this + 7);
  v4 = *((_DWORD *)a2 + 12);
  v5 = *((_DWORD *)a2 + 13);
  v6 = *(_DWORD *)(v3 + 16);
  v7 = *(_DWORD *)(v3 + 12);
  if ( v4 > 0 )
  {
    if ( v5 > 0 )
      UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 - 1, v5 - 1, a3);
    UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 - 1, v5, a3);
    if ( v5 < v7 - 1 )
      UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 - 1, v5 + 1, a3);
  }
  if ( v5 > 0 )
    UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4, v5 - 1, a3);
  UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4, v5, a3);
  if ( v5 < v7 - 1 )
    UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4, v5 + 1, a3);
  if ( v4 < v6 - 1 )
  {
    if ( v5 > 0 )
      UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 + 1, v5 - 1, a3);
    UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 + 1, v5, a3);
    if ( v5 < v7 - 1 )
      UIBoardCanvas::ShowHideUnrevealedNeighborTop(this, v4 + 1, v5 + 1, a3);
  }
}

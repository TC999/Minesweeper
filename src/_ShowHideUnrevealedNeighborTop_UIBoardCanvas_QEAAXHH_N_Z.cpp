void __fastcall UIBoardCanvas::ShowHideUnrevealedNeighborTop(
        UIBoardCanvas *this,
        unsigned int a2,
        unsigned int a3,
        bool a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 80LL) + 16LL) + 8LL * a2) + 16LL);
  if ( *(_DWORD *)(v4 + 4LL * a3) == 9 || *(_DWORD *)(v4 + 4LL * a3) == 11 )
    UITile::SetTopVisible(
      *(UITile **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2) + 16LL) + 8LL * a3),
      a4);
}

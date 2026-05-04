void __fastcall Game::ResetCanvas(Game *this)
{
  char v2; // [rsp+28h] [rbp-20h]
  char v3; // [rsp+30h] [rbp-18h]

  if ( *((_QWORD *)this + 2) )
  {
    v3 = 1;
    v2 = 0;
    UIBoardCanvas::Reset(
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3),
      *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)this + 16)),
      *(_QWORD *)(*((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 17)),
      *(_DWORD *)(*((_QWORD *)Game::G + 3) + 36LL),
      v2,
      v3);
    UIBoardCanvas::Refresh(*((UIBoardCanvas **)this + 2), 1);
  }
}

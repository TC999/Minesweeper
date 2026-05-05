void __fastcall UIBoardCanvas::ShowTipMessage(TipManager **this, unsigned __int16 *a2)
{
  Log(0x1000000u, L"ShowTipMessage( %s )", a2);
  if ( *((_BYTE *)Game::G + 45) )
    TipManager::ShowTipIfEnabled(this[33], a2, 0, 0);
}

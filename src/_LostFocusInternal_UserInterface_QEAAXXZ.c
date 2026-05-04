void __fastcall UserInterface::LostFocusInternal(UserInterface *this)
{
  UserInterface *v1; // rbx

  v1 = g_pUserInterface;
  if ( g_pUserInterface )
  {
    if ( *((_BYTE *)g_pUserInterface + 272) )
      UserInterface::ProcessMouseUp(g_pUserInterface, 0, 0);
    if ( *((_BYTE *)v1 + 273) )
      UserInterface::ProcessMouseUp(v1, 1, 0);
    if ( *((_BYTE *)v1 + 274) )
      UserInterface::ProcessMouseUp(v1, 2, 0);
  }
}

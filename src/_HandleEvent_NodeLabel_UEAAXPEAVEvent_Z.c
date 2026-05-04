void __fastcall NodeLabel::HandleEvent(NodeLabel *this, struct Event *a2)
{
  UserInterface *v4; // rcx

  NodeBase::HandleEvent(this, a2);
  if ( *((_DWORD *)a2 + 4) == 23 && *((_BYTE *)this + 144) != 1 )
  {
    v4 = g_pUserInterface;
    *((_BYTE *)this + 144) = 1;
    *((_DWORD *)this + 48) = 41;
    UserInterface::Access_OnNodeAccessible(v4, this);
  }
}

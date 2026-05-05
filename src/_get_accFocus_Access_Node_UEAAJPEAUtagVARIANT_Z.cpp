__int64 __fastcall Access_Node::get_accFocus(Access_Node *this, struct tagVARIANT *a2)
{
  struct NodeBase *CurrentFocus; // rax
  struct NodeBase *v5; // rdx
  UserInterface *v7; // rcx
  struct Access_Node *ANodeFor; // rax
  struct Access_Node *v9; // r11

  CurrentFocus = UserInterface::GetCurrentFocus(g_pUserInterface);
  v5 = CurrentFocus;
  if ( CurrentFocus )
  {
    if ( !*((_QWORD *)this + 2) )
      return 2147500037LL;
    while ( 1 )
    {
      CurrentFocus = (struct NodeBase *)*((_QWORD *)CurrentFocus + 17);
      if ( !CurrentFocus )
        break;
      if ( CurrentFocus == *((struct NodeBase **)this + 2) )
      {
        v7 = g_pUserInterface;
        a2->vt = 9;
        ANodeFor = UserInterface::Access_GetANodeFor(v7, v5);
        if ( ANodeFor == v9 )
          SharedDialogs::FatalDialog::Show(0);
        a2->llVal = (LONGLONG)ANodeFor;
        (*(void (__fastcall **)(struct Access_Node *))(*(_QWORD *)ANodeFor + 8LL))(ANodeFor);
        return 0;
      }
    }
  }
  a2->vt = 0;
  return 0;
}

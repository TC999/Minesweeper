void __fastcall NodeBase::GetLayoutLocation(NodeBase *this, int *a2, int *a3)
{
  UserInterface::UpdateLayout(g_pUserInterface);
  *a2 = *((_DWORD *)this + 66);
  *a3 = *((_DWORD *)this + 67);
}

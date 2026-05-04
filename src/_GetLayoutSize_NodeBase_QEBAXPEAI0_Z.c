void __fastcall NodeBase::GetLayoutSize(NodeBase *this, unsigned int *a2, unsigned int *a3)
{
  UserInterface::UpdateLayout(g_pUserInterface);
  *a2 = *((_DWORD *)this + 68) - *((_DWORD *)this + 66);
  *a3 = *((_DWORD *)this + 69) - *((_DWORD *)this + 67);
}

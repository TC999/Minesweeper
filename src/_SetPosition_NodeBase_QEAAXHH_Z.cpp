void __fastcall NodeBase::SetPosition(NodeBase *this, int a2, int a3)
{
  RenderManager *v3; // rax

  if ( a2 != *((_DWORD *)this + 2) || a3 != *((_DWORD *)this + 3) )
  {
    v3 = g_pRenderManager;
    *((_DWORD *)this + 2) = a2;
    *((_DWORD *)this + 3) = a3;
    *((_BYTE *)v3 + 20) = 1;
    *((_BYTE *)v3 + 88) = 1;
    *((_BYTE *)g_pUserInterface + 275) = 1;
  }
}

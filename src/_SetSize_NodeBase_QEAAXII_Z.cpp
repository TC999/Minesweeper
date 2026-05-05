void __fastcall NodeBase::SetSize(NodeBase *this, int a2, int a3)
{
  RenderManager *v3; // rax

  if ( *((_DWORD *)this + 4) != a2 || *((_DWORD *)this + 5) != a3 )
  {
    v3 = g_pRenderManager;
    *((_DWORD *)this + 4) = a2;
    *((_DWORD *)this + 5) = a3;
    *((_BYTE *)v3 + 20) = 1;
    *((_BYTE *)v3 + 88) = 1;
    *((_BYTE *)g_pUserInterface + 275) = 1;
  }
}

// Hidden C++ exception states: #wind=1
void __fastcall Tip::~Tip(Tip *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  RenderManager *v4; // rax
  NodeBase *v5; // rcx
  NodeBase *v6; // rcx

  *(_QWORD *)this = &Tip::`vftable';
  v2 = *((unsigned int *)this + 29);
  if ( (_DWORD)v2 )
  {
    Timer::DeleteEvent(g_pTimer, v2);
    *((_DWORD *)this + 29) = 0;
  }
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 41) )
    {
      *(_BYTE *)(v3 + 41) = 0;
      v4 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v4 + 88) = 1;
    }
    NodeBase::RemoveListener(*((NodeBase **)this + 16), this);
  }
  v5 = (NodeBase *)*((_QWORD *)this + 18);
  if ( v5 )
    NodeBase::RemoveListener(v5, this);
  v6 = (NodeBase *)*((_QWORD *)this + 16);
  if ( v6 )
    NodeBase::DeleteSelf(v6);
  *((_QWORD *)this + 17) = 0;
  *(_QWORD *)this = &IEventListener::`vftable';
}

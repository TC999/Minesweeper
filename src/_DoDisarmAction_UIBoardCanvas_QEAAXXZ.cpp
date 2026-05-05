void __fastcall UIBoardCanvas::DoDisarmAction(UIBoardCanvas *this)
{
  __int64 v1; // rax
  RenderManager *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbp
  __int64 v10; // r13
  NodeBase *v11; // rcx
  unsigned int v12; // eax

  v1 = *((_QWORD *)this + 9);
  if ( *(_BYTE *)(v1 + 41) != 1 )
  {
    *(_BYTE *)(v1 + 41) = 1;
    v3 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v3 + 88) = 1;
  }
  *(_BYTE *)(*((_QWORD *)this + 9) + 72LL) = 1;
  NodeBase::SetSize(
    *((NodeBase **)this + 9),
    *((_DWORD *)this + 68) * *(_DWORD *)(*((_QWORD *)this + 7) + 16LL),
    *(_DWORD *)(*((_QWORD *)this + 9) + 20LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 9),
    *(_DWORD *)(*((_QWORD *)this + 16) + 8LL),
    *(_DWORD *)(*((_QWORD *)this + 9) + 12LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 9),
    *(_DWORD *)(*((_QWORD *)this + 9) + 8LL),
    *(_DWORD *)(*((_QWORD *)this + 16) + 12LL) + *((_DWORD *)this + 68) * *(_DWORD *)(*((_QWORD *)this + 7) + 12LL));
  v4 = NodeBase::AddAnimation(*((NodeBase **)this + 9), *((_DWORD *)this + 52), 0);
  v5 = *((_QWORD *)this + 9) + 200LL;
  *((_DWORD *)this + 12) = v4;
  Array<IEventListener *>::Add(v5, (__int64)this);
  NodeBase::ResumeAnimation(*((NodeBase **)this + 9), *((_DWORD *)this + 12));
  v6 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v7 = 0;
    do
    {
      v8 = 0;
      if ( **(_DWORD **)(v7 + *((_QWORD *)this + 3)) )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + v7) + 16LL) + v9);
          v11 = *(NodeBase **)(v10 + 88);
          if ( v11 )
          {
            v12 = NodeBase::AddAnimation(v11, UITile::_alphaQuickFadeOutAnimationId, 0);
            NodeBase::ResumeAnimation(*(NodeBase **)(v10 + 88), v12);
          }
          ++v8;
          v9 += 8;
        }
        while ( v8 < **(_DWORD **)(v7 + *((_QWORD *)this + 3)) );
      }
      ++v6;
      v7 += 8;
    }
    while ( v6 < *((_DWORD *)this + 2) );
  }
  if ( !*((_BYTE *)Game::G + 41) )
    Game::RequestSkipAnimation(Game::G);
}

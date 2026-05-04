void __fastcall NodeButton::HandleEvent(NodeButton *this, struct Event *a2)
{
  NodeButton *v4; // rax
  int v5; // ecx
  __int64 GameEvent; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  NodeBase *v11; // rcx
  RenderManager *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  RenderManager *v15; // rax
  int v16; // eax
  RenderManager *v17; // rax
  RenderManager *v18; // r10
  __int64 v19; // r10
  int v20; // eax
  UserInterface *v21; // rax
  UserInterface *v22; // rax
  NodeBase *v23; // rcx
  __int64 v24; // rdx
  UserInterface *v25; // rax
  __int64 v26; // rdx
  RenderManager *v27; // rax
  RenderManager *v28; // r10
  __int64 v29; // r10
  unsigned int v30; // ecx
  int v31; // ecx
  __int64 v32; // rdx
  RenderManager *v33; // rax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  UserInterface *v37; // rcx
  NodeButton *v38; // rbx
  RenderManager *v39; // r10
  __int64 v40; // r10
  int v41; // ecx
  __int64 v42; // rdx
  RenderManager *v43; // rax
  RenderManager *v44; // rax
  NodeBase *v45; // rcx

  if ( *((_DWORD *)a2 + 4) == 16 )
  {
    v4 = this;
    while ( *((_BYTE *)v4 + 41) )
    {
      v4 = (NodeButton *)*((_QWORD *)v4 + 17);
      if ( !v4 )
      {
        if ( *((_BYTE *)this + 72) )
          *((_BYTE *)a2 + 24) = 1;
        break;
      }
    }
  }
  NodeBase::HandleEvent(this, a2);
  v5 = *((_DWORD *)a2 + 4);
  GameEvent = 0;
  if ( v5 > 18 )
  {
    v34 = v5 - 19;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 3;
        if ( !v36 )
        {
          if ( *((_BYTE *)this + 144) != 1 )
          {
            v37 = g_pUserInterface;
            *((_BYTE *)this + 144) = 1;
            *((_DWORD *)this + 48) = 43;
            UserInterface::Access_OnNodeAccessible(v37, this);
          }
          return;
        }
        if ( v36 != 1 )
          return;
      }
      else
      {
        v38 = (NodeButton *)*((_QWORD *)g_pUserInterface + 38);
        UserInterface::ReleaseCaptureNode(g_pUserInterface);
        if ( v38 == this && !*((_BYTE *)this + 502) || !*((_BYTE *)a2 + 24) )
          return;
        if ( *((_BYTE *)this + 496) )
        {
          v39 = g_pRenderManager;
          if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) != 255 )
          {
            *((_DWORD *)this + 99) = 255;
            *((_BYTE *)v39 + 20) = 1;
            *((_BYTE *)v39 + 88) = 1;
          }
          NodeSprite::SetAnimation(this, 2u);
          if ( *((_BYTE *)this + 497) )
          {
            v41 = *(_DWORD *)(*((_QWORD *)this + 52) + 76LL) - 1;
            if ( v41 != *((_DWORD *)this + 96) )
            {
              *((_DWORD *)this + 96) = v41;
              *(_BYTE *)(v40 + 20) = 1;
              *(_BYTE *)(v40 + 88) = 1;
            }
            NodeBase::SetAnimationReverse(this, *((unsigned int *)this + 120), 1);
          }
          else if ( *((_DWORD *)this + 96) )
          {
            *((_DWORD *)this + 96) = 0;
            *(_BYTE *)(v40 + 20) = 1;
            *(_BYTE *)(v40 + 88) = 1;
          }
        }
        *((_DWORD *)this + 119) = 20;
        if ( *((_BYTE *)this + 496) )
        {
          v42 = *((unsigned int *)this + 120);
          if ( *((_BYTE *)this + 497) )
          {
            NodeBase::SetAnimationTime(this, v42, (float)*((int *)this + 96) / (float)*((int *)this + 118));
            NodeBase::ResumeAnimation(this, *((unsigned int *)this + 120));
          }
          else
          {
            NodeBase::StopAnimation(this, v42);
            if ( *((_DWORD *)this + 96) )
            {
              v43 = g_pRenderManager;
              *((_DWORD *)this + 96) = 0;
              *((_BYTE *)v43 + 20) = 1;
              *((_BYTE *)v43 + 88) = 1;
            }
          }
          (**(void (__fastcall ***)(NodeButton *))this)(this);
        }
      }
      GameEvent = Event::CreateGameEvent(1u);
      *(_BYTE *)(GameEvent + 32) = GetKeyState(17) < 0;
      *(_QWORD *)(GameEvent + 24) = this;
    }
    else
    {
      if ( *((_BYTE *)this + 498) )
        NodeBase::CompleteAnimation(this, *((unsigned int *)this + 122));
      if ( *((_BYTE *)this + 496) )
      {
        NodeBase::SetAnimationReverse(this, *((unsigned int *)this + 120), 0);
        if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) != 255 )
        {
          *((_DWORD *)this + 99) = 255;
          v44 = g_pRenderManager;
          *((_BYTE *)g_pRenderManager + 20) = 1;
          *((_BYTE *)v44 + 88) = 1;
        }
        NodeSprite::SetAnimation(this, 2u);
        NodeBase::ResumeAnimation(v45, *((unsigned int *)this + 120));
      }
      *((_DWORD *)this + 119) = 0;
    }
    if ( GameEvent )
    {
      (*(void (__fastcall **)(NodeButton *, __int64))(*(_QWORD *)this + 16LL))(this, GameEvent);
      (**(void (__fastcall ***)(__int64, __int64))GameEvent)(GameEvent, 1);
    }
    return;
  }
  if ( v5 == 18 )
  {
    if ( *((NodeButton **)g_pUserInterface + 38) == this )
      UserInterface::ReleaseCaptureNode(g_pUserInterface);
    if ( *((_DWORD *)this + 107) == 1 )
    {
      if ( *((_BYTE *)this + 498) )
      {
        NodeBase::SetAnimationReverse(this, *((unsigned int *)this + 122), 1);
        v26 = *((unsigned int *)this + 122);
        if ( *((_BYTE *)this + 500) )
        {
          NodeBase::ResumeAnimation(this, v26);
        }
        else
        {
          NodeBase::StopAnimation(this, v26);
          if ( *((_DWORD *)this + 96) )
          {
            v27 = g_pRenderManager;
            *((_DWORD *)this + 96) = 0;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
        }
      }
      *((_DWORD *)this + 119) = 18;
      return;
    }
    if ( *((_BYTE *)this + 498) )
    {
      v28 = g_pRenderManager;
      if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) != 255 )
      {
        *((_DWORD *)this + 99) = 255;
        *((_BYTE *)v28 + 20) = 1;
        *((_BYTE *)v28 + 88) = 1;
      }
      NodeSprite::SetAnimation(this, 1u);
      if ( *((_BYTE *)this + 500) )
      {
        v30 = *(_DWORD *)(*((_QWORD *)this + 52) + 44LL);
        v31 = v30 >= 2 ? v30 - 2 : 0;
        if ( v31 != *((_DWORD *)this + 96) )
        {
          *((_DWORD *)this + 96) = v31;
          *(_BYTE *)(v29 + 20) = 1;
          *(_BYTE *)(v29 + 88) = 1;
        }
      }
      NodeBase::SetAnimationReverse(this, *((unsigned int *)this + 122), 1);
    }
    v32 = *((unsigned int *)this + 122);
    *((_DWORD *)this + 119) = 18;
    if ( !*((_BYTE *)this + 500) )
    {
      NodeBase::StopAnimation(this, v32);
      if ( *((_DWORD *)this + 96) )
      {
        v33 = g_pRenderManager;
        *((_DWORD *)this + 96) = 0;
        *((_BYTE *)v33 + 20) = 1;
        *((_BYTE *)v33 + 88) = 1;
      }
      return;
    }
    NodeBase::SetAnimationTime(this, v32, (float)*((int *)this + 96) / (float)*((int *)this + 118));
    v23 = this;
    goto LABEL_45;
  }
  v7 = v5 - 2;
  if ( !v7 )
  {
    v25 = g_pUserInterface;
    *((_BYTE *)this + 502) = 1;
    if ( *((NodeButton **)v25 + 38) != this || !*((_BYTE *)this + 496) )
      return;
    NodeSprite::SetAnimation(this, 2u);
    v24 = *((unsigned int *)this + 120);
LABEL_46:
    NodeBase::ResumeAnimation(v23, v24);
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v22 = g_pUserInterface;
    *((_BYTE *)this + 502) = 0;
    if ( *((NodeButton **)v22 + 38) != this || !*((_BYTE *)this + 498) )
      return;
    if ( *((_DWORD *)this + 107) == 1 )
    {
      NodeBase::SetAnimationReverse(this, *((unsigned int *)this + 122), 0);
      return;
    }
    NodeSprite::SetAnimation(this, 1u);
LABEL_45:
    v24 = *((unsigned int *)this + 122);
    goto LABEL_46;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 9;
    if ( v10 )
    {
      if ( v10 != 4 )
        return;
      if ( !*((_BYTE *)this + 498) )
        goto LABEL_23;
      NodeSprite::SetAnimation(this, 1u);
      if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) != 255 )
      {
        *((_DWORD *)this + 99) = 255;
        v12 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 20) = 1;
        *((_BYTE *)v12 + 88) = 1;
      }
      NodeBase::SetAnimationReverse(v11, *((unsigned int *)this + 122), 0);
      v13 = *((unsigned int *)this + 122);
      if ( *((_BYTE *)this + 499) )
      {
        NodeBase::ResumeAnimation(this, v13);
      }
      else
      {
        NodeBase::StopAnimation(this, v13);
        v14 = *(_DWORD *)(*((_QWORD *)this + 52) + 44LL) - 1;
        if ( v14 != *((_DWORD *)this + 96) )
        {
          *((_DWORD *)this + 96) = v14;
          v15 = g_pRenderManager;
          *((_BYTE *)g_pRenderManager + 20) = 1;
          *((_BYTE *)v15 + 88) = 1;
        }
      }
    }
    else
    {
      v16 = *((_DWORD *)this + 119);
      if ( v16 == 18 )
      {
        NodeSprite::SetAnimation(this, 0);
        if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) )
        {
          v17 = g_pRenderManager;
          *((_DWORD *)this + 99) = 0;
          *((_BYTE *)v17 + 20) = 1;
          *((_BYTE *)v17 + 88) = 1;
        }
        goto LABEL_23;
      }
      if ( v16 != 20 || !*((_BYTE *)this + 498) )
      {
LABEL_23:
        *((_DWORD *)this + 119) = 0;
        return;
      }
      v18 = g_pRenderManager;
      if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) != 255 )
      {
        *((_DWORD *)this + 99) = 255;
        *((_BYTE *)v18 + 20) = 1;
        *((_BYTE *)v18 + 88) = 1;
      }
      NodeSprite::SetAnimation(this, 1u);
      v20 = *(_DWORD *)(*((_QWORD *)this + 52) + 44LL) - 1;
      if ( v20 != *((_DWORD *)this + 96) )
      {
        *((_DWORD *)this + 96) = v20;
        *(_BYTE *)(v19 + 20) = 1;
        *(_BYTE *)(v19 + 88) = 1;
      }
    }
    (**(void (__fastcall ***)(NodeButton *))this)(this);
    goto LABEL_23;
  }
  if ( !*((_DWORD *)a2 + 12) && *((_BYTE *)this + 500) && *((_BYTE *)this + 499) && *((_BYTE *)this + 497) )
  {
    v21 = g_pUserInterface;
    *((_QWORD *)g_pUserInterface + 38) = this;
    *((_BYTE *)v21 + 312) = 1;
  }
}

void __fastcall Tip::HandleEvent(Tip *this, struct Event *a2)
{
  int v3; // edi
  int v4; // ebx
  NodeBase *v5; // rcx
  int v6; // r8d
  int v7; // edx
  bool v8; // zf
  int v9; // eax
  int *v10; // rcx
  int v11; // r9d
  int v12; // eax
  int *v13; // rcx
  __int64 v14; // r10
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  RenderManager *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int *v21; // rcx
  int *v22; // rcx
  Timer *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  RenderManager *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int TimerEvent; // eax

  switch ( *((_DWORD *)a2 + 4) )
  {
    case 2:
      if ( *((_BYTE *)this + 152) )
        return;
      if ( !*((_DWORD *)this + 28) )
      {
        TimerEvent = Timer::CreateTimerEvent(g_pTimer, this, 0.75, 0);
        *((_DWORD *)this + 28) = 1;
        *((_DWORD *)this + 29) = TimerEvent;
        return;
      }
      if ( *((_DWORD *)this + 28) == 3 )
        goto LABEL_81;
      return;
    case 3:
      if ( *((_DWORD *)this + 28) == 1 )
      {
        Timer::DeleteEvent(g_pTimer, *((unsigned int *)this + 29));
        *((_DWORD *)this + 29) = 0;
        *((_DWORD *)this + 28) = 0;
        return;
      }
      if ( *((_DWORD *)this + 28) != 2 )
        return;
      v43 = *((_QWORD *)this + 13);
      v18 = g_pRenderManager;
      *((_DWORD *)this + 28) = 3;
      if ( *(_BYTE *)(v43 + 41) )
      {
        *(_BYTE *)(v43 + 41) = 0;
        *((_BYTE *)v18 + 20) = 1;
        *((_BYTE *)v18 + 88) = 1;
      }
      v44 = *((_QWORD *)this + 12);
      if ( !v44 || !*(_BYTE *)(v44 + 41) )
        return;
      *(_BYTE *)(v44 + 41) = 0;
      goto LABEL_76;
    case 4:
      v42 = *((_QWORD *)a2 + 1);
      if ( v42 == *((_QWORD *)this + 16) )
      {
LABEL_13:
        Tip::Close(this, 1);
        return;
      }
      v8 = v42 == *((_QWORD *)this + 18);
LABEL_12:
      if ( !v8 )
        return;
      goto LABEL_13;
  }
  if ( *((_DWORD *)a2 + 4) != 15 )
  {
    if ( *((_DWORD *)a2 + 4) != 24 )
    {
      if ( *((_DWORD *)a2 + 4) != 37 )
        return;
      if ( *((_DWORD *)this + 28) )
        Tip::Close(this, 1);
      v3 = *((_DWORD *)this + 2);
      v4 = *((_DWORD *)this + 3);
      Tip::Arrange(this);
      v5 = (NodeBase *)*((_QWORD *)this + 16);
      v6 = v4 + *((_DWORD *)v5 + 3) - *((_DWORD *)this + 3);
      v7 = v3 + *((_DWORD *)v5 + 2) - *((_DWORD *)this + 2);
      goto LABEL_10;
    }
    v8 = *((_QWORD *)a2 + 1) == *((_QWORD *)this + 18);
    goto LABEL_12;
  }
  v9 = *((_DWORD *)this + 28);
  switch ( v9 )
  {
    case 1:
      Timer::DeleteEvent(g_pTimer, *((unsigned int *)this + 29));
      *((_DWORD *)this + 29) = Timer::CreateTimerEvent(g_pTimer, this, 0.0099999998, 0);
LABEL_81:
      *((_DWORD *)this + 28) = 2;
      return;
    case 2:
      v10 = (int *)*((_QWORD *)this + 4);
      v11 = v10[3];
      v12 = *(_DWORD *)(*((_QWORD *)this + 13) + 20LL);
      if ( v11 + v12 > 0 )
      {
        NodeBase::SetPosition((NodeBase *)v10, v10[2], v11 - 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 7),
          *(_DWORD *)(*((_QWORD *)this + 7) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) - 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 6),
          *(_DWORD *)(*((_QWORD *)this + 6) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) - 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 15),
          *(_DWORD *)(*((_QWORD *)this + 15) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 15) + 12LL) - 2);
        NodeBase::SetSize(
          *((NodeBase **)this + 15),
          *(_DWORD *)(*((_QWORD *)this + 15) + 16LL),
          *(_DWORD *)(*((_QWORD *)this + 15) + 20LL) + 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 2),
          *(_DWORD *)(*((_QWORD *)this + 2) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 2) + 12LL) - 2);
        NodeBase::SetSize(
          *((NodeBase **)this + 2),
          *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(_DWORD *)(*((_QWORD *)this + 2) + 20LL) + 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 3),
          *(_DWORD *)(*((_QWORD *)this + 3) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 3) + 12LL) - 2);
        NodeBase::SetSize(
          *((NodeBase **)this + 3),
          *(_DWORD *)(*((_QWORD *)this + 3) + 16LL),
          *(_DWORD *)(*((_QWORD *)this + 3) + 20LL) + 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 10),
          *(_DWORD *)(*((_QWORD *)this + 10) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 10) + 12LL) - 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 11),
          *(_DWORD *)(*((_QWORD *)this + 11) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 11) + 12LL) - 2);
        NodeBase::SetPosition(
          *((NodeBase **)this + 13),
          *(_DWORD *)(*((_QWORD *)this + 13) + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) - 2);
        v13 = (int *)*((_QWORD *)this + 12);
        if ( v13 )
          NodeBase::SetPosition((NodeBase *)v13, v13[2], v13[3] - 2);
        v5 = (NodeBase *)*((_QWORD *)this + 18);
        if ( v5 )
        {
          v6 = *((_DWORD *)v5 + 3) - 2;
LABEL_22:
          v7 = *((_DWORD *)v5 + 2);
LABEL_10:
          NodeBase::SetPosition(v5, v7, v6);
          return;
        }
        return;
      }
      v14 = *((_QWORD *)this + 16);
      v15 = *(_DWORD *)(v14 + 12);
      v16 = *(_DWORD *)(v14 + 20);
      v17 = *(_DWORD *)(v14 + 16);
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 48) = v15 - v12;
      *(_BYTE *)(v14 + 42) = 1;
      *(_DWORD *)(v14 + 56) = v12 + v16;
      v18 = g_pRenderManager;
      *(_DWORD *)(v14 + 52) = v17;
      v19 = *((_QWORD *)this + 13);
      if ( *(_BYTE *)(v19 + 41) != 1 )
      {
        *(_BYTE *)(v19 + 41) = 1;
        *((_BYTE *)v18 + 20) = 1;
        *((_BYTE *)v18 + 88) = 1;
      }
      v20 = *((_QWORD *)this + 12);
      if ( !v20 || *(_BYTE *)(v20 + 41) == 1 )
        return;
      *(_BYTE *)(v20 + 41) = 1;
LABEL_76:
      *((_BYTE *)v18 + 20) = 1;
      *((_BYTE *)v18 + 88) = 1;
      return;
    case 3:
      v21 = (int *)*((_QWORD *)this + 4);
      if ( -v21[3] < 0 || v21[3] == 0 )
      {
        v23 = g_pTimer;
        *(_BYTE *)(*((_QWORD *)this + 16) + 42LL) = 0;
        v24 = *((unsigned int *)this + 29);
        *((_DWORD *)this + 28) = 0;
        Timer::DeleteEvent(v23, v24);
        *((_DWORD *)this + 29) = 0;
        return;
      }
      NodeBase::SetPosition((NodeBase *)v21, v21[2], v21[3] + 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 7) + 12LL) + 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 6),
        *(_DWORD *)(*((_QWORD *)this + 6) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) + 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 15),
        *(_DWORD *)(*((_QWORD *)this + 15) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 15) + 12LL) + 2);
      NodeBase::SetSize(
        *((NodeBase **)this + 15),
        *(_DWORD *)(*((_QWORD *)this + 15) + 16LL),
        *(_DWORD *)(*((_QWORD *)this + 15) + 20LL) - 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 2),
        *(_DWORD *)(*((_QWORD *)this + 2) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 2) + 12LL) + 2);
      NodeBase::SetSize(
        *((NodeBase **)this + 2),
        *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
        *(_DWORD *)(*((_QWORD *)this + 2) + 20LL) - 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 3),
        *(_DWORD *)(*((_QWORD *)this + 3) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 3) + 12LL) + 2);
      NodeBase::SetSize(
        *((NodeBase **)this + 3),
        *(_DWORD *)(*((_QWORD *)this + 3) + 16LL),
        *(_DWORD *)(*((_QWORD *)this + 3) + 20LL) - 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 10),
        *(_DWORD *)(*((_QWORD *)this + 10) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 10) + 12LL) + 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 11),
        *(_DWORD *)(*((_QWORD *)this + 11) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 11) + 12LL) + 2);
      NodeBase::SetPosition(
        *((NodeBase **)this + 13),
        *(_DWORD *)(*((_QWORD *)this + 13) + 8LL),
        *(_DWORD *)(*((_QWORD *)this + 13) + 12LL) + 2);
      v22 = (int *)*((_QWORD *)this + 12);
      if ( v22 )
        NodeBase::SetPosition((NodeBase *)v22, v22[2], v22[3] + 2);
      v5 = (NodeBase *)*((_QWORD *)this + 18);
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 + 3) + 2;
        goto LABEL_22;
      }
      break;
    default:
      if ( v9 < 0 )
      {
        v25 = v9 + 12;
        *((_DWORD *)this + 28) = v25;
        if ( v25 < -1 )
        {
          v26 = *((_QWORD *)this + 2);
          v27 = g_pRenderManager;
          v28 = -v25;
          if ( v28 != *(_DWORD *)(v26 + 396) )
          {
            *(_DWORD *)(v26 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v29 = *((_QWORD *)this + 3);
          if ( v28 != *(_DWORD *)(v29 + 396) )
          {
            *(_DWORD *)(v29 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v30 = *((_QWORD *)this + 4);
          if ( v28 != *(_DWORD *)(v30 + 396) )
          {
            *(_DWORD *)(v30 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v31 = *((_QWORD *)this + 5);
          if ( v28 != *(_DWORD *)(v31 + 396) )
          {
            *(_DWORD *)(v31 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v32 = *((_QWORD *)this + 6);
          if ( v28 != *(_DWORD *)(v32 + 396) )
          {
            *(_DWORD *)(v32 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v33 = *((_QWORD *)this + 7);
          if ( v28 != *(_DWORD *)(v33 + 396) )
          {
            *(_DWORD *)(v33 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v34 = *((_QWORD *)this + 8);
          if ( v28 != *(_DWORD *)(v34 + 396) )
          {
            *(_DWORD *)(v34 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v35 = *((_QWORD *)this + 9);
          if ( v28 != *(_DWORD *)(v35 + 396) )
          {
            *(_DWORD *)(v35 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v36 = *((_QWORD *)this + 10);
          if ( v28 != *(_DWORD *)(v36 + 396) )
          {
            *(_DWORD *)(v36 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v37 = *((_QWORD *)this + 11);
          if ( v28 != *(_DWORD *)(v37 + 396) )
          {
            *(_DWORD *)(v37 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v38 = *((_QWORD *)this + 12);
          if ( v28 != *(_DWORD *)(v38 + 396) )
          {
            *(_DWORD *)(v38 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v39 = *((_QWORD *)this + 13);
          if ( v28 != *(_DWORD *)(v39 + 396) )
          {
            *(_DWORD *)(v39 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v40 = *((_QWORD *)this + 15);
          if ( v28 != *(_DWORD *)(v40 + 396) )
          {
            *(_DWORD *)(v40 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
          v41 = *((_QWORD *)this + 18);
          if ( v28 != *(_DWORD *)(v41 + 396) )
          {
            *(_DWORD *)(v41 + 396) = v28;
            *((_BYTE *)v27 + 20) = 1;
            *((_BYTE *)v27 + 88) = 1;
          }
        }
        else
        {
          Tip::OnTipFadedOut(this);
        }
      }
      break;
  }
}

char __fastcall TipManager::ShowTipIfEnabledAtLocV(
        NodeBase **this,
        unsigned __int16 *a2,
        char a3,
        int a4,
        int a5,
        struct NodeSprite *a6,
        bool a7,
        char **Arguments)
{
  char v12; // si
  __int64 v14; // rdi
  NodeBase *v15; // rbp
  NodeBase *v16; // r13
  int v17; // ecx
  int v18; // eax
  bool v19; // cc
  unsigned int v20; // ecx
  int v21; // eax
  NodeBase *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  NodeBase *v24[12]; // [rsp+30h] [rbp-78h] BYREF

  v12 = 0;
  if ( !g_bWindowActive )
    return 0;
  v23 = 0;
  if ( (unsigned __int8)SortedListW<TipManager::TipInfo *>::TryGet(this + 1, a2, &v23) )
  {
    v14 = v23;
    if ( *(_BYTE *)(v23 + 72) )
    {
      TipManager::DestroyTip((TipManager *)this);
      if ( a3 )
        *(_BYTE *)(v14 + 72) = 0;
      this[4] = (NodeBase *)v14;
      v15 = (NodeBase *)LocalizeMessageV(*(const unsigned __int16 **)(v14 + 40), Arguments);
      v16 = (NodeBase *)LocalizeMessage(*(const unsigned __int16 **)(v14 + 64));
      memset(&v24[1], 0, 0x50u);
      v17 = 350;
      v18 = 100;
      if ( *(int *)(v14 + 84) > 0 )
        v17 = *(_DWORD *)(v14 + 84);
      v19 = *(_DWORD *)(v14 + 88) <= 0;
      v24[3] = v15;
      HIDWORD(v24[6]) = v17;
      v20 = g_uiLayoutX;
      v24[2] = v16;
      if ( !v19 )
        v20 = *(_DWORD *)(v14 + 88);
      v19 = *(_DWORD *)(v14 + 92) <= 0;
      BYTE4(v24[8]) = 0;
      if ( !v19 )
        v18 = *(_DWORD *)(v14 + 92);
      v19 = *(_DWORD *)(v14 + 96) <= 0;
      LODWORD(v24[6]) = v20;
      HIDWORD(v24[5]) = v18;
      v21 = 220;
      v24[4] = 0;
      if ( !v19 )
        v21 = *(_DWORD *)(v14 + 96);
      LODWORD(v24[5]) = v21;
      v24[9] = *(NodeBase **)(v14 + 100);
      v24[10] = a6;
      v22 = this[3 * *(int *)(v14 + 108) + 8];
      v24[0] = this[16];
      v24[1] = v22;
      v12 = NodeBase::ShowTip(v24[0], (const struct Tip::TipSource *)v24, a7);
      if ( v12 )
      {
        NodeBase::SetPosition(this[16], a4, *((_DWORD *)this[16] + 3));
        NodeBase::SetPosition(this[16], *((_DWORD *)this[16] + 2), a5);
        if ( *(_BYTE *)(v14 + 81) )
          *((_DWORD *)this + 30) = 0;
        else
          *((_DWORD *)this + 30) = Timer::CreateTimerEvent(
                                     g_pTimer,
                                     (struct IEventListener *)this,
                                     *(float *)(v14 + 76),
                                     0);
      }
      LocalFree(v15);
      LocalFree(v16);
    }
  }
  else
  {
    Log(0x2000u, L"ShowTipIfEnabled() : Couldn't find tip : %s", a2);
  }
  return v12;
}

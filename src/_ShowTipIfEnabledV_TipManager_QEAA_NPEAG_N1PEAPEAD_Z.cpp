char __fastcall TipManager::ShowTipIfEnabledV(
        NodeBase **this,
        unsigned __int16 *a2,
        char a3,
        bool a4,
        char **Arguments)
{
  char v9; // si
  __int64 v11; // rdi
  NodeBase *v12; // rbp
  NodeBase *v13; // r12
  int v14; // ecx
  bool v15; // cc
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  NodeBase *v20; // rax
  int v21; // r9d
  int v22; // r10d
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  NodeBase *v24[12]; // [rsp+30h] [rbp-78h] BYREF

  v9 = 0;
  if ( !g_bWindowActive )
    return 0;
  v23 = 0;
  if ( (unsigned __int8)SortedListW<TipManager::TipInfo *>::TryGet(this + 1, a2, &v23) )
  {
    v11 = v23;
    if ( *(_BYTE *)(v23 + 72) )
    {
      TipManager::DestroyTip((TipManager *)this);
      if ( a3 )
        *(_BYTE *)(v11 + 72) = 0;
      this[4] = (NodeBase *)v11;
      v12 = (NodeBase *)LocalizeMessageV(*(const unsigned __int16 **)(v11 + 40), Arguments);
      v13 = (NodeBase *)LocalizeMessage(*(const unsigned __int16 **)(v11 + 64));
      memset(&v24[1], 0, 0x50u);
      v14 = 350;
      if ( *(int *)(v11 + 84) > 0 )
        v14 = *(_DWORD *)(v11 + 84);
      v15 = *(_DWORD *)(v11 + 88) <= 0;
      v16 = 100;
      HIDWORD(v24[6]) = v14;
      v17 = g_uiLayoutX;
      if ( !v15 )
        v17 = *(_DWORD *)(v11 + 88);
      if ( *(int *)(v11 + 92) > 0 )
        v16 = *(_DWORD *)(v11 + 92);
      v15 = *(_DWORD *)(v11 + 96) <= 0;
      LODWORD(v24[6]) = v17;
      HIDWORD(v24[5]) = v16;
      v18 = 220;
      v24[3] = v12;
      if ( !v15 )
        v18 = *(_DWORD *)(v11 + 96);
      v24[2] = v13;
      BYTE4(v24[8]) = 0;
      LODWORD(v24[5]) = v18;
      v19 = *(int *)(v11 + 108);
      v24[4] = 0;
      v20 = this[3 * v19 + 8];
      v24[0] = this[16];
      v24[1] = v20;
      v9 = NodeBase::ShowTip(v24[0], (const struct Tip::TipSource *)v24, a4);
      if ( v9 )
      {
        NodeBase::SetPosition(this[16], 0, *((_DWORD *)this[16] + 3));
        NodeBase::SetPosition(this[16], *((_DWORD *)this[16] + 2), v22 - v21);
        if ( *(_BYTE *)(v11 + 81) )
          *((_DWORD *)this + 30) = 0;
        else
          *((_DWORD *)this + 30) = Timer::CreateTimerEvent(
                                     g_pTimer,
                                     (struct IEventListener *)this,
                                     *(float *)(v11 + 76),
                                     0);
      }
      LocalFree(v12);
      LocalFree(v13);
    }
  }
  else
  {
    Log(0x2000u, L"ShowTipIfEnabled() : Couldn't find tip : %s", a2);
  }
  return v9;
}

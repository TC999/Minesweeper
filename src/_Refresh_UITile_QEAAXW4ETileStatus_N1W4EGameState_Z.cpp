void __fastcall UITile::Refresh(__int64 a1, int a2, char a3, char a4, int a5)
{
  NodeBase *v6; // rcx
  unsigned __int16 *v7; // rsi
  __int64 v11; // rax
  RenderManager *v12; // rax
  NodeBase *v13; // rcx
  NodeBase *v14; // rcx
  NodeBase *v15; // rcx
  unsigned __int16 *v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // r9
  unsigned __int16 *v19; // rax
  NodeBase *v20; // rcx
  NodeBase *v21; // rcx
  Str *v22; // rax
  __int64 v23; // rdx
  int *v24; // rax
  int v25; // edx
  int v26; // r9d
  __int64 v27; // rax
  RenderManager *v28; // rax
  int *v29; // rax
  int v30; // edx
  int v31; // r9d
  __int64 v32; // rax
  RenderManager *v33; // rax
  unsigned __int16 *v34; // rbx
  struct NodeSprite *v35; // rbx
  RenderManager *v36; // rax
  int v37; // eax
  RenderManager *v38; // rcx
  NodeBase *v39; // rcx
  struct NodeSprite *v40; // rax
  RenderManager *v41; // rcx
  NodeBase *v42; // rcx
  NodeBase *v43; // rcx
  __int64 v44; // rax
  RenderManager *v45; // rax
  NodeBase *v46; // rcx
  _BYTE v47[56]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(NodeBase **)(a1 + 88);
  v7 = 0;
  if ( v6 )
  {
    NodeBase::DeleteSelf(v6);
    *(_QWORD *)(a1 + 88) = 0;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v11 + 41) )
  {
    *(_BYTE *)(v11 + 41) = 0;
    v12 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v12 + 88) = 1;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 72LL) = a5 == 1;
  v13 = *(NodeBase **)(a1 + 96);
  if ( v13 )
  {
    NodeBase::DeleteSelf(v13);
    *(_QWORD *)(a1 + 96) = 0;
  }
  v14 = *(NodeBase **)(a1 + 104);
  if ( v14 )
  {
    NodeBase::DeleteSelf(v14);
    *(_QWORD *)(a1 + 104) = 0;
  }
  v15 = *(NodeBase **)(a1 + 112);
  if ( v15 )
  {
    NodeBase::DeleteSelf(v15);
    *(_QWORD *)(a1 + 112) = 0;
  }
  v16 = LocalizeMessage(
          L"|52002|ACC|Row %1!d!, Column %2!d! Tile//accessibility tile name",
          (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
          (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  NodeBase::SetAccessName(*(NodeBase **)(a1 + 24), v16);
  LocalFree(v16);
  if ( a2 == 9 || a2 == 10 || a2 == 11 )
  {
    UITile::SetTopVisible((UITile *)a1, 1);
    *(_BYTE *)(a1 + 136) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 136) = 0;
  }
  if ( a2 <= 7 )
  {
    switch ( a2 )
    {
      case 7:
        UITile::ShowNumber(a1, 7);
        v18 = 7;
        goto LABEL_26;
      case 1:
        UITile::ShowNumber(a1, 1);
        v18 = 1;
        goto LABEL_26;
      case 2:
        v17 = 2;
        goto LABEL_25;
      case 3:
        UITile::ShowNumber(a1, 3);
        v18 = 3;
        goto LABEL_26;
      case 4:
        UITile::ShowNumber(a1, 4);
        v18 = 4;
        goto LABEL_26;
      case 5:
        v17 = 5;
        goto LABEL_25;
      case 6:
        v17 = 6;
LABEL_25:
        UITile::ShowNumber(a1, v17);
        v18 = v17;
LABEL_26:
        v19 = LocalizeMessage(
                L"|55891|ACC|Row %1!d!, Column %2!d! Tile (Cleared). %3!d! Mine(s) Surrounding.//accessibility description",
                (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
                (unsigned int)(*(_DWORD *)(a1 + 48) + 1),
                v18);
LABEL_27:
        v7 = v19;
LABEL_28:
        NodeBase::SetAccessDefaultAction(*(NodeBase **)(a1 + 24), &String);
        goto LABEL_29;
    }
LABEL_49:
    v22 = Str::Str((Str *)v47, L"Unknown tile stat in tile refresh");
    LOBYTE(v23) = 1;
    StrErr(v22, v23);
    goto LABEL_28;
  }
  if ( a2 == 8 )
  {
    UITile::ShowNumber(a1, 8);
    v7 = LocalizeMessage(
           L"|55891|ACC|Row %1!d!, Column %2!d! Tile (Cleared). %3!d! Mine(s) Surrounding.//accessibility description",
           (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
           (unsigned int)(*(_DWORD *)(a1 + 48) + 1),
           8);
    goto LABEL_28;
  }
  if ( a2 != 9 )
  {
    switch ( a2 )
    {
      case 10:
        if ( !*(_QWORD *)(a1 + 88) )
        {
          v29 = (int *)NodeSprite::Copy(UITile::_pFlagSpriteBase);
          v30 = UITile::_tileSize * *(_DWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 88) = v29;
          NodeBase::SetPosition((NodeBase *)v29, v30, v29[3]);
          NodeBase::SetPosition(
            *(NodeBase **)(a1 + 88),
            *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL),
            v31 * *(_DWORD *)(a1 + 52));
          *(_BYTE *)(*(_QWORD *)(a1 + 88) + 72LL) = 0;
          v32 = *(_QWORD *)(a1 + 88);
          if ( *(_BYTE *)(v32 + 41) != 1 )
          {
            *(_BYTE *)(v32 + 41) = 1;
            v33 = g_pRenderManager;
            *((_BYTE *)g_pRenderManager + 20) = 1;
            *((_BYTE *)v33 + 88) = 1;
          }
        }
        v19 = LocalizeMessage(
                L"|57058|ACC|Row %1!d!, Column %2!d! Tile (Concealed and Flagged).//accessibility description",
                (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
                (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
        goto LABEL_27;
      case 11:
        if ( !*(_QWORD *)(a1 + 104) )
        {
          v24 = (int *)NodeSprite::Copy(UITile::_pQuestionMarkSpriteBase);
          v25 = UITile::_tileSize * *(_DWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 104) = v24;
          NodeBase::SetPosition((NodeBase *)v24, v25, v24[3]);
          NodeBase::SetPosition(
            *(NodeBase **)(a1 + 104),
            *(_DWORD *)(*(_QWORD *)(a1 + 104) + 8LL),
            v26 * *(_DWORD *)(a1 + 52));
          *(_BYTE *)(*(_QWORD *)(a1 + 104) + 72LL) = 0;
          v27 = *(_QWORD *)(a1 + 104);
          if ( *(_BYTE *)(v27 + 41) != 1 )
          {
            *(_BYTE *)(v27 + 41) = 1;
            v28 = g_pRenderManager;
            *((_BYTE *)g_pRenderManager + 20) = 1;
            *((_BYTE *)v28 + 88) = 1;
          }
        }
        v19 = LocalizeMessage(
                L"|43121|ACC|Row %1!d!, Column %2!d! Tile (Concealed with Question Mark).//accessibility description",
                (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
                (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
        goto LABEL_27;
      case 12:
        v19 = LocalizeMessage(
                L"|51167|ACC|Row %1!d!, Column %2!d! Tile (Cleared). No Mines Surrounding.//accessibility description",
                (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
                (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
        goto LABEL_27;
    }
    goto LABEL_49;
  }
  v7 = LocalizeMessage(
         L"|55018|ACC|Row %1!d!, Column %2!d! Tile (Concealed).//accessibility description",
         (unsigned int)(*(_DWORD *)(a1 + 52) + 1),
         (unsigned int)(*(_DWORD *)(a1 + 48) + 1));
  v34 = LocalizeMessage(L"|46936|ACC|Reveal tile//accessibility default action");
  NodeBase::SetAccessDefaultAction(*(NodeBase **)(a1 + 24), v34);
  LocalFree(v34);
LABEL_29:
  if ( v7 )
  {
    NodeBase::SetAccessName(*(NodeBase **)(a1 + 24), v7);
    NodeBase::SetAccessDescription(*(NodeBase **)(a1 + 24), v7);
    LocalFree(v7);
  }
  if ( !a4 && a5 != 4 && a5 != 3 )
  {
    v20 = *(NodeBase **)(a1 + 80);
    if ( v20 )
    {
      NodeBase::DeleteSelf(v20);
      *(_QWORD *)(a1 + 80) = 0;
    }
    v21 = *(NodeBase **)(a1 + 96);
    if ( v21 )
    {
      NodeBase::DeleteSelf(v21);
      *(_QWORD *)(a1 + 96) = 0;
    }
    goto LABEL_92;
  }
  if ( a3 )
  {
    if ( a2 != 10 || *(_QWORD *)(*(_QWORD *)(a1 + 72) + 248LL) )
    {
      v35 = UITile::ShowMine((UITile *)a1);
      if ( a5 == 4 || *(_QWORD *)(*(_QWORD *)(a1 + 72) + 248LL) && !*((_BYTE *)Game::G + 41) )
      {
        *(_BYTE *)(a1 + 136) = 0;
        UITile::SetTopVisible((UITile *)a1, 0);
        v37 = 2236962;
        if ( a1 == *(_QWORD *)(*(_QWORD *)(a1 + 72) + 248LL) )
          v37 = 16711680;
        v38 = g_pRenderManager;
        if ( v37 != *((_DWORD *)v35 + 101) )
        {
          *((_DWORD *)v35 + 101) = v37;
          *((_BYTE *)v38 + 20) = 1;
          *((_BYTE *)v38 + 88) = 1;
        }
        if ( *((_DWORD *)v35 + 99) != 130 )
        {
          *((_DWORD *)v35 + 99) = 130;
          *((_BYTE *)v38 + 20) = 1;
          *((_BYTE *)v38 + 88) = 1;
        }
      }
      else if ( a5 == 3 && *((_DWORD *)v35 + 99) != 150 )
      {
        *((_DWORD *)v35 + 99) = 150;
        v36 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 20) = 1;
        *((_BYTE *)v36 + 88) = 1;
      }
      if ( a2 == 10 )
      {
        v39 = *(NodeBase **)(a1 + 88);
        if ( v39 )
          NodeBase::MoveToFront(v39);
      }
      goto LABEL_92;
    }
    goto LABEL_90;
  }
  if ( a2 != 10 )
  {
LABEL_90:
    v43 = *(NodeBase **)(a1 + 80);
    if ( v43 )
    {
      NodeBase::DeleteSelf(v43);
      *(_QWORD *)(a1 + 80) = 0;
    }
    goto LABEL_92;
  }
  *(_BYTE *)(a1 + 136) = 0;
  UITile::SetTopVisible((UITile *)a1, 0);
  v40 = UITile::ShowMine((UITile *)a1);
  v41 = g_pRenderManager;
  if ( *((_DWORD *)v40 + 101) != 2236962 )
  {
    *((_DWORD *)v40 + 101) = 2236962;
    *((_BYTE *)v41 + 20) = 1;
    *((_BYTE *)v41 + 88) = 1;
  }
  if ( *((_DWORD *)v40 + 99) != 130 )
  {
    *((_DWORD *)v40 + 99) = 130;
    *((_BYTE *)v41 + 20) = 1;
    *((_BYTE *)v41 + 88) = 1;
  }
  v42 = *(NodeBase **)(a1 + 88);
  if ( v42 )
  {
    NodeBase::DeleteSelf(v42);
    *(_QWORD *)(a1 + 88) = 0;
  }
  UITile::ShowBadGuess((UITile *)a1);
LABEL_92:
  if ( UITile::_mouseDragNode && (UITile *)a1 == UITile::_mouseDragNode )
  {
    UITile::SetTopVisible((UITile *)a1, 0);
  }
  else if ( *(struct NodeBase **)(a1 + 24) == UserInterface::GetCurrentFocus(g_pUserInterface) )
  {
    if ( *(_BYTE *)(a1 + 136) )
    {
      if ( !UITile::_bothButtonsWereDown )
      {
        v44 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(v44 + 41) != 1 )
        {
          *(_BYTE *)(v44 + 41) = 1;
          v45 = g_pRenderManager;
          *((_BYTE *)g_pRenderManager + 20) = 1;
          *((_BYTE *)v45 + 88) = 1;
        }
      }
    }
  }
  if ( a2 == 11 )
  {
    v46 = *(NodeBase **)(a1 + 104);
    if ( v46 )
      NodeBase::MoveToFront(v46);
  }
  *(_BYTE *)(a1 + 64) = 0;
}

void __fastcall UITile::HandleEvent(UITile *this, struct Event *a2)
{
  UIBoardCanvas *v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int *v15; // r9
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // edi
  UITile *v19; // rdi
  struct UITile *v20; // rdx
  __int64 v21; // rax
  _DWORD *v22; // rdi
  UITile *v23; // rcx
  __int64 v24; // r8
  unsigned int *v25; // r9
  bool v26; // al
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int *v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  UIBoardCanvas *v32; // rcx
  _BYTE *v33; // rax
  UIBoardCanvas *v34; // rcx
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  UIBoardCanvas *v37; // rcx
  struct UITile *v38; // rdx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  UIBoardCanvas *v44; // rcx
  __int64 v45; // rcx
  bool v46; // di
  __int64 v47; // rax
  bool v48; // zf
  _WORD *v49; // rsi
  const wchar_t *v50; // rdi
  __int64 v51; // rcx
  struct NodeSprite *v52; // rax
  NodeBase *v53; // rdi
  RenderManager *v54; // rcx
  unsigned int v55; // edx
  unsigned int v56; // eax
  bool v57; // zf
  _WORD *v58; // rsi
  const wchar_t *v59; // rdi
  __int64 v60; // rcx
  bool v61; // zf
  _WORD *v62; // rsi
  const wchar_t *v63; // rdi
  __int64 v64; // rcx
  XINPUT_VIBRATION pVibration; // [rsp+40h] [rbp+8h] BYREF

  v3 = (UIBoardCanvas *)*((_QWORD *)this + 9);
  if ( *(_DWORD *)(*((_QWORD *)v3 + 7) + 56LL) )
    return;
  if ( *((_DWORD *)Game::G + 14) != 1 )
  {
    if ( *((_DWORD *)a2 + 4) != 12 )
      return;
    v48 = *((_DWORD *)this + 37) == 0;
    if ( *((_DWORD *)this + 37) )
    {
      v49 = (_WORD *)*((_QWORD *)a2 + 5);
      v50 = L"DisarmAnimationComplete";
      v51 = 24;
      do
      {
        if ( !v51 )
          break;
        v48 = *v49++ == *v50++;
        --v51;
      }
      while ( v48 );
      if ( v48 )
      {
        UITile::RemoveDisarmAnimation(this);
        v52 = UITile::ShowMine(this);
        v53 = v52;
        if ( *((_DWORD *)v52 + 99) )
        {
          v54 = g_pRenderManager;
          *((_DWORD *)v52 + 99) = 0;
          *((_BYTE *)v54 + 20) = 1;
          *((_BYTE *)v54 + 88) = 1;
        }
        *((_BYTE *)v52 + 72) = 1;
        Array<IEventListener *>::Add((__int64)v52 + 200, (__int64)this);
        v55 = UITile::_alphaQuickFadeInAnimationId;
        *((_DWORD *)this + 37) = 0;
        v56 = NodeBase::AddAnimation(v53, v55, 0);
        *((_DWORD *)this + 38) = v56;
        NodeBase::ResumeAnimation(v53, v56);
        return;
      }
    }
    v57 = *((_DWORD *)this + 38) == 0;
    if ( *((_DWORD *)this + 38) )
    {
      v58 = (_WORD *)*((_QWORD *)a2 + 5);
      v59 = L"QuickAlphaFadeInComplete";
      v60 = 25;
      do
      {
        if ( !v60 )
          break;
        v57 = *v58++ == *v59++;
        --v60;
      }
      while ( v57 );
      if ( v57 )
      {
        NodeBase::RemoveListener(*((NodeBase **)this + 10), this);
        *(_BYTE *)(*((_QWORD *)this + 10) + 72LL) = 0;
        *((_DWORD *)this + 38) = 0;
LABEL_165:
        UIBoardCanvas::removeAnimatingTile(*((UIBoardCanvas **)this + 9), this);
        return;
      }
    }
    v61 = *((_DWORD *)this + 36) == 0;
    if ( !*((_DWORD *)this + 36) )
      return;
    v62 = (_WORD *)*((_QWORD *)a2 + 5);
    v63 = L"TripAnimationComplete";
    v64 = 22;
    do
    {
      if ( !v64 )
        break;
      v61 = *v62++ == *v63++;
      --v64;
    }
    while ( v61 );
    if ( !v61 )
      return;
    if ( *((_DWORD *)this + 12) >= *(_DWORD *)(*((_QWORD *)Game::G + 3) + 16LL) / 2 )
    {
      if ( !g_pCommonController )
        goto LABEL_164;
      if ( --UITile::_rightRumbleCount )
        goto LABEL_164;
      pVibration.wLeftMotorSpeed = 0;
      pVibration.wRightMotorSpeed = 0;
    }
    else
    {
      if ( !g_pCommonController )
        goto LABEL_164;
      if ( --UITile::_leftRumbleCount )
        goto LABEL_164;
      pVibration.wRightMotorSpeed = 0;
      pVibration.wLeftMotorSpeed = 0;
    }
    XInputSetState(0, &pVibration);
LABEL_164:
    UITile::RemoveExplosionAnimation(this);
    goto LABEL_165;
  }
  v5 = *((_QWORD *)Game::G + 3);
  if ( !v5 || *(_DWORD *)(v5 + 56) || *((_BYTE *)Game::G + 271) || !*((_BYTE *)Game::G + 292) )
    return;
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 > 13 )
  {
    v39 = v6 - 16;
    if ( !v39 )
    {
      if ( !*((_BYTE *)g_pUserInterface + 272) && !*((_BYTE *)g_pUserInterface + 273) )
        UITile::_bothButtonsWereDown &= -(*((_BYTE *)g_pUserInterface + 274) != 0);
      v47 = *((_QWORD *)a2 + 1);
      while ( *(_BYTE *)(v47 + 41) )
      {
        v47 = *(_QWORD *)(v47 + 136);
        if ( !v47 )
        {
          if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 72LL) )
            *((_BYTE *)a2 + 24) = 1;
          return;
        }
      }
      return;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( *((_BYTE *)g_pUserInterface + 280) )
        *((_BYTE *)Game::G + 46) = 0;
      if ( UITile::_bothButtonsWereDown )
        goto LABEL_124;
      if ( UITile::_mouseDragNode )
        return;
      goto LABEL_126;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      UIBoardCanvas::UpdateSecondaryRevealPreview(v3, 0);
      UIBoardCanvas::ClearHighlightTile(*((UIBoardCanvas **)this + 9));
      return;
    }
    v42 = v41 - 1;
    if ( !v42 )
    {
      UITile::_mouseDownWasCanceled = 0;
      return;
    }
    v43 = v42 - 1;
    if ( v43 )
    {
      if ( v43 != 4 )
        return;
      UITile::_mouseDownWasCanceled = 0;
      if ( !((unsigned __int16)GetKeyState(16) >> 8) && !((unsigned __int16)GetKeyState(17) >> 8) )
      {
        if ( !*((_BYTE *)this + 136) )
          return;
        v44 = (UIBoardCanvas *)*((_QWORD *)this + 9);
LABEL_102:
        UIBoardCanvas::DoRevealAction(v44, this);
        *((_BYTE *)this + 136) = 0;
LABEL_126:
        v44 = (UIBoardCanvas *)*((_QWORD *)this + 9);
        goto LABEL_127;
      }
    }
    else
    {
      UIBoardCanvas::UpdateSecondaryRevealPreview(v3, 0);
      v46 = UITile::_bothButtonsWereDown;
      UITile::_bothButtonsWereDown = 0;
      if ( !*((_BYTE *)a2 + 24)
        || UITile::_mouseDownWasCanceled
        || (unsigned __int16)GetKeyState(17) >> 8 && !*((_BYTE *)Game::G + 46) )
      {
        return;
      }
      if ( !((unsigned __int16)GetKeyState(16) >> 8)
        && (!((unsigned __int16)GetKeyState(17) >> 8) || !*((_BYTE *)Game::G + 46)) )
      {
        v44 = (UIBoardCanvas *)*((_QWORD *)this + 9);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 7) + 80LL) + 16LL)
                                               + 8LL * *((unsigned int *)this + 12))
                                   + 16LL)
                       + 4LL * *((unsigned int *)this + 13)) == 10 )
        {
LABEL_127:
          UIBoardCanvas::SetHighlightTile(v44, this);
          return;
        }
        if ( !*((_BYTE *)this + 136) || v46 )
          return;
        goto LABEL_102;
      }
    }
    if ( *((_BYTE *)this + 136) )
    {
      UIBoardCanvas::ToggleFlag(*((UIBoardCanvas **)this + 9), this);
      return;
    }
    v45 = *((_QWORD *)this + 14);
    if ( v45 && *(_BYTE *)(v45 + 41) )
      goto LABEL_59;
    return;
  }
  if ( v6 != 13 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      *((_BYTE *)Game::G + 46) = 0;
      UITile::_pMouseEnterNode = this;
      if ( UITile::_bothButtonsWereDown )
        goto LABEL_124;
      if ( !UITile::_mouseDragNode )
        return;
      UITile::_mouseDragNode = this;
      goto LABEL_83;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      *((_BYTE *)Game::G + 46) = 0;
      UIBoardCanvas::UpdateSecondaryRevealPreview(*((UIBoardCanvas **)this + 9), 0);
      if ( !UITile::_mouseDragNode )
        return;
      v38 = 0;
LABEL_84:
      UIBoardCanvas::ShowTopsOnAllCoveredSquaresExcept(*((UIBoardCanvas **)this + 9), v38);
      return;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            UIBoardCanvas::UpdateSecondaryRevealPreview(v3, 0);
            v12 = UITile::_bothButtonsWereDown;
            v13 = *((_QWORD *)this + 9);
            if ( *((_DWORD *)a2 + 12) == 2 )
              v12 = 0;
            v14 = *(_QWORD *)(v13 + 128);
            UITile::_bothButtonsWereDown = v12;
            v15 = (unsigned int *)*(unsigned int *)(v14 + 8);
            v16 = *(_DWORD *)(v14 + 12);
            if ( *((_DWORD *)a2 + 8) <= (int)v15
              || (v17 = *(_QWORD *)(v13 + 56),
                  v18 = *(_DWORD *)(v13 + 272),
                  *((_DWORD *)a2 + 8) >= (int)v15 + v18 * *(_DWORD *)(v17 + 16))
              || *((_DWORD *)a2 + 9) <= v16
              || *((_DWORD *)a2 + 9) >= v16 + v18 * *(_DWORD *)(v17 + 12) )
            {
              v19 = 0;
              UITile::_mouseDragNode = 0;
            }
            else
            {
              v19 = UITile::_mouseDragNode;
            }
            v20 = UITile::_pMouseEnterNode;
            if ( UITile::_pMouseEnterNode )
            {
              if ( (*((_DWORD *)a2 + 12) == 2 || (_BYTE)v12) && !*((_BYTE *)UITile::_pMouseEnterNode + 136) )
              {
                v21 = *((_QWORD *)UITile::_pMouseEnterNode + 14);
                if ( v21 )
                {
                  if ( *(_BYTE *)(v21 + 41) )
                  {
                    UITile::_mouseDragNode = 0;
                    UIBoardCanvas::DoSecondaryRevealAction((UIBoardCanvas *)v13, UITile::_pMouseEnterNode, v12, v15);
                    v19 = UITile::_mouseDragNode;
                    v20 = UITile::_pMouseEnterNode;
                  }
                }
              }
              UIBoardCanvas::SetHighlightTile(*((UIBoardCanvas **)this + 9), v20);
            }
            if ( v19 )
            {
              if ( *((_BYTE *)v19 + 136) && !*((_DWORD *)a2 + 12) )
              {
                v22 = operator new(0x20u);
                if ( v22 )
                {
                  v22[4] = 20;
                  *(_QWORD *)v22 = &Event_FocusUnSelect::`vftable';
                }
                else
                {
                  v22 = 0;
                }
                v23 = UITile::_mouseDragNode;
                *((_BYTE *)v22 + 24) = 1;
                UITile::SetTopVisible(v23, 1);
                (**(void (__fastcall ***)(UITile *, void *))UITile::_mouseDragNode)(UITile::_mouseDragNode, v22);
                (**(void (__fastcall ***)(void *, __int64))v22)(v22, 1);
              }
              UITile::_mouseDragNode = 0;
            }
          }
          return;
        }
        UIBoardCanvas::UpdateSecondaryRevealPreview(v3, 0);
        v26 = UITile::_bothButtonsWereDown;
        if ( *((_DWORD *)a2 + 12) == 2 )
          v26 = 0;
        UITile::_bothButtonsWereDown = v26;
        if ( UITile::_mouseDownWasCanceled )
        {
          UITile::_bothButtonsWereDown = 0;
          return;
        }
        if ( *((_DWORD *)a2 + 12) == 2 || v26 )
        {
          if ( *((_BYTE *)this + 136) )
          {
LABEL_51:
            if ( !*((_DWORD *)a2 + 12) )
            {
              UITile::_mouseDragNode = 0;
              if ( !*((_DWORD *)this + 35) || !*((_QWORD *)this + 12) )
                UIBoardCanvas::Refresh(*((UIBoardCanvas **)this + 9), 1);
            }
            return;
          }
          v27 = *((_QWORD *)this + 14);
          if ( v27 && *(_BYTE *)(v27 + 41) )
            UIBoardCanvas::DoSecondaryRevealAction(*((UIBoardCanvas **)this + 9), this, v24, v25);
        }
        if ( !*((_BYTE *)this + 136) )
          UIBoardCanvas::SetHighlightTile(*((UIBoardCanvas **)this + 9), this);
        goto LABEL_51;
      }
      if ( (unsigned __int16)GetKeyState(17) >> 8 )
        return;
      UITile::_mouseDragNode = 0;
      UITile::_mouseDownWasCanceled = 0;
      if ( *((_BYTE *)this + 136) )
        return;
      v30 = *((_QWORD *)this + 14);
      if ( !v30 || !*(_BYTE *)(v30 + 41) )
        return;
LABEL_59:
      UIBoardCanvas::DoSecondaryRevealAction(*((UIBoardCanvas **)this + 9), this, v28, v29);
      return;
    }
    *((_BYTE *)Game::G + 46) = 0;
    UITile::_mouseDownWasCanceled = 0;
    if ( !*((_BYTE *)this + 136) )
    {
      v31 = *((_QWORD *)this + 14);
      if ( v31 )
      {
        if ( *(_BYTE *)(v31 + 41) && (unsigned __int16)GetKeyState(16) >> 8 )
        {
          v32 = (UIBoardCanvas *)*((_QWORD *)this + 9);
          UITile::_bothButtonsWereDown = 1;
          UITile::_mouseDragNode = 0;
          UIBoardCanvas::Refresh(v32, 1);
LABEL_124:
          UIBoardCanvas::UpdateSecondaryRevealPreview(*((UIBoardCanvas **)this + 9), this);
          return;
        }
      }
    }
    v33 = (_BYTE *)*((_QWORD *)a2 + 3);
    if ( *v33 && v33[1] || v33[2] )
    {
      UITile::_bothButtonsWereDown = 1;
      if ( !UITile::_mouseDragNode
        || (v34 = (UIBoardCanvas *)*((_QWORD *)this + 9),
            UITile::_mouseDragNode = 0,
            UIBoardCanvas::Refresh(v34, 1),
            UITile::_bothButtonsWereDown) )
      {
        UIBoardCanvas::ClearHighlightTile(*((UIBoardCanvas **)this + 9));
        UIBoardCanvas::UpdateSecondaryRevealPreview(*((UIBoardCanvas **)this + 9), this);
      }
    }
    else
    {
      UITile::_bothButtonsWereDown = 0;
    }
    if ( !*((_BYTE *)this + 136) )
    {
LABEL_79:
      v36 = (_BYTE *)*((_QWORD *)a2 + 3);
      if ( !*v36 || v36[1] || (unsigned __int16)GetKeyState(17) >> 8 )
        return;
      v37 = (UIBoardCanvas *)*((_QWORD *)this + 9);
      UITile::_mouseDragNode = this;
      UIBoardCanvas::ClearHighlightTile(v37);
LABEL_83:
      v38 = this;
      goto LABEL_84;
    }
    v35 = (_BYTE *)*((_QWORD *)a2 + 3);
    if ( !*v35 )
    {
      if ( v35[1] )
      {
LABEL_78:
        UIBoardCanvas::ToggleFlag(*((UIBoardCanvas **)this + 9), this);
        goto LABEL_79;
      }
      if ( !*v35 )
        goto LABEL_79;
    }
    if ( v35[1] || !((unsigned __int16)GetKeyState(17) >> 8) )
      goto LABEL_79;
    goto LABEL_78;
  }
  if ( *((_DWORD *)a2 + 8) == *((_DWORD *)this + 35) )
    UITile::RemoveInvalidMoveAnimation(this);
}

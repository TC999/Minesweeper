void __fastcall UIBoardCanvas::SetHighlightTile(UIBoardCanvas *this, struct UITile *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  Game *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  RenderManager *v7; // rax
  __int64 v8; // rax

  UIBoardCanvas::ClearHighlightTile(this);
  v4 = Game::G;
  if ( *((_DWORD *)Game::G + 14) == 1
    && (v5 = *((_QWORD *)Game::G + 3)) != 0
    && !*(_DWORD *)(v5 + 56)
    && !*((_BYTE *)Game::G + 271)
    && *((_BYTE *)Game::G + 292) )
  {
    *(_QWORD *)(v3 + 240) = v2;
    if ( *(_BYTE *)(v2 + 136) )
    {
      v6 = *(_QWORD *)(v2 + 8);
      if ( *(_BYTE *)(v6 + 41) == 1 )
        return;
      *(_BYTE *)(v6 + 41) = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v4 + 46) )
    {
      v8 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v8 + 404) != 14211288 )
      {
        *(_DWORD *)(v8 + 404) = 14211288;
LABEL_9:
        v7 = g_pRenderManager;
        *((_BYTE *)g_pRenderManager + 20) = 1;
        *((_BYTE *)v7 + 88) = 1;
      }
    }
  }
  else
  {
    *(_QWORD *)(v3 + 240) = 0;
  }
}

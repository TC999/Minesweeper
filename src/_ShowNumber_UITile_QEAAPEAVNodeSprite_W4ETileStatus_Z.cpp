__int64 __fastcall UITile::ShowNumber(__int64 a1, int a2)
{
  int *v4; // rax
  int v5; // edx
  int v6; // r9d
  RenderManager *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( !*(_QWORD *)(a1 + 112) )
  {
    v4 = (int *)NodeSprite::Copy(UITile::_pNumberSpriteBase);
    v5 = UITile::_tileSize * *(_DWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 112) = v4;
    NodeBase::SetPosition((NodeBase *)v4, v5 + 5, v4[3]);
    NodeBase::SetPosition(
      *(NodeBase **)(a1 + 112),
      *(_DWORD *)(*(_QWORD *)(a1 + 112) + 8LL),
      v6 * *(_DWORD *)(a1 + 52) + 3);
    v7 = g_pRenderManager;
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + 72LL) = 0;
    v8 = *(_QWORD *)(a1 + 112);
    if ( *(_BYTE *)(v8 + 41) != 1 )
    {
      *(_BYTE *)(v8 + 41) = 1;
      *((_BYTE *)v7 + 20) = 1;
      *((_BYTE *)v7 + 88) = 1;
    }
    v9 = *(_QWORD *)(a1 + 112);
    if ( a2 - 1 != *(_DWORD *)(v9 + 384) )
    {
      *(_DWORD *)(v9 + 384) = a2 - 1;
      *((_BYTE *)v7 + 20) = 1;
      *((_BYTE *)v7 + 88) = 1;
    }
  }
  return *(_QWORD *)(a1 + 112);
}

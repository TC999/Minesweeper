void __fastcall UITile::SetTopVisible(UITile *this, char a2)
{
  RenderManager *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  UITile *v10; // rsi
  NodeBase *v11; // rcx
  int v12; // r8d
  _DWORD **v13; // rdx
  UITile *v14; // rsi
  NodeBase *v15; // rcx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  NodeBase *v19; // rcx
  int v20; // r9d
  int v21; // edx
  __int64 v22; // rax
  NodeBase *v23; // rcx

  v3 = g_pRenderManager;
  if ( a2 && *(_DWORD *)(*((_QWORD *)this + 2) + 396LL) == 255 )
  {
    v5 = *((_QWORD *)this + 3);
    if ( !*(_DWORD *)(v5 + 396) )
      goto LABEL_8;
    *(_DWORD *)(v5 + 396) = 0;
  }
  else
  {
    v6 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v6 + 396) == 255 )
      goto LABEL_8;
    *(_DWORD *)(v6 + 396) = 255;
  }
  *((_BYTE *)v3 + 88) = 1;
  *((_BYTE *)v3 + 20) = 1;
LABEL_8:
  v7 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v7 + 41) == a2 )
    return;
  *((_BYTE *)this + 64) = 1;
  if ( *(_BYTE *)(v7 + 41) != a2 )
  {
    *(_BYTE *)(v7 + 41) = a2;
    *((_BYTE *)v3 + 20) = 1;
    *((_BYTE *)v3 + 88) = 1;
  }
  v8 = *((_QWORD *)this + 9);
  v9 = *((_DWORD *)this + 12);
  if ( v9 < *(_DWORD *)(v8 + 8) - 1 )
  {
    v10 = *(UITile **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL * (unsigned int)(v9 + 1)) + 16LL)
                     + 8LL * *((unsigned int *)this + 13));
    if ( !a2 || *(_BYTE *)(*((_QWORD *)v10 + 2) + 41LL) )
    {
      v11 = (NodeBase *)*((_QWORD *)v10 + 16);
      if ( v11 )
      {
        NodeBase::DeleteSelf(v11);
        *((_QWORD *)v10 + 16) = 0;
      }
    }
    else
    {
      UITile::ShowLeftShadow(v10, *(_DWORD *)(*((_QWORD *)this + 2) + 396LL));
    }
  }
  v12 = *((_DWORD *)this + 13);
  v13 = *(_DWORD ***)(*((_QWORD *)this + 9) + 24LL);
  if ( v12 < **v13 - 1 )
  {
    v14 = *(UITile **)(*((_QWORD *)v13[*((unsigned int *)this + 12)] + 2) + 8LL * (unsigned int)(v12 + 1));
    if ( !a2 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 41LL) )
    {
      v15 = (NodeBase *)*((_QWORD *)v14 + 15);
      if ( v15 )
      {
        NodeBase::DeleteSelf(v15);
        *((_QWORD *)v14 + 15) = 0;
      }
    }
    else
    {
      UITile::ShowUpperShadow(v14, *(_DWORD *)(*((_QWORD *)this + 2) + 396LL));
    }
  }
  v16 = *((_DWORD *)this + 12);
  if ( v16 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 24LL)
                                                        + 8LL * (unsigned int)(v16 - 1))
                                            + 16LL)
                                + 8LL * *((unsigned int *)this + 13))
                    + 16LL);
    if ( *(_BYTE *)(v18 + 41) && !a2 )
    {
      v17 = *(_DWORD *)(v18 + 396);
      goto LABEL_29;
    }
  }
  else if ( !a2 )
  {
    v17 = 255;
LABEL_29:
    UITile::ShowLeftShadow(this, v17);
    goto LABEL_32;
  }
  v19 = (NodeBase *)*((_QWORD *)this + 16);
  if ( v19 )
  {
    NodeBase::DeleteSelf(v19);
    *((_QWORD *)this + 16) = 0;
  }
LABEL_32:
  v20 = *((_DWORD *)this + 13);
  if ( v20 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 24LL)
                                                        + 8LL * *((unsigned int *)this + 12))
                                            + 16LL)
                                + 8LL * (unsigned int)(v20 - 1))
                    + 16LL);
    if ( *(_BYTE *)(v22 + 41) && !a2 )
    {
      v21 = *(_DWORD *)(v22 + 396);
      goto LABEL_38;
    }
  }
  else if ( !a2 )
  {
    v21 = 255;
LABEL_38:
    UITile::ShowUpperShadow(this, v21);
    return;
  }
  v23 = (NodeBase *)*((_QWORD *)this + 15);
  if ( v23 )
  {
    NodeBase::DeleteSelf(v23);
    *((_QWORD *)this + 15) = 0;
  }
}

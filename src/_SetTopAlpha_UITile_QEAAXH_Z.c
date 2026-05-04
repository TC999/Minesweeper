void __fastcall UITile::SetTopAlpha(UITile *this, int a2)
{
  __int64 v2; // rax
  RenderManager *v3; // rax

  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 396) != a2 )
  {
    *((_BYTE *)this + 64) = 1;
    if ( a2 != *(_DWORD *)(v2 + 396) )
    {
      *(_DWORD *)(v2 + 396) = a2;
      v3 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v3 + 88) = 1;
    }
    UITile::SetTopVisible(this, *(_BYTE *)(*((_QWORD *)this + 2) + 41LL));
  }
}

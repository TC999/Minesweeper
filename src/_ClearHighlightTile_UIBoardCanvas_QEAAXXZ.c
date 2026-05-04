void __fastcall UIBoardCanvas::ClearHighlightTile(UIBoardCanvas *this)
{
  __int64 v1; // rax
  __int64 v2; // r8
  RenderManager *v3; // rdx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 30);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = g_pRenderManager;
    if ( *(_BYTE *)(v2 + 41) )
    {
      *(_BYTE *)(v2 + 41) = 0;
      *((_BYTE *)v3 + 20) = 1;
      *((_BYTE *)v3 + 88) = 1;
    }
    v4 = *(_QWORD *)(*((_QWORD *)this + 30) + 24LL);
    if ( *(_DWORD *)(v4 + 404) != 0xFFFFFF )
    {
      *(_DWORD *)(v4 + 404) = 0xFFFFFF;
      *((_BYTE *)v3 + 20) = 1;
      *((_BYTE *)v3 + 88) = 1;
    }
  }
}

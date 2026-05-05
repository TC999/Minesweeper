void __fastcall NodeLabel::UpdateZero(NodeLabel *this)
{
  NodeLabel *v2; // rax
  TextRenderer *v3; // r10
  unsigned int v4; // edi

  NodeSprite::UpdateZero(this);
  if ( *((_DWORD *)this + 4) && *((_DWORD *)this + 5) && *((_BYTE *)g_pRenderManager + 211) )
  {
    v2 = this;
    while ( *((_BYTE *)v2 + 41) )
    {
      v2 = (NodeLabel *)*((_QWORD *)v2 + 17);
      if ( !v2 )
      {
        v3 = g_pTextRenderer;
        v4 = *((_DWORD *)g_pTextRenderer + 8);
        if ( *((_DWORD *)this + 118) != -1 )
        {
          (*(void (__fastcall **)(TextRenderer *))(*(_QWORD *)g_pTextRenderer + 40LL))(g_pTextRenderer);
          v3 = g_pTextRenderer;
        }
        TextRenderer::GetTextRenderInfo(
          v3,
          *((const unsigned __int16 **)this + 60),
          *((_DWORD *)this + 4),
          *((_DWORD *)this + 5),
          *((_DWORD *)this + 119),
          (float *)this + 108,
          *((unsigned int **)this + 52),
          *((_DWORD *)this + 316),
          (NodeLabel *)((char *)this + 496));
        if ( *((_DWORD *)this + 118) != -1 )
          (*(void (__fastcall **)(TextRenderer *, _QWORD))(*(_QWORD *)g_pTextRenderer + 40LL))(g_pTextRenderer, v4);
        return;
      }
    }
  }
}

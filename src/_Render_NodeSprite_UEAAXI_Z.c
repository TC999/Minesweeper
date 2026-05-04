void __fastcall NodeSprite::Render(NodeSprite *this, unsigned int a2)
{
  int v4; // r11d

  if ( *((_BYTE *)this + 41) && !*((_BYTE *)g_pRenderManager + 209) )
  {
    if ( a2 == *((_DWORD *)this + 15) && *((_DWORD *)this + 99) )
    {
      NodeSprite::UpdateCurrentUVs(this);
      v4 = *((_DWORD *)this + 90);
      if ( !v4 )
        v4 = 1;
      Material::Render(
        *(Material **)(*((_QWORD *)g_pRenderManager + 7) + 8LL * v4),
        (const int *)this + 66,
        (const float *)this + 108,
        *(_DWORD *)(32LL * *((unsigned int *)this + 107) + *((_QWORD *)this + 52)),
        *((_DWORD *)this + 99),
        *((float *)this + 70),
        *((_DWORD *)this + 101),
        1,
        *((_BYTE *)this + 408),
        *((_BYTE *)this + 409),
        *((_BYTE *)this + 410),
        *((_BYTE *)this + 411));
    }
    NodeBase::Render(this, a2);
  }
}

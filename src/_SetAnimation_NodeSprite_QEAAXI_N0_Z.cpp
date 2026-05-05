void __fastcall NodeSprite::SetAnimation(NodeSprite *this, unsigned int a2)
{
  float v2; // xmm0_4
  bool v3; // zf
  bool v4; // al
  RenderManager *v5; // rax

  if ( a2 < *((_DWORD *)this + 106) )
  {
    v2 = *((float *)this + 112);
    v3 = *((_DWORD *)this + 107) == a2;
    *((_DWORD *)this + 107) = a2;
    v4 = !v3;
    if ( v2 > 0.000001 )
      v4 = 1;
    v3 = *((_DWORD *)this + 96) == 0;
    *((_DWORD *)this + 112) = 0;
    *((_BYTE *)this + 414) = 0;
    if ( !v3 )
      v4 = 1;
    *((_DWORD *)this + 96) = 0;
    if ( v4 )
    {
      v5 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v5 + 88) = 1;
    }
  }
}

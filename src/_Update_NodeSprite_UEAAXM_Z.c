void __fastcall NodeSprite::Update(NodeSprite *this, float a2)
{
  float v3; // xmm6_4
  bool v4; // cf
  RenderManager *v5; // rcx
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // al

  NodeBase::Update(this, a2);
  if ( *((_BYTE *)this + 413) )
  {
    v3 = a2 + *((float *)this + 112);
    v4 = v3 < *((float *)this + 115);
    *((float *)this + 112) = v3;
    if ( !v4 )
    {
      v5 = g_pRenderManager;
      do
      {
        v6 = *((_DWORD *)this + 96);
        v7 = *((unsigned int *)this + 107);
        v8 = *((_QWORD *)this + 52);
        *((float *)this + 112) = *((float *)this + 112) - *((float *)this + 115);
        v9 = 32 * v7;
        *((_DWORD *)this + 96) = v6 + 1;
        if ( (unsigned int)(v6 + 1) >= *(_DWORD *)(v9 + v8 + 12) )
        {
          v10 = *((_BYTE *)this + 412);
          *((_BYTE *)this + 413) = v10;
          if ( v10 )
            *((_DWORD *)this + 96) = 0;
          else
            *((_DWORD *)this + 96) = *(_DWORD *)(v9 + v8 + 12) - 1;
        }
        if ( v6 != *((_DWORD *)this + 96) )
        {
          *((_BYTE *)v5 + 20) = 1;
          *((_BYTE *)v5 + 88) = 1;
        }
      }
      while ( *((float *)this + 112) >= *((float *)this + 115) );
    }
  }
}

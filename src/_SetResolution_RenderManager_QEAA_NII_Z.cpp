char __fastcall RenderManager::SetResolution(RenderManager *this, signed int a2, signed int a3)
{
  RenderManager *v3; // rbx
  int v6; // ecx
  int v7; // edx
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // r12d
  int v11; // ebp

  v3 = g_pRenderManager;
  if ( g_pRenderManager || MEMORY[0xD4] )
  {
    if ( *((_BYTE *)g_pRenderManager + 165) )
    {
      *((_DWORD *)g_pRenderManager + 42) = 1065353216;
      *((_DWORD *)v3 + 43) = 1065353216;
    }
    else
    {
      v6 = 800;
      v7 = 496;
      if ( g_pUserInterface )
      {
        v6 = *((_DWORD *)g_pUserInterface + 64);
        v7 = *((_DWORD *)g_pUserInterface + 65);
      }
      v8 = 1.0;
      v9 = (float)a2 / (float)v6;
      if ( v9 < 1.0 )
        v9 = 1.0;
      *((float *)g_pRenderManager + 42) = v9;
      if ( (float)((float)a3 / (float)v7) >= 1.0 )
        v8 = (float)a3 / (float)v7;
      *((float *)v3 + 43) = v8;
    }
    v10 = (int)(float)((float)a2 / *((float *)v3 + 42));
    v11 = (int)(float)((float)a3 / *((float *)v3 + 43));
    if ( *(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL) != __PAIR64__(v11, v10) )
    {
      Log(2u, 2632, "RenderManager.cpp", L"Setting BackBuffer Res: %d, %d", a2, a3);
      Log(2u, 2633, "RenderManager.cpp", L"Using RenderScale of %f x %f", *((float *)v3 + 42), *((float *)v3 + 43));
      *(_DWORD *)(*((_QWORD *)v3 + 8) + 8LL) = v10;
      *(_DWORD *)(*((_QWORD *)v3 + 8) + 12LL) = v11;
      NodeBase::SetSize(*((NodeBase **)v3 + 15), a2, a3);
      RenderManager::ReleaseDefaultResources(v3);
      if ( !RenderManager::Reset(v3) )
      {
        Log(2u, 2652, "RenderManager.cpp", L"Failed to set the backbuffer res.");
        return 0;
      }
      if ( !RenderManager::RecreateDefaultResources(v3) )
      {
        Log(2u, 2661, "RenderManager.cpp", L"SetResolution() -- failure in RecreateDefaultResources()");
        return 0;
      }
      *((_BYTE *)v3 + 20) = 1;
      *((_BYTE *)v3 + 88) = 1;
    }
  }
  return 1;
}

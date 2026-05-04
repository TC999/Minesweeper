void __fastcall UserInterface::LayoutToRender(UserInterface *this, int a2, int a3, int *a4, int *a5)
{
  bool v5; // zf
  int *v6; // r10
  int v7; // ecx
  float v8; // xmm2_4
  int v9; // r8d
  RenderManager *v10; // rcx

  v5 = g_CurrentBackStyle == 0;
  v6 = (int *)g_pUserInterface;
  v7 = (int)(float)((float)((float)*((int *)g_pUserInterface + 73) / (float)*((int *)g_pUserInterface + 64)) * (float)a2);
  v8 = (float)*((int *)g_pUserInterface + 74);
  *a4 = v7;
  v9 = (int)(float)((float)(v8 / (float)v6[65]) * (float)a3);
  *a5 = v9;
  if ( v5 && g_bDoubleDPI )
  {
    *a4 = 2 * v7;
    *a5 = 2 * v9;
  }
  v10 = g_pRenderManager;
  *a4 = (int)(float)((float)(*a4 + v6[71]) / *((float *)g_pRenderManager + 42));
  *a5 = (int)(float)((float)(*a5 + v6[72]) / *((float *)v10 + 43));
}

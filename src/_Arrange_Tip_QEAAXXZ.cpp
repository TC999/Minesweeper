void __fastcall Tip::Arrange(Tip *this)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  const unsigned __int16 *v3; // r8
  NodeBase *v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  int *v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  RenderManager *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rbp
  unsigned int v17; // edx
  int TextWrappedHeight; // eax
  unsigned int v19; // edx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r12d
  unsigned int v23; // r8d
  int v24; // r13d
  int v25; // r11d
  unsigned int v26; // eax
  unsigned int v27; // ebp
  int v28; // r10d
  int v29; // r11d
  int v30; // edx
  _DWORD *v31; // rax
  NodeBase *v32; // rcx
  int v33; // r8d
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rcx
  RenderManager *v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // edx
  int v43; // eax
  DWORD v44; // r8d
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  int v49; // edx
  int v50; // edx
  NodeBase *v51; // rcx
  unsigned int v52; // r8d
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 v55; // rax
  RenderManager *v56; // rax
  NodeBase *v57; // rcx
  DWORD pdwDefaultLayout; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v59; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+80h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 10);
  pdwDefaultLayout = 0;
  v59 = 0;
  v2 = *(_DWORD *)(v1 + 472);
  v3 = *(const unsigned __int16 **)(v1 + 480);
  if ( v2 == -1 )
    v2 = 0;
  TextRenderer::GetTextSize(g_pTextRenderer, v2, v3, &pdwDefaultLayout, &v59);
  v5 = (NodeBase *)*((_QWORD *)this + 25);
  v6 = pdwDefaultLayout
     + *(_DWORD *)(*((_QWORD *)this + 2) + 16LL)
     + *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
     + 2 * *((_DWORD *)this + 39);
  if ( v5 )
    v6 += *((_DWORD *)this + 45);
  v7 = *((_DWORD *)this + 47);
  if ( v7 && v6 < v7 )
    v6 = *((_DWORD *)this + 47);
  v8 = *((_DWORD *)this + 48);
  if ( v8 && v6 > v8 )
    v6 = *((_DWORD *)this + 48);
  if ( v5 )
  {
    NodeBase::SetPosition(
      v5,
      v6 - (*((_DWORD *)this + 45) >> 1) - *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) - *((_DWORD *)this + 43),
      *((_DWORD *)this + 46) >> 1);
    v9 = (int *)*((_QWORD *)this + 25);
    v10 = (float)v9[4] / (float)*((int *)this + 45);
    v11 = (float)v9[5] / (float)*((int *)this + 46);
    if ( v10 <= v11 )
      v12 = 100.0 / v11;
    else
      v12 = 100.0 / v10;
    if ( v9[6] != (int)v12 )
    {
      v9[6] = (int)v12;
      v13 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v13 + 88) = 1;
      *((_BYTE *)g_pUserInterface + 275) = 1;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 8LL))(*((_QWORD *)this + 25));
  }
  v14 = *((_QWORD *)this + 25);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 8)
        - (*((_DWORD *)this + 45) >> 1)
        - *(_DWORD *)(*((_QWORD *)this + 2) + 16LL)
        - *((_DWORD *)this + 41);
  else
    v15 = v6
        + -2 * *((_DWORD *)this + 41)
        - *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
        - *(_DWORD *)(*((_QWORD *)this + 2) + 16LL);
  v16 = *((_QWORD *)this + 11);
  pdwDefaultLayout = 0;
  v17 = *(_DWORD *)(v16 + 472);
  if ( v17 == -1 )
    v17 = 0;
  TextWrappedHeight = TextRenderer::GetTextWrappedHeight(
                        g_pTextRenderer,
                        v17,
                        *(const unsigned __int16 **)(v16 + 480),
                        v15,
                        &pdwDefaultLayout,
                        &v60,
                        (struct Str *)(v16 + 496));
  v19 = v60;
  *(_DWORD *)(v16 + 1264) = TextWrappedHeight;
  if ( v19 > v15 )
  {
    v15 = v19;
    v6 = v19
       + *(_DWORD *)(*((_QWORD *)this + 2) + 16LL)
       + *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
       + 2 * *((_DWORD *)this + 41);
  }
  v20 = *((_QWORD *)this + 25);
  if ( v20 )
    v21 = *((_DWORD *)this + 46);
  else
    v21 = 0;
  v22 = v59;
  v23 = v59 + pdwDefaultLayout;
  if ( v59 + pdwDefaultLayout <= v21 )
  {
    if ( v20 )
      v23 = *((_DWORD *)this + 46);
    else
      v23 = 0;
  }
  v24 = *((_DWORD *)this + 40);
  v25 = *(_DWORD *)(*((_QWORD *)this + 4) + 20LL);
  v26 = *((_DWORD *)this + 49);
  v27 = v23 + v25 + v24 + *(_DWORD *)(*((_QWORD *)this + 5) + 20LL) + 2 * *((_DWORD *)this + 42);
  if ( v26 && v27 > v26 )
    v27 = *((_DWORD *)this + 49);
  NodeBase::SetPosition(
    *((NodeBase **)this + 10),
    *(_DWORD *)(*((_QWORD *)this + 2) + 16LL) + *((_DWORD *)this + 39),
    v24 + v25);
  NodeBase::SetSize(*((NodeBase **)this + 10), v28, v22);
  NodeBase::SetPosition(
    *((NodeBase **)this + 11),
    *((_DWORD *)this + 41) + *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
    v22 + *((_DWORD *)this + 42) + *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) + *((_DWORD *)this + 40));
  NodeBase::SetSize(*((NodeBase **)this + 11), v15, v29);
  NodeBase::SetPosition(*((NodeBase **)this + 2), 0, *(_DWORD *)(*((_QWORD *)this + 6) + 20LL));
  NodeBase::SetSize(
    *((NodeBase **)this + 2),
    *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
    v27 - *(_DWORD *)(*((_QWORD *)this + 8) + 20LL) - *(_DWORD *)(*((_QWORD *)this + 6) + 20LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 3),
    v6 - *(_DWORD *)(*((_QWORD *)this + 3) + 16LL),
    *(_DWORD *)(*((_QWORD *)this + 7) + 20LL));
  NodeBase::SetSize(
    *((NodeBase **)this + 3),
    *(_DWORD *)(*((_QWORD *)this + 3) + 16LL),
    v27 - *(_DWORD *)(*((_QWORD *)this + 8) + 20LL) - *(_DWORD *)(*((_QWORD *)this + 6) + 20LL));
  NodeBase::SetPosition(*((NodeBase **)this + 4), *(_DWORD *)(*((_QWORD *)this + 6) + 16LL), 0);
  NodeBase::SetSize(
    *((NodeBase **)this + 4),
    v6 - *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) - *(_DWORD *)(*((_QWORD *)this + 6) + 16LL),
    *(_DWORD *)(*((_QWORD *)this + 4) + 20LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 5),
    *(_DWORD *)(*((_QWORD *)this + 8) + 16LL),
    v27 - *(_DWORD *)(*((_QWORD *)this + 5) + 20LL));
  NodeBase::SetSize(
    *((NodeBase **)this + 5),
    v6 - *(_DWORD *)(*((_QWORD *)this + 7) + 16LL) - *(_DWORD *)(*((_QWORD *)this + 6) + 16LL),
    *(_DWORD *)(*((_QWORD *)this + 5) + 20LL));
  NodeBase::SetPosition(*((NodeBase **)this + 6), 0, 0);
  NodeBase::SetPosition(*((NodeBase **)this + 8), v30, v27 - *(_DWORD *)(*((_QWORD *)this + 8) + 20LL));
  NodeBase::SetPosition(*((NodeBase **)this + 7), v6 - *(_DWORD *)(*((_QWORD *)this + 7) + 16LL), 0);
  NodeBase::SetPosition(
    *((NodeBase **)this + 9),
    v6 - *(_DWORD *)(*((_QWORD *)this + 9) + 16LL),
    v27 - *(_DWORD *)(*((_QWORD *)this + 8) + 20LL));
  NodeBase::SetPosition(
    *((NodeBase **)this + 15),
    *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
    *(_DWORD *)(*((_QWORD *)this + 4) + 20LL));
  NodeBase::SetSize(
    *((NodeBase **)this + 15),
    v6 - *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 16LL),
    v27 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) - *(_DWORD *)(*((_QWORD *)this + 5) + 20LL));
  pdwDefaultLayout = 0;
  GetProcessDefaultLayout(&pdwDefaultLayout);
  v31 = (_DWORD *)*((_QWORD *)this + 7);
  v32 = (NodeBase *)*((_QWORD *)this + 18);
  v33 = v31[5] - *((_DWORD *)v32 + 5);
  if ( (pdwDefaultLayout & 1) != 0 )
  {
    v34 = *((_QWORD *)this + 6);
    v35 = *(_DWORD *)(v34 + 12) + v33;
    v36 = *((_DWORD *)this + 43) + *(_DWORD *)(v34 + 8);
  }
  else
  {
    v35 = v31[3] + v33;
    v36 = v31[2] - *((_DWORD *)this + 43);
  }
  NodeBase::SetPosition(v32, v36, *((_DWORD *)this + 44) + v35);
  v37 = *((_QWORD *)this + 12);
  if ( v37 )
    v38 = *((_DWORD *)this + 41) + *(_DWORD *)(v37 + 16);
  else
    v38 = 0;
  NodeBase::SetSize(
    *((NodeBase **)this + 13),
    v6
  + -2 * *((_DWORD *)this + 41)
  - *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
  - *(_DWORD *)(*((_QWORD *)this + 2) + 16LL)
  - v38,
    v27 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) - *(_DWORD *)(*((_QWORD *)this + 5) + 20LL));
  v39 = *((_QWORD *)this + 13);
  if ( *(_BYTE *)(v39 + 41) )
  {
    v40 = g_pRenderManager;
    *(_BYTE *)(v39 + 41) = 0;
    *((_BYTE *)v40 + 20) = 1;
    *((_BYTE *)v40 + 88) = 1;
  }
  v41 = *((_QWORD *)this + 13);
  v42 = *(_DWORD *)(v41 + 472);
  if ( v42 == -1 )
    v42 = 0;
  v43 = TextRenderer::GetTextWrappedHeight(
          g_pTextRenderer,
          v42,
          *(const unsigned __int16 **)(v41 + 480),
          *(_DWORD *)(v41 + 16),
          &pdwDefaultLayout,
          &v59,
          (struct Str *)(v41 + 496));
  v44 = pdwDefaultLayout;
  v45 = v59;
  *(_DWORD *)(v41 + 1264) = v43;
  v46 = *((_QWORD *)this + 12);
  if ( v46 && *(_DWORD *)(v46 + 20) > v44 )
    v44 = *(_DWORD *)(v46 + 20);
  NodeBase::SetSize(*((NodeBase **)this + 13), v45, v44);
  pdwDefaultLayout = 0;
  GetProcessDefaultLayout(&pdwDefaultLayout);
  if ( (pdwDefaultLayout & 1) != 0 )
  {
    v49 = *(_DWORD *)(*((_QWORD *)this + 2) + 16LL);
  }
  else
  {
    v47 = *((_QWORD *)this + 12);
    if ( v47 )
      v48 = *((_DWORD *)this + 41) + *(_DWORD *)(v47 + 16);
    else
      v48 = 0;
    v49 = v48 + *(_DWORD *)(*((_QWORD *)this + 2) + 16LL);
  }
  NodeBase::SetPosition(
    *((NodeBase **)this + 13),
    *((_DWORD *)this + 41) + v49,
    *(_DWORD *)(*((_QWORD *)this + 11) + 20LL) + *(_DWORD *)(*((_QWORD *)this + 11) + 12LL) + 5);
  if ( *((_QWORD *)this + 12) )
  {
    pdwDefaultLayout = 0;
    GetProcessDefaultLayout(&pdwDefaultLayout);
    v50 = (pdwDefaultLayout & 1) != 0
        ? v6
        - *(_DWORD *)(*((_QWORD *)this + 3) + 16LL)
        - *(_DWORD *)(*((_QWORD *)this + 12) + 16LL)
        - *((_DWORD *)this + 41)
        : *((_DWORD *)this + 41) + *(_DWORD *)(*((_QWORD *)this + 2) + 16LL);
    v51 = (NodeBase *)*((_QWORD *)this + 12);
    v52 = *(_DWORD *)(*((_QWORD *)this + 13) + 20LL);
    v53 = *((_QWORD *)this + 11);
    v54 = *((_DWORD *)v51 + 5) < v52
        ? *(_DWORD *)(v53 + 20) + ((v52 - *((_DWORD *)v51 + 5)) >> 1)
        : *(_DWORD *)(v53 + 20);
    NodeBase::SetPosition(v51, v50, v54 + *(_DWORD *)(v53 + 12) + 5);
    v55 = *((_QWORD *)this + 12);
    if ( *(_BYTE *)(v55 + 41) )
    {
      *(_BYTE *)(v55 + 41) = 0;
      v56 = g_pRenderManager;
      *((_BYTE *)g_pRenderManager + 20) = 1;
      *((_BYTE *)v56 + 88) = 1;
    }
  }
  v57 = (NodeBase *)*((_QWORD *)this + 25);
  if ( v57 )
  {
    NodeBase::MoveToFront(v57);
    NodeBase::MoveToBack(*((NodeBase **)this + 4));
    NodeBase::MoveToBack(*((NodeBase **)this + 5));
  }
  NodeBase::SetSize(*((NodeBase **)this + 16), v6, v27);
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 3) = v27;
}

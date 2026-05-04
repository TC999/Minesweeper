void __fastcall UIBoardCanvas::setCanvasNodeAttributes(__int64 a1, int *a2, int a3)
{
  int v4; // ecx
  int *v6; // r10
  int v7; // r8d
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 v13; // r11
  int v14; // r9d
  NodeBase *v15; // r10
  RenderManager *v16; // rax

  v4 = *(_DWORD *)(a1 + 220);
  v6 = a2;
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 272) * (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 16LL) - v4) / 2;
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
    v9 = (int)v8 / 2;
    v10 = a3 + (v8 >> 1);
    v11 = (float)v7;
    if ( v10 <= v9 )
      v12 = v11 * -0.69999999;
    else
      v12 = v11 * 0.69999999;
    NodeBase::SetPosition((NodeBase *)a2, (int)v12 + v10, a2[3]);
    NodeBase::SetPosition(v15, *((_DWORD *)v15 + 2), v14 + *(_DWORD *)(*(_QWORD *)(v13 + 120) + 20LL));
  }
  v16 = g_pRenderManager;
  *((_BYTE *)v6 + 72) = 0;
  NodeBase::SetMaterial((NodeBase *)v6, *(const struct Material **)(*((_QWORD *)v16 + 7) + 8LL));
}

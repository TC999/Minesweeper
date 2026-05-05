__int64 __fastcall Access_Node::accLocation(
        Access_Node *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        struct tagVARIANT *a6)
{
  NodeBase *v10; // rcx
  __int64 v12; // r11
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // ebx
  unsigned int v16; // edi
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v23[8]; // [rsp+38h] [rbp-20h] BYREF

  if ( a6->vt != 3 || a6->lVal )
    return 2147942487LL;
  v10 = (NodeBase *)*((_QWORD *)this + 2);
  if ( !v10 )
    return 2147500037LL;
  NodeBase::GetLayoutLocation(v10, &v21, (int *)&a6);
  NodeBase::GetLayoutSize(*((NodeBase **)this + 2), v23, &v22);
  v12 = *((_QWORD *)this + 2);
  v13 = v21;
  v14 = (int)a6;
  if ( *(_BYTE *)(v12 + 42) )
  {
    v15 = *(_DWORD *)(v12 + 52);
    v16 = *(_DWORD *)(v12 + 56);
    v13 = *(_DWORD *)(v12 + 44) - *(_DWORD *)(v12 + 8) + v21;
    v14 = *(_DWORD *)(v12 + 48) - *(_DWORD *)(v12 + 12) + (_DWORD)a6;
  }
  else
  {
    v16 = v22;
    v15 = v23[0];
  }
  v17 = v13 + v15;
  v18 = v14 + v16;
  a6 = (struct tagVARIANT *)__PAIR64__(v14, v13);
  UserInterface::LayoutToScreen(g_pUserInterface, v13, v14, (int *)&a6, (int *)&a6 + 1);
  v19 = HIDWORD(a6);
  *a2 = (int)a6;
  *a3 = v19;
  if ( *((_QWORD *)this + 6) )
  {
    UserInterface::LayoutToScreen(g_pUserInterface, v17, v18, (int *)&a6, (int *)&a6 + 1);
    v20 = HIDWORD(a6);
    *a4 = (_DWORD)a6 - *a2;
    *a5 = v20 - *a3;
  }
  else
  {
    *a4 = v17;
    *a5 = v18;
  }
  return 0;
}

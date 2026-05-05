__int64 __fastcall Access_Node::accHitTest(Access_Node *this, unsigned int a2, LONG a3, struct tagVARIANT *a4)
{
  Access_Node *v8; // rcx
  HWND v9; // rcx
  unsigned int StdAccessibleProxyW; // ebx
  const unsigned __int16 *HResult; // rax
  int v12; // ecx
  __int64 v14; // rax
  UserInterface *v15; // rcx
  Access_Node *v16; // rdx
  int v17; // eax
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // r11
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  void **ppvObject; // [rsp+20h] [rbp-E8h]
  unsigned int v27[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B8h] BYREF
  struct tagPOINT Point; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  LONGLONG v33; // [rsp+68h] [rbp-A0h]
  IRecordInfo *v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  LONGLONG v36; // [rsp+88h] [rbp-80h]
  IRecordInfo *v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  LONGLONG v39; // [rsp+A8h] [rbp-60h]
  IRecordInfo *v40; // [rsp+B0h] [rbp-58h]
  struct tagRECT Rect; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+118h] [rbp+10h] BYREF
  int v44; // [rsp+120h] [rbp+18h] BYREF

  if ( *((_DWORD *)g_pUserInterface + 8) )
    v8 = (Access_Node *)**((_QWORD **)g_pUserInterface + 6);
  else
    v8 = 0;
  if ( this == v8 )
    Log(0x800u, 1182, "Access_Node.cpp", L"accHitTest (this: %08x): %d, %d", this, a2, a3);
  Point.x = a2;
  Point.y = a3;
  ScreenToClient(g_hWnd, &Point);
  GetWindowRect(g_hRenderWindow, &Rect);
  if ( a3 > Rect.bottom )
  {
    v9 = g_hWndStatus;
    a4->vt = 9;
    StdAccessibleProxyW = CreateStdAccessibleProxyW(v9, L"msctls_statusbar32", -4, &IID_IAccessible, &a4->byref);
    HResult = GetHResult(StdAccessibleProxyW);
    LODWORD(ppvObject) = v12;
    Log(0x800u, 1199, "Access_Node.cpp", L"CreateStdAccessibleProxy returned %x (%s)", ppvObject, HResult);
    return StdAccessibleProxyW;
  }
  v14 = *(_QWORD *)this;
  v43 = 0;
  (*(void (__fastcall **)(Access_Node *, unsigned int *))(v14 + 64))(this, &v43);
  v15 = g_pUserInterface;
  if ( g_hWndStatus
    && (!*((_DWORD *)g_pUserInterface + 8) ? (v16 = 0) : (v16 = (Access_Node *)**((_QWORD **)g_pUserInterface + 6)),
        this == v16) )
  {
    v17 = --v43;
  }
  else
  {
    v17 = v43;
  }
  v18 = v17 - 1;
  if ( v17 )
  {
    while ( 1 )
    {
      LOWORD(v38) = 3;
      LODWORD(v39) = v18 + 1;
      v35 = v38;
      v36 = v39;
      v37 = v40;
      if ( (*(int (__fastcall **)(Access_Node *, __int64 *, unsigned int *))(*(_QWORD *)this + 72LL))(this, &v35, v27) >= 0 )
      {
        v42 = 0;
        (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))v27)(*(_QWORD *)v27, &IID_IAccessible, &v42);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v27 + 16LL))(*(_QWORD *)v27);
        if ( !v42 )
          SharedDialogs::FatalDialog::Show(0);
        if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v42 + 192LL))(
                v42,
                a2,
                (unsigned int)a3,
                &v32) )
        {
          if ( (_WORD)v32 == 3 )
          {
            v35 = v32;
            v36 = v33;
            v37 = v34;
            (*(void (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v42 + 72LL))(v42, &v35, v27);
            v25 = v42;
            a4->vt = 9;
            a4->llVal = *(_QWORD *)v27;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            *(_QWORD *)&a4->vt = v32;
            a4->llVal = v33;
            a4->pRecInfo = v34;
          }
          return 0;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      if ( --v18 > v43 )
      {
        v15 = g_pUserInterface;
        break;
      }
    }
  }
  v19 = *((_QWORD *)this + 2);
  if ( v19 && *(_BYTE *)(v19 + 41) )
  {
    UserInterface::ScreenToLayout(v15, a2, a3, &v29, &v28);
    NodeBase::GetLayoutLocation(*((NodeBase **)this + 2), (int *)&v42, &v44);
    NodeBase::GetLayoutSize(*((NodeBase **)this + 2), v27, &v30);
    v20 = *((_QWORD *)this + 2);
    v21 = v42;
    v22 = v44;
    if ( *(_BYTE *)(v20 + 42) )
    {
      v23 = *(_DWORD *)(v20 + 52);
      v24 = *(_DWORD *)(v20 + 56);
      v21 = *(_DWORD *)(v20 + 44) - *(_DWORD *)(v20 + 8) + v42;
      v22 = *(_DWORD *)(v20 + 48) - *(_DWORD *)(v20 + 12) + v44;
    }
    else
    {
      v24 = v30;
      v23 = v27[0];
    }
    if ( v29 >= v21 && v29 < (int)(v23 + v21) && v28 >= v22 && v28 < (int)(v24 + v22) )
    {
      a4->vt = 3;
      a4->lVal = 0;
      return 0;
    }
  }
  a4->vt = 0;
  return 1;
}

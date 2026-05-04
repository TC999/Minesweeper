// Hidden C++ exception states: #wind=2
__int64 __fastcall Access_Node::accNavigate(Access_Node *this, int a2, struct tagVARIANT *a3, struct tagVARIANT *a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v11; // rax
  void *v12; // rcx
  int v13; // ecx
  unsigned int v14; // r8d
  Access_Node **i; // rdx
  LONGLONG v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ecx
  Access_Node **j; // rdx
  LONGLONG v20; // rcx
  void *ppvObject; // [rsp+30h] [rbp-A8h] BYREF
  struct IAccessible *paccContainer; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-98h] BYREF
  __int64 v24; // [rsp+48h] [rbp-90h]
  void *Block; // [rsp+50h] [rbp-88h]
  VARIANTARG v26; // [rsp+58h] [rbp-80h]
  VARIANTARG pvarg; // [rsp+70h] [rbp-68h] BYREF
  VARIANTARG v28; // [rsp+90h] [rbp-48h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-28h]
  BSTR bstrString; // [rsp+F0h] [rbp+18h] BYREF

  v29 = -2;
  if ( a3->vt != 3 )
    return 2147942487LL;
  v6 = 0;
  if ( a3->lVal )
    return 2147942487LL;
  v7 = a2 - 5;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          LODWORD(bstrString) = 0;
          (*(void (__fastcall **)(Access_Node *, BSTR *))(*(_QWORD *)this + 64LL))(this, &bstrString);
          if ( (_DWORD)bstrString )
          {
            v26.vt = 3;
            v26.lVal = (int)bstrString;
            a4->vt = 9;
            pvarg = v26;
            (*(void (__fastcall **)(Access_Node *, VARIANTARG *, CY *))(*(_QWORD *)this + 72LL))(
              this,
              &pvarg,
              &a4->cyVal);
            return 0;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          return 2147942487LL;
        }
      }
      else
      {
        LODWORD(bstrString) = 0;
        (*(void (__fastcall **)(Access_Node *, BSTR *))(*(_QWORD *)this + 64LL))(this, &bstrString);
        if ( (_DWORD)bstrString )
        {
          v26.vt = 3;
          v26.lVal = 1;
          a4->vt = 9;
          pvarg = v26;
          (*(void (__fastcall **)(Access_Node *, VARIANTARG *, CY *))(*(_QWORD *)this + 72LL))(this, &pvarg, &a4->cyVal);
          return 0;
        }
        else
        {
          return 1;
        }
      }
    }
    v11 = *((_QWORD *)this + 6);
    if ( !v11 )
    {
      paccContainer = 0;
      ppvObject = 0;
      v23 = 0;
      v24 = 0;
      Block = 0;
      v26.vt = 3;
      v26.lVal = 0;
      VariantInit(&pvarg);
      bstrString = SysAllocString(0);
      if ( !AccessibleObjectFromWindow(g_hWnd, 0, &IID_IAccessible, &ppvObject) )
      {
        v28 = v26;
        (*(void (__fastcall **)(Access_Node *, VARIANTARG *, VARIANTARG *))(*(_QWORD *)this + 104LL))(
          this,
          &v28,
          &pvarg);
        v28 = v26;
        if ( (*(unsigned int (__fastcall **)(Access_Node *, VARIANTARG *, BSTR *))(*(_QWORD *)this + 96LL))(
               this,
               &v28,
               &bstrString) )
        {
          Str::operator=(&v23, &String);
        }
        else
        {
          Str::operator=(&v23, bstrString);
        }
        FindSibling((IAccessible *)ppvObject, &pvarg, (struct Str *)&v23, 1, &paccContainer);
        v12 = paccContainer;
        if ( paccContainer )
        {
LABEL_20:
          a4->vt = 9;
          a4->llVal = (LONGLONG)v12;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
          SysFreeString(bstrString);
LABEL_22:
          operator delete(Block);
          return v6;
        }
      }
LABEL_21:
      SysFreeString(bstrString);
      v6 = 1;
      goto LABEL_22;
    }
    v13 = 0;
    v14 = *(_DWORD *)(v11 + 24);
    if ( v14 )
    {
      for ( i = *(Access_Node ***)(v11 + 40); *i != this; ++i )
      {
        if ( ++v13 >= v14 )
          return 1;
      }
      if ( v13 )
      {
        a4->vt = 9;
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 40LL) + 8LL * (unsigned int)(v13 - 1));
        a4->llVal = v16;
        (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v16 + 8LL))(v16);
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v17 = *((_QWORD *)this + 6);
    if ( !v17 )
    {
      ppvObject = 0;
      paccContainer = 0;
      v23 = 0;
      v24 = 0;
      Block = 0;
      v26.vt = 3;
      v26.lVal = 0;
      VariantInit(&pvarg);
      bstrString = SysAllocString(0);
      if ( !AccessibleObjectFromWindow(g_hWnd, 0, &IID_IAccessible, (void **)&paccContainer) )
      {
        v28 = v26;
        (*(void (__fastcall **)(Access_Node *, VARIANTARG *, VARIANTARG *))(*(_QWORD *)this + 104LL))(
          this,
          &v28,
          &pvarg);
        v28 = v26;
        if ( (*(unsigned int (__fastcall **)(Access_Node *, VARIANTARG *, BSTR *))(*(_QWORD *)this + 96LL))(
               this,
               &v28,
               &bstrString) )
        {
          Str::operator=(&v23, &String);
        }
        else
        {
          Str::operator=(&v23, bstrString);
        }
        FindSibling(paccContainer, &pvarg, (struct Str *)&v23, 0, (struct IAccessible **)&ppvObject);
        v12 = ppvObject;
        if ( ppvObject )
          goto LABEL_20;
      }
      goto LABEL_21;
    }
    v18 = *(_DWORD *)(v17 + 24);
    if ( v18 )
    {
      for ( j = *(Access_Node ***)(v17 + 40); *j != this; ++j )
      {
        if ( ++v6 >= v18 )
          return 1;
      }
      if ( v6 == v18 - 1 )
      {
        return 1;
      }
      else
      {
        a4->vt = 9;
        v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 40LL) + 8LL * (v6 + 1));
        a4->llVal = v20;
        (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v20 + 8LL))(v20);
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
}

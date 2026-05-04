// Hidden C++ exception states: #wind=2
__int64 __fastcall FindSibling(
        IAccessible *paccContainer,
        struct tagVARIANT *a2,
        struct Str *a3,
        int a4,
        struct IAccessible **a5)
{
  unsigned int v6; // esi
  struct IAccessible *v7; // r15
  void *v8; // rbp
  LONG v9; // ebx
  __int64 v10; // rax
  bool v11; // cf
  size_t v12; // rax
  LONG *v13; // rax
  VARIANT *v14; // rdi
  LONG v16; // r12d
  VARIANT *v17; // rbx
  struct IAccessible **v18; // r14
  int v19; // edi
  void (__fastcall ***llVal)(_QWORD, GUID *, _QWORD *); // rcx
  struct IAccessible *v21; // r10
  bool v22; // al
  LONG pcObtained; // [rsp+30h] [rbp-138h] BYREF
  struct IAccessible *v24; // [rsp+38h] [rbp-130h] BYREF
  void (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-128h] BYREF
  BSTR bstrString[2]; // [rsp+48h] [rbp-120h] BYREF
  VARIANT *v27; // [rsp+58h] [rbp-110h]
  _QWORD v28[2]; // [rsp+60h] [rbp-108h] BYREF
  void *v29; // [rsp+70h] [rbp-F8h]
  VARIANTARG pvarg; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+90h] [rbp-D8h]
  __int64 v32; // [rsp+98h] [rbp-D0h]
  __int64 v33; // [rsp+A0h] [rbp-C8h]
  __int64 v34; // [rsp+A8h] [rbp-C0h]
  VARIANT *v35; // [rsp+B0h] [rbp-B8h]
  _QWORD v36[4]; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v37[4]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v38[13]; // [rsp+100h] [rbp-68h] BYREF
  LONG cChildren; // [rsp+170h] [rbp+8h] BYREF
  struct tagVARIANT *v40; // [rsp+178h] [rbp+10h]
  struct Str *v41; // [rsp+180h] [rbp+18h]
  int v42; // [rsp+188h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v34 = -2;
  v6 = 0;
  v24 = 0;
  v7 = 0;
  v25 = 0;
  cChildren = 0;
  pcObtained = 0;
  v28[0] = 0;
  v28[1] = 0;
  v8 = 0;
  v29 = 0;
  ((void (__fastcall *)(IAccessible *, LONG *))paccContainer->lpVtbl->get_accChildCount)(paccContainer, &cChildren);
  v9 = cChildren;
  v10 = 24LL * cChildren;
  if ( !is_mul_ok(cChildren, 0x18u) )
    v10 = -1;
  v11 = __CFADD__(v10, 8);
  v12 = v10 + 8;
  if ( v11 )
    v12 = -1;
  v13 = (LONG *)operator new[](v12);
  if ( v13 )
  {
    *v13 = v9;
    v14 = (VARIANT *)(v13 + 2);
    v27 = (VARIANT *)(v13 + 2);
    `eh vector constructor iterator'(
      v13 + 2,
      0x18u,
      v9,
      (void (*)(void *))ATL::CComVariant::CComVariant,
      (void (*)(void *))ATL::CComVariant::~CComVariant);
  }
  else
  {
    v14 = 0;
    v27 = 0;
  }
  v35 = v14;
  if ( AccessibleChildren(paccContainer, 0, cChildren, v14, &pcObtained) )
  {
    if ( v14 )
    {
      `eh vector destructor iterator'(
        v14,
        0x18u,
        *((_DWORD *)&v14[-1].decVal + 4),
        (void (*)(void *))ATL::CComVariant::~CComVariant);
      operator delete(&v14[-1].decVal + 1);
    }
    operator delete(0);
    return 0;
  }
  else
  {
    v16 = 0;
    if ( pcObtained >= 0 )
    {
      v17 = v14;
      v18 = a5;
      v19 = 0;
      do
      {
        if ( v6 )
          break;
        v25 = 0;
        v24 = 0;
        if ( v17->vt == 3 )
        {
          v36[0] = *(_QWORD *)&v17->vt;
          v36[1] = v17->llVal;
          v36[2] = v17->pRecInfo;
          ((void (__fastcall *)(IAccessible *, _QWORD *, _QWORD))paccContainer->lpVtbl->get_accChild)(
            paccContainer,
            v36,
            &v25);
          llVal = v25;
        }
        else
        {
          llVal = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))v17->llVal;
          v25 = llVal;
        }
        if ( llVal )
        {
          (**llVal)(llVal, &IID_IAccessible, &v24);
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
        }
        LOWORD(v31) = 3;
        LODWORD(v32) = 0;
        bstrString[0] = SysAllocString(0);
        if ( v24 )
        {
          VariantInit(&pvarg);
          v37[0] = v31;
          v37[1] = v32;
          v37[2] = v33;
          ((void (__fastcall *)(struct IAccessible *, _QWORD *, VARIANTARG *))v24->lpVtbl->get_accRole)(
            v24,
            v37,
            &pvarg);
          v38[0] = v31;
          v38[1] = v32;
          v38[2] = v33;
          if ( ((unsigned int (__fastcall *)(struct IAccessible *, _QWORD *, BSTR *))v24->lpVtbl->get_accDescription)(
                 v24,
                 v38,
                 bstrString) )
          {
            Str::operator=(v28, &String);
          }
          else
          {
            Str::operator=(v28, bstrString[0]);
          }
          v21 = v24;
          v8 = v29;
          if ( pvarg.vt == v40->vt
            && pvarg.lVal == v40->lVal
            && (!v29 ? (v22 = 0) : (v22 = Str::Equals((Str *)v28, v41)), v22) )
          {
            if ( v42 == 1 )
            {
              *v18 = v7;
              v6 = 1;
            }
            else
            {
              v19 = 1;
            }
          }
          else if ( v19 == 1 )
          {
            *v18 = v21;
            v6 = 1;
          }
          v7 = v21;
          SysFreeString(bstrString[0]);
        }
        ++v16;
        ++v17;
      }
      while ( v16 <= pcObtained );
      v14 = v27;
    }
    if ( v14 )
    {
      `eh vector destructor iterator'(
        v14,
        0x18u,
        *((_DWORD *)&v14[-1].decVal + 4),
        (void (*)(void *))ATL::CComVariant::~CComVariant);
      operator delete(&v14[-1].decVal + 1);
    }
    operator delete(v8);
    return v6;
  }
}

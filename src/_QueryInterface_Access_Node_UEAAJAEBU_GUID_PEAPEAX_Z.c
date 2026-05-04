__int64 __fastcall Access_Node::QueryInterface(Access_Node *this, const struct _GUID *a2, void **a3)
{
  bool v4; // cf
  int v5; // eax
  bool v6; // cf
  int v7; // eax
  bool v8; // cf
  int v9; // eax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&IID_IAccessible.Data1 < *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAccessible.Data1 == *(_QWORD *)&a2->Data1
    && (v4 = *(_QWORD *)IID_IAccessible.Data4 < *(_QWORD *)a2->Data4,
        *(_QWORD *)IID_IAccessible.Data4 == *(_QWORD *)a2->Data4) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -v4 - (v4 - 1);
  }
  if ( v5
    && ((v6 = *(_QWORD *)&IID_IUnknown.Data1 < *(_QWORD *)&a2->Data1,
         *(_QWORD *)&IID_IUnknown.Data1 != *(_QWORD *)&a2->Data1)
     || (v6 = *(_QWORD *)IID_IUnknown.Data4 < *(_QWORD *)a2->Data4, *(_QWORD *)IID_IUnknown.Data4 != *(_QWORD *)a2->Data4)
      ? (v7 = -v6 - (v6 - 1))
      : (v7 = 0),
        v7
     && ((v8 = *(_QWORD *)&IID_IDispatch.Data1 < *(_QWORD *)&a2->Data1,
          *(_QWORD *)&IID_IDispatch.Data1 != *(_QWORD *)&a2->Data1)
      || (v8 = *(_QWORD *)IID_IDispatch.Data4 < *(_QWORD *)a2->Data4,
          *(_QWORD *)IID_IDispatch.Data4 != *(_QWORD *)a2->Data4)
       ? (v9 = -v8 - (v8 - 1))
       : (v9 = 0),
         v9)) )
  {
    *a3 = 0;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(Access_Node *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
}

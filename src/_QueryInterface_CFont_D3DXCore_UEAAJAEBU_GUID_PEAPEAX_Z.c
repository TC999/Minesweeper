__int64 __fastcall D3DXCore::CFont::QueryInterface(D3DXCore::CFont *this, const struct _GUID *a2, void **a3)
{
  bool v3; // cf
  unsigned __int64 v4; // r10
  int v5; // eax
  bool v6; // cf
  unsigned __int64 v7; // r9
  int v8; // eax

  v3 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_ID3DXFont.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ID3DXFont.Data1
    && (v4 = *(_QWORD *)a2->Data4, v3 = v4 < *(_QWORD *)IID_ID3DXFont.Data4, v4 == *(_QWORD *)IID_ID3DXFont.Data4) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -v3 - (v3 - 1);
  }
  if ( v5
    && ((v6 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_IUnknown.Data1,
         *(_QWORD *)&a2->Data1 != *(_QWORD *)&IID_IUnknown.Data1)
     || (v7 = *(_QWORD *)a2->Data4, v6 = v7 < *(_QWORD *)IID_IUnknown.Data4, v7 != *(_QWORD *)IID_IUnknown.Data4)
      ? (v8 = -v6 - (v6 - 1))
      : (v8 = 0),
        v8) )
  {
    *a3 = 0;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(D3DXCore::CFont *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
}

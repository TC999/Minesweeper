__int64 __fastcall D3DXCore::CBuffer::QueryInterface(D3DXCore::CBuffer *this, const struct _GUID *a2, void **a3)
{
  void **v3; // r9
  bool v4; // cf
  unsigned __int64 v5; // r10
  int v6; // eax
  bool v7; // cf
  int v8; // eax

  *a3 = 0;
  v3 = a3;
  v4 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_IUnknown.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IUnknown.Data1
    && (v5 = *(_QWORD *)a2->Data4, v4 = v5 < *(_QWORD *)IID_IUnknown.Data4, v5 == *(_QWORD *)IID_IUnknown.Data4) )
  {
    v6 = 0;
  }
  else
  {
    v6 = -v4 - (v4 - 1);
  }
  if ( !v6 )
  {
    *a3 = this;
LABEL_13:
    (*(void (__fastcall **)(D3DXCore::CBuffer *, const struct _GUID *, void **, void **))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      v3);
    return 0;
  }
  a3 = *(void ***)&a2->Data1;
  v7 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_ID3DXBuffer.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ID3DXBuffer.Data1
    && (a3 = *(void ***)a2->Data4,
        v7 = (unsigned __int64)a3 < *(_QWORD *)IID_ID3DXBuffer.Data4,
        a3 == *(void ***)IID_ID3DXBuffer.Data4) )
  {
    v8 = 0;
  }
  else
  {
    v8 = -v7 - (v7 - 1);
  }
  if ( !v8 )
  {
    *v3 = this;
    goto LABEL_13;
  }
  return 2147500034LL;
}

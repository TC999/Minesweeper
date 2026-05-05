__int64 __fastcall FileMgrStream::QueryInterface(FileMgrStream *this, const struct _GUID *a2, void **a3)
{
  bool v4; // cf
  unsigned __int64 v5; // r10
  int v6; // eax
  bool v7; // cf
  unsigned __int64 v8; // r9
  int v9; // eax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_IStream.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IStream.Data1
    && (v5 = *(_QWORD *)a2->Data4, v4 = v5 < *(_QWORD *)IID_IStream.Data4, v5 == *(_QWORD *)IID_IStream.Data4) )
  {
    v6 = 0;
  }
  else
  {
    v6 = -v4 - (v4 - 1);
  }
  if ( v6
    && ((v7 = *(_QWORD *)&a2->Data1 < *(_QWORD *)&IID_IUnknown.Data1,
         *(_QWORD *)&a2->Data1 != *(_QWORD *)&IID_IUnknown.Data1)
     || (v8 = *(_QWORD *)a2->Data4, v7 = v8 < *(_QWORD *)IID_IUnknown.Data4, v8 != *(_QWORD *)IID_IUnknown.Data4)
      ? (v9 = -v7 - (v7 - 1))
      : (v9 = 0),
        v9) )
  {
    *a3 = 0;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(FileMgrStream *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
}

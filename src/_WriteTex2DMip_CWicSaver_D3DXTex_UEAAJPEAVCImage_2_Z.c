__int64 __fastcall D3DXTex::CWicSaver::WriteTex2DMip(D3DXTex::CWicSaver *this, struct D3DXTex::CImage *a2)
{
  int v2; // ebx
  _BYTE *v3; // r12
  bool v6; // cf
  int v7; // eax
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 v10; // rcx
  int v11; // eax
  bool v12; // cf
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebp
  int v16; // esi
  unsigned int v17; // r8d
  char *v18; // rdx
  _BYTE *i; // rcx
  char v20; // al
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __m128i v23; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  v22 = 0;
  if ( *((_BYTE *)this + 40) )
    goto LABEL_36;
  *((_BYTE *)this + 40) = 1;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 1) + 80LL))(
         *((_QWORD *)this + 1),
         &v22,
         0);
  if ( v2 < 0 )
    goto LABEL_36;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 24LL))(v22, 0);
  if ( v2 < 0 )
    goto LABEL_36;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 32LL))(
         v22,
         *((unsigned int *)a2 + 6),
         *((unsigned int *)a2 + 7));
  if ( v2 < 0 )
    goto LABEL_36;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
  if ( v2 < 0 )
    goto LABEL_36;
  v23 = _mm_loadu_si128((const __m128i *)((char *)this + 24));
  v2 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v22 + 48LL))(v22, &v23);
  if ( v2 < 0 )
    goto LABEL_36;
  v6 = v23.m128i_i64[0] < *((_QWORD *)this + 3);
  if ( v23.m128i_i64[0] == *((_QWORD *)this + 3)
    && (v6 = v23.m128i_i64[1] < *((_QWORD *)this + 4), v23.m128i_i64[1] == *((_QWORD *)this + 4)) )
  {
    v7 = 0;
  }
  else
  {
    v7 = -v6 - (v6 - 1);
  }
  if ( !v7 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v22 + 80LL))(
           v22,
           *((unsigned int *)a2 + 7),
           *((unsigned int *)a2 + 15),
           (unsigned int)(*((_DWORD *)a2 + 15) * *((_DWORD *)a2 + 7)),
           *((_QWORD *)a2 + 1));
    if ( v2 < 0 )
      goto LABEL_36;
    goto LABEL_35;
  }
  v8 = *((_QWORD *)this + 3);
  v9 = v8 < *(_QWORD *)&GUID_WICPixelFormat32bppBGR.Data1;
  if ( v8 == *(_QWORD *)&GUID_WICPixelFormat32bppBGR.Data1
    && (v10 = *((_QWORD *)this + 4),
        v9 = v10 < *(_QWORD *)GUID_WICPixelFormat32bppBGR.Data4,
        v10 == *(_QWORD *)GUID_WICPixelFormat32bppBGR.Data4) )
  {
    v11 = 0;
  }
  else
  {
    v11 = -v9 - (v9 - 1);
  }
  if ( v11
    || ((v12 = v23.m128i_i64[0] < *(_QWORD *)&GUID_WICPixelFormat24bppBGR.Data1,
         v23.m128i_i64[0] != *(_QWORD *)&GUID_WICPixelFormat24bppBGR.Data1)
     || (v12 = v23.m128i_i64[1] < *(_QWORD *)GUID_WICPixelFormat24bppBGR.Data4,
         v23.m128i_i64[1] != *(_QWORD *)GUID_WICPixelFormat24bppBGR.Data4)
      ? (v13 = -v12 - (v12 - 1))
      : (v13 = 0),
        v13 || (*((_BYTE *)a2 + 60) & 3) != 0 || !*((_DWORD *)a2 + 15) || (v14 = *((_DWORD *)a2 + 6), v14 > 0x55555555)) )
  {
    v2 = -2147467259;
    goto LABEL_36;
  }
  v15 = 3 * v14;
  v3 = operator new(3 * v14, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v3 )
  {
    v2 = -2147024882;
    goto LABEL_36;
  }
  v16 = 0;
  if ( !*((_DWORD *)a2 + 7) )
  {
LABEL_35:
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 96LL))(v22);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v17 = 0;
    v18 = (char *)(*((_QWORD *)a2 + 1) + 4LL * (unsigned int)(v16 * (*((_DWORD *)a2 + 15) >> 2)));
    for ( i = v3; v17 < *((_DWORD *)a2 + 6); *(i - 1) = *(v18 - 2) )
    {
      v20 = *v18;
      ++v17;
      v18 += 4;
      *i = v20;
      i += 3;
      *(i - 2) = *(v18 - 3);
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v22 + 80LL))(
           v22,
           1,
           v15,
           v15,
           v3);
    if ( v2 < 0 )
      break;
    if ( (unsigned int)++v16 >= *((_DWORD *)a2 + 7) )
      goto LABEL_35;
  }
LABEL_36:
  operator delete(v3);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v2;
}

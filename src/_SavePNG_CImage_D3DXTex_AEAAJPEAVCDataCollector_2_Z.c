__int64 __fastcall D3DXTex::CImage::SavePNG(D3DXTex::CImage *this, struct D3DXTex::CDataCollector *a2)
{
  int v3; // eax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  unsigned int v9; // esi
  char *v10; // rbp
  unsigned int v12; // [rsp+20h] [rbp-C8h] BYREF
  char v13[8]; // [rsp+28h] [rbp-C0h] BYREF
  void **v14; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-B0h]
  GUID *v16; // [rsp+40h] [rbp-A8h]
  __m128i v17; // [rsp+48h] [rbp-A0h]
  char v18; // [rsp+58h] [rbp-90h]
  __int64 v19; // [rsp+60h] [rbp-88h]
  char v20[16]; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v21[16]; // [rsp+80h] [rbp-68h]

  v15 = 0;
  v19 = 0;
  v14 = &D3DXTex::CWicSaver::`vftable';
  v16 = &GUID_ContainerFormatPng;
  v3 = dword_1000A7C40[0];
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v18 = 0;
  if ( dword_1000A7C40[0] )
  {
    while ( v3 != *(_DWORD *)this )
    {
      ++v7;
      v6 = (unsigned int)(v6 + 1);
      v3 = dword_1000A7C40[5 * v7];
      if ( !v3 )
        goto LABEL_4;
    }
    v8 = _mm_loadu_si128((const __m128i *)&dword_1000A7C40[5 * v6 + 1]);
  }
  else
  {
LABEL_4:
    v8 = _mm_loadu_si128((const __m128i *)&GUID_WICPixelFormat32bppBGRA);
    v5 = -2147467259;
  }
  v17 = v8;
  if ( v5 >= 0 )
  {
    v5 = D3DXTex::CWicSaver::WriteHeader((LPSTREAM *)&v14);
    if ( v5 >= 0 )
    {
      v5 = D3DXTex::CWicSaver::WriteTex2DMip((D3DXTex::CWicSaver *)&v14, this);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v19 + 96LL))(v19, v20, 1);
          if ( v5 >= 0 )
          {
            v9 = v21[0];
            v10 = (char *)operator new(v21[0], (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
            if ( v10 )
            {
              v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v19 + 40LL))(v19, 0, 0, v13);
              if ( v5 >= 0 )
              {
                v5 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, unsigned int *))(*(_QWORD *)v19 + 24LL))(
                       v19,
                       v10,
                       v9,
                       &v12);
                if ( v5 >= 0 )
                {
                  if ( v9 == v12 )
                    v5 = D3DXTex::CDataCollector::WriteData(a2, v10, v9, &v12);
                  else
                    v5 = -2147467259;
                }
              }
            }
            else
            {
              v5 = -2147024882;
            }
          }
        }
      }
    }
  }
  D3DXTex::CWicSaver::~CWicSaver((D3DXTex::CWicSaver *)&v14);
  return (unsigned int)v5;
}

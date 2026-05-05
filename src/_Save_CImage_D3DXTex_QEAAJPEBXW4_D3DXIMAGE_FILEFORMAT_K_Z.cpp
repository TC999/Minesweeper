__int64 __fastcall D3DXTex::CImage::Save(
        const enum _D3DFORMAT **a1,
        struct D3DXCore::CBuffer **a2,
        __int64 a3,
        const struct _D3DXFORMAT_INFO *a4)
{
  int v4; // ebx
  __int64 *v5; // rdi
  const struct tagPALETTEENTRY *v8; // r8
  const struct tagPALETTEENTRY *v9; // rsi
  int ClosestFormat; // eax
  int v11; // r12d
  int v12; // ebx
  const enum _D3DFORMAT **v13; // rbp
  int v14; // r15d
  const enum _D3DFORMAT **v15; // rsi
  void *v16; // rbx
  int v17; // ecx
  const enum _D3DFORMAT *v18; // rdi
  int v19; // eax
  enum _D3DFORMAT *v20; // rcx
  int v21; // eax
  struct D3DXCore::CBuffer *v22; // rax
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rax
  char *v26; // rax
  char *v27; // rbp
  struct D3DXCore::CBuffer *v28; // rsi
  size_t v29; // rbx
  const void *v30; // rdi
  void *v31; // rax
  _QWORD v33[3]; // [rsp+30h] [rbp-148h] BYREF
  int v34; // [rsp+48h] [rbp-130h]
  int v35; // [rsp+50h] [rbp-128h]
  struct D3DXCore::CBuffer *v36; // [rsp+58h] [rbp-120h]
  void *Block; // [rsp+60h] [rbp-118h]
  int v38; // [rsp+68h] [rbp-110h]
  unsigned int Size[3]; // [rsp+6Ch] [rbp-10Ch]
  __int64 v40; // [rsp+78h] [rbp-100h] BYREF
  __int64 v41; // [rsp+80h] [rbp-F8h]
  int v42; // [rsp+88h] [rbp-F0h]
  void *v43; // [rsp+90h] [rbp-E8h] BYREF
  int v44; // [rsp+98h] [rbp-E0h]
  int v45; // [rsp+9Ch] [rbp-DCh]
  int v46; // [rsp+A0h] [rbp-D8h]
  _DWORD Src[6]; // [rsp+A4h] [rbp-D4h] BYREF
  _BYTE v48[24]; // [rsp+BCh] [rbp-BCh] BYREF
  int v49; // [rsp+D4h] [rbp-A4h]
  int v50; // [rsp+E0h] [rbp-98h]
  const enum _D3DFORMAT *v51; // [rsp+E8h] [rbp-90h]
  const enum _D3DFORMAT *v52; // [rsp+F0h] [rbp-88h] BYREF
  int v53; // [rsp+F8h] [rbp-80h]
  int v54; // [rsp+FCh] [rbp-7Ch]
  int v55; // [rsp+100h] [rbp-78h]
  _BYTE v56[24]; // [rsp+104h] [rbp-74h] BYREF
  _BYTE v57[24]; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v58; // [rsp+134h] [rbp-44h]
  int v59; // [rsp+140h] [rbp-38h]
  const enum _D3DFORMAT *v60; // [rsp+148h] [rbp-30h]

  v4 = *(_DWORD *)a1;
  v5 = qword_100013C50;
  v33[0] = -1;
  v33[1] = -1;
  v33[2] = 0;
  v8 = (const struct tagPALETTEENTRY *)qword_100013C50;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  Size[0] = 0;
  Block = 0;
  v38 = 0;
  while ( 1 )
  {
    v9 = &stru_100010478;
    if ( v4 == *v8 )
      break;
    v8 += 9;
    if ( v8 >= (const struct tagPALETTEENTRY *)&dword_100014454 )
    {
      v8 = &stru_100010478;
      break;
    }
  }
  ClosestFormat = D3DXTex::FindClosestFormat((D3DXTex *)&unk_1000A5DA0, a1[2], v8, a4);
  v11 = ClosestFormat;
  if ( ClosestFormat )
  {
    if ( ClosestFormat == v4 )
    {
LABEL_27:
      v12 = D3DXCore::CBuffer::Create(0x400u, a2);
      if ( v12 >= 0 )
      {
        v22 = *a2;
        v35 = 2;
        v12 = 0;
        v36 = v22;
      }
      if ( v12 < 0 )
        goto LABEL_30;
      v25 = setlocale(4, 0);
      v26 = strdup(v25);
      v27 = v26;
      if ( !v26 || strcmp(v26, "C") )
        setlocale(4, "C");
      D3DXTex::CImage::SavePNG((D3DXTex::CImage *)a1, (struct D3DXTex::CDataCollector *)v33);
      v12 = D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
      if ( v27 )
      {
        if ( strcmp(v27, "C") )
          setlocale(4, v27);
        free(v27);
      }
      if ( v12 < 0 || (v12 = D3DXCore::CBuffer::Create(Size[0], a2), v12 < 0) )
      {
LABEL_30:
        D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
        if ( v36 )
          (*(void (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
        v23 = Block;
        v24 = Block == 0;
LABEL_36:
        if ( !v24 )
          operator delete(v23);
      }
      else
      {
        v28 = *a2;
        v29 = Size[0];
        v30 = (const void *)(*(__int64 (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 24LL))(v36);
        v31 = (void *)(*(__int64 (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v28 + 24LL))(v28);
        memcpy(v31, v30, v29);
        D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
        if ( v36 )
          (*(void (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
        if ( Block )
          operator delete(Block);
        v12 = 0;
      }
    }
    else
    {
      v41 = 0;
      v40 = 0;
      while ( ClosestFormat != *(_DWORD *)v5 )
      {
        v5 = (__int64 *)((char *)v5 + 36);
        if ( v5 >= (__int64 *)&dword_100014454 )
          goto LABEL_17;
      }
      v9 = (const struct tagPALETTEENTRY *)v5;
LABEL_17:
      v13 = a1;
      v14 = *(_DWORD *)&v9[2] >> 3;
      while ( 1 )
      {
        v15 = v13;
        if ( v13 )
          break;
LABEL_25:
        v13 = (const enum _D3DFORMAT **)v13[12];
        if ( !v13 )
        {
          D3DXTex::CBlt::~CBlt((D3DXTex::CBlt *)&v40);
          goto LABEL_27;
        }
      }
      while ( 1 )
      {
        v16 = operator new(
                (unsigned int)(*((_DWORD *)v15 + 8) * v14 * *((_DWORD *)v15 + 7) * *((_DWORD *)v15 + 6)),
                (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        *(_QWORD *)&Size[1] = v16;
        if ( !v16 )
          break;
        v52 = v15[1];
        v53 = *(_DWORD *)v15;
        v54 = *((_DWORD *)v15 + 15);
        v55 = *((_DWORD *)v15 + 16);
        memcpy(v56, (char *)v15 + 36, sizeof(v56));
        memcpy(v57, (char *)v15 + 36, sizeof(v57));
        v17 = *((_DWORD *)v15 + 7);
        v18 = v15[2];
        Src[2] = *((_DWORD *)v15 + 6);
        Src[3] = v17;
        v59 = 0;
        v45 = v14 * Src[2];
        Src[0] = 0;
        Src[1] = 0;
        Src[4] = 0;
        v46 = v14 * v17 * Src[2];
        v19 = *((_DWORD *)v15 + 8);
        v58 = 1;
        v60 = v18;
        Src[5] = v19;
        v43 = v16;
        v44 = v11;
        memcpy(v48, Src, sizeof(v48));
        v50 = 0;
        v41 = 0;
        v40 = 0;
        v51 = v18;
        v49 = 1;
        v42 = 524289;
        v12 = D3DXTex::CBlt::Blt((D3DXTex::CBlt *)&v40, (struct D3DX_BLT *)&v43, (struct D3DX_BLT *)&v52, 0x80001u);
        if ( v12 < 0 )
        {
          operator delete(*(void **)&Size[1]);
          D3DXTex::CBlt::~CBlt((D3DXTex::CBlt *)&v40);
          D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
          if ( v36 )
            (*(void (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
          v23 = Block;
          v24 = Block == 0;
          goto LABEL_36;
        }
        v20 = (enum _D3DFORMAT *)v15[1];
        if ( v20 && *((_DWORD *)v15 + 17) )
        {
          operator delete(v20);
          v15[1] = 0;
        }
        v15[1] = *(const enum _D3DFORMAT **)&Size[1];
        *(_DWORD *)v15 = v11;
        memcpy((char *)v15 + 36, v48, 0x18u);
        v21 = v46;
        *((_DWORD *)v15 + 15) = v45;
        *((_DWORD *)v15 + 16) = v21;
        *((_DWORD *)v15 + 17) = 1;
        v15 = (const enum _D3DFORMAT **)v15[11];
        if ( !v15 )
          goto LABEL_25;
      }
      D3DXTex::CBlt::~CBlt((D3DXTex::CBlt *)&v40);
      D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
      if ( v36 )
        (*(void (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
      if ( Block )
        operator delete(Block);
      v12 = -2147024882;
    }
  }
  else
  {
    D3DXTex::CDataCollector::Flush((D3DXTex::CDataCollector *)v33);
    if ( v36 )
      (*(void (__fastcall **)(struct D3DXCore::CBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
    if ( Block )
      operator delete(Block);
    v12 = -2005530516;
  }
  D3DXCore::CFile::~CFile((D3DXCore::CFile *)v33);
  return (unsigned int)v12;
}

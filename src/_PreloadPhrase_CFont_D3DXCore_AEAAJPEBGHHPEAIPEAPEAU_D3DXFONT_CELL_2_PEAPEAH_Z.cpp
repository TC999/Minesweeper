__int64 __fastcall D3DXCore::CFont::PreloadPhrase(
        D3DXCore::CFont *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        unsigned int *a5,
        struct D3DXCore::_D3DXFONT_CELL **a6,
        int **a7)
{
  const unsigned __int16 *v9; // rbp
  const unsigned __int16 *v11; // rdi
  struct D3DXCore::_D3DXFONT_CELL *v12; // r14
  int *v13; // r12
  char *v14; // rsi
  const unsigned __int16 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r11
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  DWORD v23; // r9d
  HRESULT v24; // edi
  const SIZE *v25; // rax
  signed int v26; // edi
  int cx; // r13d
  bool v28; // cc
  HBITMAP v29; // rax
  HDC v30; // rcx
  HGDIOBJ v31; // rax
  unsigned int v32; // ebp
  int i; // edi
  int v34; // r8d
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  size_t v38; // rax
  size_t v39; // rax
  int *v40; // rdi
  int v41; // ebp
  __int64 v42; // r15
  int v43; // ecx
  int v44; // eax
  signed int v45; // r13d
  struct D3DXCore::_D3DXFONT_TEXTURE *v46; // r8
  unsigned int v47; // r9d
  unsigned int v48; // edx
  int v49; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v50; // [rsp+74h] [rbp-74h]
  unsigned int v51; // [rsp+78h] [rbp-70h]
  signed int v52; // [rsp+7Ch] [rbp-6Ch]
  SCRIPT_STRING_ANALYSIS v53; // [rsp+80h] [rbp-68h] BYREF
  struct tagSIZE v54; // [rsp+88h] [rbp-60h] BYREF
  int *v55; // [rsp+90h] [rbp-58h]
  struct tagRGBQUAD *v56; // [rsp+98h] [rbp-50h] BYREF
  int v57; // [rsp+F0h] [rbp+8h] BYREF
  int v58; // [rsp+F8h] [rbp+10h] BYREF
  int v59; // [rsp+100h] [rbp+18h]
  int v60; // [rsp+108h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v9 = &a2[a3];
  v11 = a2;
  v53 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (char *)this + 2248;
  if ( a2 < v9 )
  {
    while ( 1 )
    {
      v15 = *(const unsigned __int16 **)v14;
      if ( !*(_QWORD *)v14 )
        break;
      if ( *v11 == *v15 )
      {
        if ( ++v11 >= v9 )
          goto LABEL_15;
        v14 = (char *)(v15 + 4);
      }
      else
      {
        if ( *v11 >= *v15 )
          break;
        v14 = (char *)(v15 + 8);
      }
    }
    if ( v11 < v9 )
    {
      while ( 1 )
      {
        v16 = operator new(0x30u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        v17 = v16;
        if ( v16 )
        {
          v16[1] = 0;
          v16[2] = 0;
          v16[4] = 0;
          v16[5] = 0;
        }
        else
        {
          v17 = 0;
        }
        if ( !v17 )
          goto LABEL_73;
        v18 = *v11++;
        *(_WORD *)v17 = v18;
        v19 = *(_QWORD *)v14;
        *((_DWORD *)v17 + 6) = -1;
        v17[2] = v19;
        v17[1] = 0;
        *(_QWORD *)v14 = v17;
        if ( v11 >= v9 )
          break;
        v14 = (char *)(v17 + 1);
      }
    }
  }
LABEL_15:
  v20 = *(_QWORD *)v14;
  v21 = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
  if ( v21 != -1 )
  {
    *a5 = v21;
    *a6 = *(struct D3DXCore::_D3DXFONT_CELL **)(v20 + 32);
    *a7 = *(int **)(v20 + 40);
    return 0;
  }
  if ( !D3DXCore::g_bUnicodeAPI )
  {
    MoveToEx(*((HDC *)this + 5), 0, 0, 0);
    SetTextAlign(*((HDC *)this + 5), 0);
  }
  v23 = 4256;
  if ( v60 )
    v23 = 4512;
  v24 = ScriptStringAnalyse(
          *((HDC *)this + 5),
          a2,
          a3,
          3 * a3 / 2 + 16,
          -1,
          v23,
          0,
          (SCRIPT_CONTROL *)this + 47,
          (SCRIPT_STATE *)this + 92,
          0,
          0,
          0,
          &v53);
  if ( v24 < 0 )
    goto LABEL_75;
  v25 = ScriptString_pSize(v53);
  v26 = *((_DWORD *)this + 21);
  cx = v25->cx;
  v54.cy = v26;
  v28 = cx <= *((_DWORD *)this + 20);
  v54.cx = cx;
  if ( !v28 )
  {
    v29 = D3DXCore::CFont::CreateBitmap((HDC *)this, &v54, &v56);
    if ( !v29 )
      goto LABEL_73;
    v30 = (HDC)*((_QWORD *)this + 5);
    *((_QWORD *)this + 8) = v29;
    *((_QWORD *)this + 11) = v56;
    *((struct tagSIZE *)this + 10) = v54;
    v31 = SelectObject(v30, v29);
    DeleteObject(v31);
  }
  if ( v26 > *((_DWORD *)this + 21) )
    v26 = *((_DWORD *)this + 21);
  v50 = v26;
  v24 = ScriptStringOut(v53, 0, 0, 2u, 0, 0, 0, 0);
  if ( v24 < 0 )
    goto LABEL_75;
  v32 = 0;
  ScriptStringCPtoX(v53, 0, 0, &v49);
  ScriptStringCPtoX(v53, 0, 0, &v57);
  for ( i = 0; i < a3; ++i )
  {
    ScriptStringCPtoX(v53, i, 1, &v58);
    if ( v58 != v57 )
    {
      v34 = v57;
      if ( v57 > cx )
        v34 = cx;
      v35 = v58;
      if ( v57 < 0 )
        v34 = 0;
      if ( v58 > cx )
        v35 = cx;
      v49 = v34;
      if ( v58 < 0 )
        v35 = 0;
      v36 = v35;
      v57 = v35;
      if ( v34 < v35 )
      {
        v36 = v34;
        v34 = v35;
      }
      for ( ; v36 < v34; v36 += v37 )
      {
        v37 = v34 - v36;
        if ( v34 - v36 > *((_DWORD *)this + 589) )
          v37 = *((_DWORD *)this + 589);
        ++v32;
      }
    }
  }
  v38 = 24LL * v32;
  if ( !is_mul_ok(v32, 0x18u) )
    v38 = -1;
  v12 = (struct D3DXCore::_D3DXFONT_CELL *)operator new(
                                             v38,
                                             (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( !v12 )
  {
LABEL_73:
    v24 = -2147024882;
    goto LABEL_75;
  }
  v39 = 4LL * v32;
  if ( !is_mul_ok(v32, 4u) )
    v39 = -1;
  v40 = (int *)operator new(v39, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  v55 = v40;
  if ( !v40 )
  {
    v13 = 0;
    goto LABEL_73;
  }
  ScriptStringCPtoX(v53, 0, 0, &v49);
  ScriptStringCPtoX(v53, 0, 0, &v57);
  v41 = 0;
  v42 = 0;
  if ( v59 <= 0 )
  {
LABEL_71:
    *a5 = (unsigned int)v13;
    *(_DWORD *)(*(_QWORD *)v14 + 24LL) = (_DWORD)v13;
    v13 = 0;
    *a6 = v12;
    *(_QWORD *)(*(_QWORD *)v14 + 32LL) = v12;
    v12 = 0;
    *a7 = v40;
    *(_QWORD *)(*(_QWORD *)v14 + 40LL) = v40;
    v24 = 0;
    goto LABEL_75;
  }
  while ( 1 )
  {
    ScriptStringCPtoX(v53, v41, 1, &v58);
    if ( v58 != v57 )
      break;
LABEL_70:
    if ( ++v41 >= v59 )
      goto LABEL_71;
  }
  v43 = v57;
  if ( v57 > cx )
    v43 = cx;
  v44 = v58;
  if ( v57 < 0 )
    v43 = 0;
  if ( v58 > cx )
    v44 = cx;
  v49 = v43;
  if ( v58 < 0 )
    v44 = 0;
  v45 = v44;
  v57 = v44;
  if ( v43 < v44 )
  {
    v45 = v43;
    v43 = v44;
  }
  v52 = v43;
  if ( v45 >= v43 )
  {
LABEL_69:
    cx = v54.cx;
    goto LABEL_70;
  }
  v46 = (D3DXCore::CFont *)((char *)this + 2344);
  while ( 1 )
  {
    v47 = v50;
    v48 = v43 - v45;
    if ( v43 - v45 > *((_DWORD *)this + 589) )
      v48 = *((_DWORD *)this + 589);
    v51 = v48;
    v40[v42] = v48;
    v24 = D3DXCore::CFont::PreloadBitmap(
            this,
            v45,
            v48,
            v47,
            v46,
            (struct D3DXCore::_D3DXFONT_CELL *)((char *)v12 + 24 * (unsigned int)v13));
    if ( v24 < 0 )
      break;
    v45 += v51;
    v43 = v52;
    v40 = v55;
    LODWORD(v13) = (_DWORD)v13 + 1;
    ++v42;
    v46 = (D3DXCore::CFont *)((char *)this + 2344);
    if ( v45 >= v52 )
      goto LABEL_69;
  }
  v13 = v55;
LABEL_75:
  if ( v53 )
    ScriptStringFree(&v53);
  if ( !D3DXCore::g_bUnicodeAPI )
  {
    MoveToEx(*((HDC *)this + 5), 0, 0, 0);
    SetTextAlign(*((HDC *)this + 5), 1u);
  }
  operator delete(v12);
  operator delete(v13);
  return (unsigned int)v24;
}

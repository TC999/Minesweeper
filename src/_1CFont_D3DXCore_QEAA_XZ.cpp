void __fastcall D3DXCore::CFont::~CFont(D3DXCore::CFont *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  HDC v4; // rcx
  void *v5; // rdx
  void *v6; // rcx
  HDC v7; // rcx
  void *v8; // rdx
  void *v9; // rcx
  HDC v10; // rcx
  unsigned int v11; // edi
  void **v12; // rsi
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  D3DXCore::D3DXFONT_PHRASE *v17; // rcx
  D3DXCore::D3DXFONT_PHRASE *v18; // rcx

  *(_QWORD *)this = &D3DXCore::CFont::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 2) = 0;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 4) = 0;
  }
  v4 = (HDC)*((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = (void *)*((_QWORD *)this + 7);
    if ( v5 )
      SelectObject(v4, v5);
  }
  v6 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
    DeleteObject(v6);
  v7 = (HDC)*((_QWORD *)this + 5);
  if ( v7 )
  {
    v8 = (void *)*((_QWORD *)this + 9);
    if ( v8 )
      SelectObject(v7, v8);
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
    DeleteObject(v9);
  v10 = (HDC)*((_QWORD *)this + 5);
  if ( v10 )
    DeleteDC(v10);
  v11 = 0;
  if ( *((_DWORD *)this + 48) )
  {
    v12 = (void **)((char *)this + 200);
    do
    {
      operator delete(*v12);
      ++v11;
      ++v12;
    }
    while ( v11 < *((_DWORD *)this + 48) );
  }
  v13 = 0;
  if ( *((_DWORD *)this + 565) )
  {
    v14 = 0;
    do
    {
      v15 = *((_QWORD *)this + 283);
      if ( *(_QWORD *)(v15 + v14) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + v14) + 16LL))(*(_QWORD *)(v15 + v14));
      ++v13;
      v14 += 8;
    }
    while ( v13 < *((_DWORD *)this + 565) );
  }
  if ( *((_QWORD *)this + 20) )
    qword_1000AB1D8();
  operator delete(*((void **)this + 297));
  v16 = *((_QWORD *)this + 281);
  if ( v16 )
  {
    v17 = *(D3DXCore::D3DXFONT_PHRASE **)(v16 + 8);
    if ( v17 )
      D3DXCore::D3DXFONT_PHRASE::`scalar deleting destructor'(v17);
    v18 = *(D3DXCore::D3DXFONT_PHRASE **)(v16 + 16);
    if ( v18 )
      D3DXCore::D3DXFONT_PHRASE::`scalar deleting destructor'(v18);
    operator delete(*(void **)(v16 + 32));
    operator delete(*(void **)(v16 + 40));
    operator delete((void *)v16);
  }
  operator delete(*((void **)this + 330));
  operator delete(*((void **)this + 327));
  operator delete(*((void **)this + 325));
  operator delete(*((void **)this + 323));
  operator delete(*((void **)this + 321));
  operator delete(*((void **)this + 319));
  operator delete(*((void **)this + 317));
  operator delete(*((void **)this + 315));
  operator delete(*((void **)this + 313));
  operator delete(*((void **)this + 311));
  operator delete(*((void **)this + 309));
  operator delete(*((void **)this + 307));
  operator delete(*((void **)this + 305));
  operator delete(*((void **)this + 303));
  operator delete(*((void **)this + 301));
  operator delete(*((void **)this + 299));
  operator delete(*((void **)this + 283));
}

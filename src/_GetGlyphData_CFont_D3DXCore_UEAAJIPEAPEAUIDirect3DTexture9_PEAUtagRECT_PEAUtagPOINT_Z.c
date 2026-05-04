__int64 __fastcall D3DXCore::CFont::GetGlyphData(
        D3DXCore::CFont *this,
        unsigned __int16 a2,
        struct IDirect3DTexture9 **a3,
        struct tagRECT *a4,
        struct tagPOINT *a5)
{
  unsigned int v5; // ebx
  HDC v7; // rcx
  int v10; // r12d
  __int64 result; // rax
  struct D3DXCore::_D3DXFONT_CELL *v12; // rdi
  struct tagPOINT *v13; // rcx
  struct tagPOINT *v14; // rax
  struct _GLYPHMETRICS v15; // [rsp+40h] [rbp-38h] BYREF
  struct D3DXCore::_D3DXFONT_CELL *v16; // [rsp+80h] [rbp+8h] BYREF
  int v17; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0;
  v7 = (HDC)*((_QWORD *)this + 5);
  v16 = 0;
  v17 = a2;
  if ( GetGlyphOutlineA(v7, a2, 0x80u, &v15, 0, 0, &mat2) == -1 )
  {
    v10 = 0;
    v17 = *((unsigned __int16 *)this + 87);
  }
  else
  {
    v10 = 1;
  }
  result = D3DXCore::CFont::Preload(this, (const unsigned __int16 *)&v17, 1, &v16);
  if ( (int)result >= 0 )
  {
    v12 = v16;
    if ( !v16 || *(_QWORD *)v16 == -1 )
    {
      if ( a3 )
        *a3 = 0;
      if ( a4 )
        memset(a4, 0, sizeof(struct tagRECT));
      v14 = a5;
      if ( a5 )
      {
        a5->x = 0;
        v14->y = 0;
      }
    }
    else
    {
      if ( a3 )
      {
        *a3 = *(struct IDirect3DTexture9 **)v16;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
      }
      if ( a4 )
      {
        a4->left = *((unsigned __int16 *)v12 + 4);
        a4->top = *((unsigned __int16 *)v12 + 5);
        a4->right = *((unsigned __int16 *)v12 + 6);
        a4->bottom = *((unsigned __int16 *)v12 + 7);
      }
      v13 = a5;
      if ( a5 )
      {
        a5->x = *((__int16 *)v12 + 8);
        v13->y = *((__int16 *)v12 + 9);
      }
    }
    LOBYTE(v5) = v10 == 0;
    return v5;
  }
  return result;
}

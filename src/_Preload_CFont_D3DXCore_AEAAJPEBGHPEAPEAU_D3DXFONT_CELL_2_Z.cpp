__int64 __fastcall D3DXCore::CFont::Preload(
        D3DXCore::CFont *this,
        const unsigned __int16 *a2,
        int a3,
        struct D3DXCore::_D3DXFONT_CELL **a4)
{
  __int64 v4; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  void *v10; // rax
  struct D3DXCore::_D3DXFONT_CELL *v11; // rsi
  HDC v12; // rcx
  UINT v13; // edx
  HDC v14; // rcx
  unsigned int x; // r8d
  struct D3DXCore::_D3DXFONT_TEXTURE *v16; // rcx
  __int64 result; // rax
  WCHAR String[2]; // [rsp+40h] [rbp-48h] BYREF
  CHAR lpString[2]; // [rsp+44h] [rbp-44h] BYREF
  __int16 v20; // [rsp+46h] [rbp-42h]
  struct tagPOINT pt; // [rsp+48h] [rbp-40h] BYREF
  struct _ABC v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a3;
  v8 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v9 = HIBYTE(a2[v8]);
      if ( !*((_QWORD *)this + v9 + 25) )
      {
        v10 = operator new(0x1800u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        *((_QWORD *)this + v9 + 25) = v10;
        if ( !v10 )
          return 2147942414LL;
        memset(v10, 0, 0x1800u);
        if ( *((_DWORD *)this + 48) <= (unsigned int)v9 )
          *((_DWORD *)this + 48) = v9 + 1;
      }
      v11 = (struct D3DXCore::_D3DXFONT_CELL *)(*((_QWORD *)this + v9 + 25) + 24LL * (unsigned __int8)a2[v8]);
      if ( a4 )
        a4[v8] = v11;
      if ( !*(_QWORD *)v11 )
        break;
LABEL_20:
      if ( ++v8 >= v4 )
        return 0;
    }
    v12 = (HDC)*((_QWORD *)this + 5);
    if ( D3DXCore::g_bUnicodeAPI )
    {
      String[0] = a2[v8];
      String[1] = 0;
      ExtTextOutW(v12, 0, 0, 0x12u, 0, String, 1u, 0);
      v13 = a2[v8];
      v14 = (HDC)*((_QWORD *)this + 5);
      if ( (*((_BYTE *)this + 151) & 4) == 0 )
      {
        GetCharWidthI(v14, v13, 1u, 0, (LPINT)&v23);
        x = v23;
        goto LABEL_15;
      }
      GetCharABCWidthsI(v14, v13, 1u, 0, &v22);
      x = v22.abcA + v22.abcB;
    }
    else
    {
      *(_WORD *)lpString = a2[v8];
      v20 = 0;
      MoveToEx(v12, 0, 0, 0);
      ExtTextOutA(*((HDC *)this + 5), 0, 0, 0x12u, 0, lpString, 1u, 0);
      MoveToEx(*((HDC *)this + 5), 0, 0, &pt);
      x = pt.x;
    }
    v23 = x;
LABEL_15:
    if ( x )
    {
      v16 = (D3DXCore::CFont *)((char *)this + 2312);
      if ( x <= *((_DWORD *)this + 573) )
        v16 = (D3DXCore::CFont *)((char *)this + 2280);
      result = D3DXCore::CFont::PreloadBitmap(this, 0, x, *((_DWORD *)this + 24), v16, v11);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_QWORD *)v11 = -1;
    }
    goto LABEL_20;
  }
  return 0;
}

__int64 __fastcall D3DXCreateSprite(struct IDirect3DDevice9 *a1, _QWORD *a2)
{
  _DWORD *v5; // rbx
  int v6; // esi

  if ( !a1 || !a2 )
    return 2289436780LL;
  v5 = operator new(0x130u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
  if ( v5 )
  {
    v5[2] = 1;
    *((_QWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 3) = 0;
    *((_QWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 5) = 0;
    *(_QWORD *)v5 = &D3DXCore::CSprite::`vftable';
    *((_QWORD *)v5 + 6) = 0;
    *((_QWORD *)v5 + 8) = 0;
    *((_QWORD *)v5 + 9) = 0;
    *((_QWORD *)v5 + 10) = 0;
    *((_QWORD *)v5 + 11) = 0;
    *((_QWORD *)v5 + 12) = 0;
    *((_QWORD *)v5 + 13) = 0;
    v5[37] = 1;
    v5[38] = 0;
    *((_QWORD *)v5 + 20) = 0;
    *((_QWORD *)v5 + 22) = 0;
    *((_QWORD *)v5 + 24) = 0;
    v5[56] = 0;
    v5[57] = 0;
    *((_QWORD *)v5 + 29) = 0;
    *((_QWORD *)v5 + 30) = 0;
    *((_QWORD *)v5 + 31) = 0;
    *((_QWORD *)v5 + 32) = 0;
    v5[67] = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !v5 )
    return 2147942414LL;
  v6 = D3DXCore::CSprite::Initialize((D3DXCore::CSprite *)v5, a1);
  if ( v6 >= 0 )
  {
    *a2 = v5;
    return 0;
  }
  else
  {
    D3DXCore::CSprite::`scalar deleting destructor'((D3DXCore::CSprite *)v5, 1u);
    return (unsigned int)v6;
  }
}

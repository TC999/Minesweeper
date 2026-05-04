void __fastcall TextRenderer::OnDeviceLost(TextRenderer *this)
{
  TextRenderer *v1; // rdi
  unsigned int v2; // r12d
  __int64 v3; // rsi
  HDC DC; // r13
  int v5; // eax
  char v6; // r14
  __int64 v7; // rbx
  int v8; // ebp
  _QWORD *v9; // rax
  __int64 v10; // r13
  int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbx
  _DWORD v15[16]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v16; // [rsp+E0h] [rbp+8h] BYREF

  v16 = (__int64)this;
  v1 = g_pTextRenderer;
  v2 = 0;
  if ( *((_DWORD *)g_pTextRenderer + 2) )
  {
    v3 = 0;
    do
    {
      DeleteObject(**(HGDIOBJ **)(v3 + *((_QWORD *)v1 + 3)));
      Log(0x800u, L"Recreating font: %s", *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 16LL));
      DC = GetDC(g_hWnd);
      if ( !g_bDoubleDPI || g_bScaleToLowDPI )
      {
        v5 = MulDiv(*(_DWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 24LL), 96, 72);
        v6 = 0;
      }
      else
      {
        v5 = MulDiv(*(_DWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 24LL), 192, 72);
        v6 = 1;
      }
      v7 = *((_QWORD *)v1 + 3);
      v8 = -v5;
      **(_QWORD **)(v3 + v7) = CreateFontW(
                                 -v5,
                                 0,
                                 0,
                                 0,
                                 *(_BYTE *)(*(_QWORD *)(v3 + v7) + 28LL) != 0 ? 700 : 400,
                                 *(_BYTE *)(*(_QWORD *)(v3 + v7) + 29LL) != 0,
                                 *(_BYTE *)(*(_QWORD *)(v3 + v7) + 30LL) != 0,
                                 0,
                                 1u,
                                 0,
                                 0,
                                 5u,
                                 0,
                                 *(LPCWSTR *)(*(_QWORD *)(v3 + v7) + 16LL));
      ReleaseDC(g_hWnd, DC);
      v9 = *(_QWORD **)(v3 + *((_QWORD *)v1 + 3));
      v16 = 0;
      *(_QWORD *)(v9[1] + 40LL) = *v9;
      D3DXCreateFontW(
        *((struct IDirect3DDevice9 **)g_pRenderManager + 10),
        1,
        *(_BYTE *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 29LL) != 0,
        1,
        0,
        5,
        0,
        *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 16LL),
        (__int64)&v16);
      v10 = v16;
      if ( !v16 )
        break;
      v11 = abs32(v8);
      if ( (*(unsigned int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v16 + 56LL))(v16, v15) == 1 )
        v11 = v15[0] + v15[4];
      v12 = *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 8LL);
      v13 = *(_QWORD *)(v12 + 56);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        *(_QWORD *)(v12 + 56) = 0;
      }
      *(_QWORD *)(v12 + 56) = v10;
      *(_DWORD *)(v12 + 64) = v11;
      *(_BYTE *)(v12 + 68) = v6;
      v14 = *(_QWORD *)(*(_QWORD *)(v3 + *((_QWORD *)v1 + 3)) + 8LL);
      ++v2;
      v3 += 8;
      *(_QWORD *)(v14 + 48) = CreateCompatibleDC(0);
    }
    while ( v2 < *((_DWORD *)v1 + 2) );
  }
}

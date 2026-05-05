// Hidden C++ exception states: #wind=1
char __fastcall RenderManager::FindAdapter(RenderManager *this, struct IDirect3D9 *a2, struct _D3DCAPS9 *a3)
{
  unsigned int v5; // esi
  bool v6; // r14
  XmlNode *Xml; // rax
  XmlNode *v8; // rbx
  int v9; // r12d
  HMONITOR v10; // r15
  unsigned int v11; // edi
  _DWORD *v12; // rbx
  signed int v13; // ecx
  int v14; // ecx
  signed int v15; // ecx
  const unsigned __int16 *v16; // rax
  int v17; // ecx
  int v19; // r12d
  _DWORD *i; // rsi
  _DWORD *v21; // rdi
  LPCWSTR lpCaption; // [rsp+20h] [rbp-878h]
  LPCWSTR lpCaptiona; // [rsp+20h] [rbp-878h]
  unsigned __int16 *v24; // [rsp+30h] [rbp-868h]
  unsigned __int8 HResult; // [rsp+38h] [rbp-860h]
  bool v26; // [rsp+40h] [rbp-858h]
  bool v27; // [rsp+41h] [rbp-857h]
  _DWORD v28[4]; // [rsp+48h] [rbp-850h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-840h]
  void *v30; // [rsp+60h] [rbp-838h]
  __int64 v31; // [rsp+68h] [rbp-830h]
  _BYTE Src[304]; // [rsp+70h] [rbp-828h] BYREF
  _BYTE v33[304]; // [rsp+1A0h] [rbp-6F8h] BYREF
  _BYTE v34[304]; // [rsp+2D0h] [rbp-5C8h] BYREF
  _BYTE v35[512]; // [rsp+400h] [rbp-498h] BYREF
  _BYTE v36[512]; // [rsp+600h] [rbp-298h] BYREF
  _BYTE v37[80]; // [rsp+800h] [rbp-98h] BYREF

  v31 = -2;
  v30 = a3;
  Log(2u, 230, "RenderManager.cpp", L"Looking for a valid adapter for the rendering...");
  v5 = 0;
  v26 = 0;
  v6 = 0;
  v27 = 0;
  Xml = XmlManager::GetXml(g_pXmlManager, L"engine.xml");
  v8 = Xml;
  if ( Xml )
  {
    v26 = (int)XmlNode::GetXmlInt(Xml, L"/ForceAllowHighDPI", -1) > 0;
    v6 = (int)XmlNode::GetXmlInt(v8, L"/ForceRGBRast", -1) > 0;
    v27 = (int)XmlNode::GetXmlInt(v8, L"/ForceLowDPI", -1) > 0;
  }
  v9 = ((__int64 (__fastcall *)(struct IDirect3D9 *))a2->lpVtbl->GetAdapterCount)(a2);
  Log(2u, 247, "RenderManager.cpp", L"Found %d adapters", v9);
  v10 = MonitorFromWindow(g_hWnd, 2u);
  v11 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v28[2] = 16;
  v12 = 0;
  v29 = 0;
  if ( v9 > 0 )
  {
    do
    {
      ((void (__fastcall *)(struct IDirect3D9 *, _QWORD, _QWORD, _BYTE *))a2->lpVtbl->GetAdapterIdentifier)(
        a2,
        v5,
        0,
        v35);
      if ( (HMONITOR)((__int64 (__fastcall *)(struct IDirect3D9 *, _QWORD))a2->lpVtbl->GetAdapterMonitor)(a2, v5) == v10 )
      {
        v13 = ((__int64 (__fastcall *)(struct IDirect3D9 *, _QWORD, __int64, _BYTE *))a2->lpVtbl->GetDeviceCaps)(
                a2,
                v5,
                1,
                Src);
        if ( v13 < 0 )
        {
          HResult = (unsigned __int8)GetHResult(v13);
          LODWORD(v24) = v14;
          Log(2u, 296, "RenderManager.cpp", L"Error adding HAL for adapter %S on %S, HR %x(%s)", v36, v37, v24);
        }
        else
        {
          Log(2u, 283, "RenderManager.cpp", L"Added adapter %S on %S HAL.", v36, v37);
          if ( v6 )
          {
            Log(2u, 287, "RenderManager.cpp", L"FORCING RGB RASTERIZER - IGNORING HAL ADAPTER");
          }
          else
          {
            memcpy(v34, Src, sizeof(v34));
            Array<_D3DCAPS9>::Add(v28, v34);
          }
        }
        v15 = ((__int64 (__fastcall *)(struct IDirect3D9 *, _QWORD, __int64, _BYTE *))a2->lpVtbl->GetDeviceCaps)(
                a2,
                v5,
                3,
                Src);
        if ( v15 < 0 )
        {
          v16 = GetHResult(v15);
          LODWORD(lpCaption) = v17;
          Log(2u, 309, "RenderManager.cpp", L"Failed adding RGBRast: %x (%s)", lpCaption, v16);
        }
        else
        {
          Log(2u, 304, "RenderManager.cpp", L"Added RGBRast");
          memcpy(v33, Src, sizeof(v33));
          Array<_D3DCAPS9>::Add(v28, v33);
        }
      }
      else
      {
        Log(2u, 269, "RenderManager.cpp", L"Skipping adapter %S on %S as it is on the wrong screen", v36, v37);
      }
      ++v5;
    }
    while ( (int)v5 < v9 );
    v12 = v29;
    v11 = v28[0];
  }
  LODWORD(lpCaption) = v11;
  Log(2u, 327, "RenderManager.cpp", L"Found %d caps sources.", lpCaption);
  if ( v11 )
  {
    qsort(v12, v11, 0x130u, CapsSortFunction);
    v19 = 0;
    for ( i = v12 + 22; i[1] < 0x400u || *i < 0x400u; i += 76 )
    {
      LODWORD(lpCaptiona) = *(i - 21);
      Log(2u, 351, "RenderManager.cpp", L"Skipped caps source ordinal %d due to insufficient texture size", lpCaptiona);
      if ( ++v19 >= v11 )
      {
        if ( v12 )
          free(v12);
        return 0;
      }
    }
    v21 = &v12[76 * v19];
    ((void (__fastcall *)(struct IDirect3D9 *, _QWORD, _QWORD, _BYTE *))a2->lpVtbl->GetAdapterIdentifier)(
      a2,
      (unsigned int)v21[1],
      0,
      v35);
    if ( v21[23] < 0x800u || v21[22] < 0x800u )
    {
      LODWORD(lpCaptiona) = v21[1];
      Log(2u, 456, "RenderManager.cpp", L"Disabling HighDPI for adapter ordinal %d due to texture size.", lpCaptiona);
      *((_BYTE *)this + 165) = 0;
    }
    else
    {
      LODWORD(lpCaptiona) = v21[1];
      if ( *v21 == 1 )
      {
        Log(2u, 466, "RenderManager.cpp", L"Enabling HighDPI for adapter ordinal %d", lpCaptiona);
        *((_BYTE *)this + 165) = 1;
      }
      else
      {
        Log(2u, 461, "RenderManager.cpp", L"Disabling HighDPI for adapter ordinal %d due to not being HAL.", lpCaptiona);
        *((_BYTE *)this + 165) = 0;
      }
    }
    if ( v26 )
    {
      Log(2u, 475, "RenderManager.cpp", L"Forcing high dpi to be available");
      *((_BYTE *)this + 165) = 1;
    }
    if ( v27 )
    {
      Log(2u, 481, "RenderManager.cpp", L"Forcing low dpi");
      *((_BYTE *)this + 165) = 0;
    }
    memcpy(v30, &v12[76 * v19], 0x130u);
    if ( !*((_BYTE *)this + 165) )
      *(_BYTE *)(*((_QWORD *)this + 8) + 22LL) = 0;
    if ( *v21 != 1 )
    {
      LOBYTE(v24) = 1;
      DialogHelper::ShowMessageBox(0x379u, 0x378u, 1u, 0xFFFFu, 0, 0, v24, HResult);
    }
    if ( v12 )
      free(v12);
    return 1;
  }
  else
  {
    Log(2u, 332, "RenderManager.cpp", L"No adapters found for this monitor.");
    if ( v12 )
      free(v12);
    return 0;
  }
}

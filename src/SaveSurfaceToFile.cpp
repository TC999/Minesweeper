__int64 __fastcall SaveSurfaceToFile(__int64 a1, __int64 a2, struct IDirect3DSurface9 *a3)
{
  int v6; // ebx
  int v7; // ebx
  bool v8; // zf
  int v9; // [rsp+40h] [rbp-128h] BYREF
  __int64 v10; // [rsp+48h] [rbp-120h]
  __int64 v11; // [rsp+50h] [rbp-118h]
  __int64 v12; // [rsp+58h] [rbp-110h]
  __int64 v13; // [rsp+60h] [rbp-108h]
  int v14; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v15; // [rsp+78h] [rbp-F0h]
  __int64 v16; // [rsp+80h] [rbp-E8h]
  int v17; // [rsp+B4h] [rbp-B4h]
  int v18; // [rsp+B8h] [rbp-B0h]
  __int64 v19; // [rsp+C8h] [rbp-A0h]
  __int64 v20; // [rsp+D0h] [rbp-98h]
  _BYTE v21[12]; // [rsp+E0h] [rbp-88h] BYREF
  int v22; // [rsp+ECh] [rbp-7Ch]
  _BYTE v23[96]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v24; // [rsp+170h] [rbp+8h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a1 )
  {
    if ( a3 )
    {
      v6 = D3DXTex::CLockSurface::Lock((D3DXTex::CLockSurface *)&v9, (struct D3DX_BLT *)v23, a3, 0, 0, 0, 1u);
      if ( v6 >= 0 )
      {
        v6 = D3DXTex::CImage::Initialize((D3DXTex::CImage *)&v14, (struct D3DX_BLT *)v23);
        if ( v6 >= 0 )
        {
          v6 = D3DXTex::CImage::Save(&v14, a1, 3);
          if ( v6 >= 0 )
          {
            ((void (__fastcall *)(struct IDirect3DSurface9 *, _BYTE *))a3->lpVtbl->GetDesc)(a3, v21);
            if ( v22
              || (((void (__fastcall *)(struct IDirect3DSurface9 *, __int64 *))a3->lpVtbl->GetDevice)(a3, &v24),
                  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24),
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24),
                  v8 = v7 == 0,
                  v6 = -2005530520,
                  v8) )
            {
              v6 = 0;
            }
          }
        }
      }
    }
    else
    {
      v6 = -2005530516;
    }
    D3DXTex::CLockSurface::Unlock((D3DXTex::CLockSurface *)&v9);
    D3DXTex::CImage::~CImage((D3DXTex::CImage *)&v14);
    return (unsigned int)v6;
  }
  else
  {
    D3DXTex::CLockSurface::Unlock((D3DXTex::CLockSurface *)&v9);
    D3DXTex::CImage::~CImage((D3DXTex::CImage *)&v14);
    return 2289436780LL;
  }
}

__int64 __fastcall D3DXTex::init_BoxFilter2D_A8R8G8B8(
        D3DXTex *a1,
        unsigned int *a2,
        unsigned int *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  D3DXTex::g_pBoxFilter2D_A8R8G8B8 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, unsigned int, unsigned int))D3DXTex::c_BoxFilter2D_A8R8G8B8;
  D3DXTex::g_pBoxFilter2D_X8R8G8B8 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))D3DXTex::c_BoxFilter2D_X8R8G8B8;
  return D3DXTex::c_BoxFilter2D_A8R8G8B8(a1, a2, a3, a4, a5, a6);
}

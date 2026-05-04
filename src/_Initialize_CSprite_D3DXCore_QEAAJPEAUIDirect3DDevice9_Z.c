__int64 __fastcall D3DXCore::CSprite::Initialize(D3DXCore::CSprite *this, struct IDirect3DDevice9 *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  int v5; // ecx
  int v6; // r11d
  __int16 v7; // ax
  bool v8; // cf
  __int64 v9; // rcx
  char *v10; // rax
  unsigned __int8 v11; // si
  char *v12; // r11
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  _BYTE v17[32]; // [rsp+30h] [rbp-158h] BYREF
  _DWORD v18[13]; // [rsp+50h] [rbp-138h] BYREF
  int v19; // [rsp+84h] [rbp-104h]
  int v20; // [rsp+90h] [rbp-F8h]
  int v21; // [rsp+BCh] [rbp-CCh]

  v2 = 0;
  if ( !a2 )
    return 2289436780LL;
  *((_QWORD *)this + 3) = a2;
  ((void (__fastcall *)(struct IDirect3DDevice9 *))a2->lpVtbl->AddRef)(a2);
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 48LL))(
             *((_QWORD *)this + 3),
             (char *)this + 16);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 3) + 688LL))(
               *((_QWORD *)this + 3),
               qword_10000D760,
               (char *)this + 32);
    if ( (int)result >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3), v18);
      v5 = v20;
      v6 = v18[0];
      *((_DWORD *)this + 29) = v18[1];
      *((_DWORD *)this + 36) = 1;
      *((_DWORD *)this + 28) = v6;
      *((_DWORD *)this + 31) = (v5 & 0x4000000 | 0x8000000u) >> 26;
      v7 = v5;
      v8 = (v5 & 0x20000) != 0;
      v9 = *((_QWORD *)this + 3);
      *((_DWORD *)this + 32) = (v7 & 0x400 | 0x800u) >> 10;
      *((_DWORD *)this + 33) = v8 + 1;
      *((_DWORD *)this + 34) = v21;
      *((_DWORD *)this + 35) = v19 & 0x10;
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 72LL))(v9, v17);
      *((_DWORD *)this + 30) = (v17[16] & 0xA0) != 0 ? 2 : 0;
      v10 = (char *)operator new(0xD0u, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      if ( v10 )
      {
        v11 = 16 - ((unsigned __int8)v10 & 0xF);
        v12 = &v10[v11];
        *(v12 - 1) = v11;
      }
      else
      {
        v12 = 0;
      }
      *((_QWORD *)this + 20) = v12;
      if ( v12 )
      {
        *((_QWORD *)this + 22) = v12 + 64;
        *((_QWORD *)this + 24) = v12 + 128;
        *((_DWORD *)v12 + 15) = 1065353216;
        *((_DWORD *)v12 + 10) = 1065353216;
        *((_DWORD *)v12 + 5) = 1065353216;
        *(_DWORD *)v12 = 1065353216;
        *((_DWORD *)v12 + 14) = 0;
        *((_DWORD *)v12 + 13) = 0;
        *((_DWORD *)v12 + 12) = 0;
        *((_DWORD *)v12 + 11) = 0;
        *((_DWORD *)v12 + 9) = 0;
        *((_DWORD *)v12 + 8) = 0;
        *((_DWORD *)v12 + 7) = 0;
        *((_DWORD *)v12 + 6) = 0;
        *((_DWORD *)v12 + 4) = 0;
        *((_DWORD *)v12 + 3) = 0;
        *((_DWORD *)v12 + 2) = 0;
        *((_DWORD *)v12 + 1) = 0;
        v13 = (_DWORD *)*((_QWORD *)this + 22);
        v13[15] = 1065353216;
        v13[10] = 1065353216;
        v13[5] = 1065353216;
        *v13 = 1065353216;
        v13[14] = 0;
        v13[13] = 0;
        v13[12] = 0;
        v13[11] = 0;
        v13[9] = 0;
        v13[8] = 0;
        v13[7] = 0;
        v13[6] = 0;
        v13[4] = 0;
        v13[3] = 0;
        v13[2] = 0;
        v13[1] = 0;
        v14 = (_DWORD *)*((_QWORD *)this + 24);
        v14[15] = 1065353216;
        v14[10] = 1065353216;
        v14[5] = 1065353216;
        *v14 = 1065353216;
        v14[14] = 0;
        v14[13] = 0;
        v14[12] = 0;
        v14[11] = 0;
        v14[9] = 0;
        v14[8] = 0;
        v14[7] = 0;
        v14[6] = 0;
        v14[4] = 0;
        v14[3] = 0;
        v14[2] = 0;
        v14[1] = 0;
        v15 = *(_QWORD *)this;
        *((_DWORD *)this + 37) = 1;
        *((_DWORD *)this + 38) = 1;
        *((_DWORD *)this + 50) = 0;
        *((_DWORD *)this + 51) = 0;
        *((float *)this + 52) = FLOAT_N1_0;
        v16 = (*(__int64 (__fastcall **)(D3DXCore::CSprite *))(v15 + 104))(this);
        if ( v16 < 0 )
          return (unsigned int)v16;
        return v2;
      }
      else
      {
        return 2147942414LL;
      }
    }
  }
  return result;
}

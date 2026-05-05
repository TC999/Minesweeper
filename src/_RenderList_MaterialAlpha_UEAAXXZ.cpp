void __fastcall MaterialAlpha::RenderList(MaterialAlpha *this)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // r15d
  int v5; // r14d
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned int i; // r12d
  __int64 v10; // r9
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ebp
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // al
  _BOOL8 v19; // r8
  char v20; // cl
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // [rsp+40h] [rbp-58h]
  _QWORD v24[10]; // [rsp+48h] [rbp-50h] BYREF
  char v25; // [rsp+A0h] [rbp+8h]
  char v26; // [rsp+A8h] [rbp+10h]
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  int v28; // [rsp+B8h] [rbp+20h]

  v23 = 0;
  v2 = *((_QWORD *)g_pRenderManager + 10);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 712LL))(v2, 324);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, 27, 1);
  v25 = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, 19, 5);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, 20, 6);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 5, 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 6, 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 7, 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 1, 3);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 2, 3);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v2 + 536LL))(
    v2,
    0,
    1,
    4 - (unsigned int)(*((_BYTE *)g_pRenderManager + 210) != 0));
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 0, 2, 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v2 + 536LL))(v2, 0, 3, 0);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v2 + 536LL))(
    v2,
    0,
    4,
    4 - (unsigned int)(*((_BYTE *)g_pRenderManager + 210) != 0));
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 0, 5, 2);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v2 + 536LL))(v2, 0, 6, 0);
  v26 = 0;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 1, 1, 1);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 1, 4, 1);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v2 + 800LL))(
    v2,
    0,
    *((_QWORD *)this + 5),
    0,
    28);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 832LL))(v2, *((_QWORD *)this + 6));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v27 = 0;
  v28 = *((_DWORD *)this + 8) / *((_DWORD *)this + 14) + 1;
  if ( v28 <= 0 )
  {
LABEL_43:
    if ( *((_BYTE *)g_pRenderManager + 210) )
      Log(2u, L"Swap: %d, DP: %d", v4, v3);
    *((_DWORD *)this + 8) = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)this + 8) - v5 * *((_DWORD *)this + 14);
      if ( *((_DWORD *)this + 14) < v6 )
        v6 = *((_DWORD *)this + 14);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int))(**((_QWORD **)this + 5) + 88LL))(
             *((_QWORD *)this + 5),
             0,
             0,
             v24,
             0x2000) < 0 )
        break;
      v7 = 0;
      if ( v6 )
      {
        v8 = 0;
        do
        {
          MaterialBasicVertex::FillVertex(
            (struct MaterialBasicVertex *)(v8 + v24[0]),
            (struct MaterialBasicVertex *)(v8 + v24[0] + 28),
            (struct MaterialBasicVertex *)(v8 + v24[0] + 56),
            (struct MaterialBasicVertex *)(v8 + v24[0] + 84),
            *(const struct Material::SavedRender **)(*((_QWORD *)this + 3) + 8LL * (v7 + v5 * *((_DWORD *)this + 14))));
          ++v7;
          v8 += 112;
        }
        while ( v7 < v6 );
        v3 = v27;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
      for ( i = 0; i < v6; v3 = ++v27 )
      {
        if ( *((_BYTE *)g_pRenderManager + 209) )
          break;
        v10 = *((_QWORD *)this + 3);
        v11 = i + 1;
        v12 = v5 * *((_DWORD *)this + 14);
        v13 = 1;
        v14 = *(_QWORD *)(v10 + 8LL * (v12 + i));
        v15 = i + 1 == v6;
        if ( i + 1 < v6 )
        {
          v16 = v12 + v11;
          while ( 1 )
          {
            v17 = *(_QWORD *)(v10 + 8 * v16);
            if ( *(_QWORD *)(v17 + 16) != *(_QWORD *)(v14 + 16)
              || *(_BYTE *)(v17 + 33) != *(_BYTE *)(v14 + 33)
              || *(_BYTE *)(v17 + 35) != *(_BYTE *)(v14 + 35) )
            {
              break;
            }
            ++v11;
            v16 = (unsigned int)(v16 + 1);
            if ( v11 >= v6 )
              goto LABEL_19;
          }
          v13 = v11 - i;
LABEL_19:
          v15 = v11 == v6;
        }
        if ( v15 )
          v13 = v6 - i;
        if ( *(_QWORD *)(v14 + 16) != v23 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 520LL))(v2, 0);
          ++v4;
          v23 = *(_QWORD *)(v14 + 16);
        }
        if ( !*(_BYTE *)(v14 + 32) && !*((_BYTE *)g_pRenderManager + 166) )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 5, 1);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 6, 1);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, 0, 7, 1);
        }
        v18 = *(_BYTE *)(v14 + 33);
        if ( v18 != v25 )
        {
          v19 = v18 || *((_BYTE *)g_pRenderManager + 210);
          (*(void (__fastcall **)(__int64, __int64, _BOOL8))(*(_QWORD *)v2 + 456LL))(v2, 27, v19);
          v25 = *(_BYTE *)(v14 + 33);
        }
        v20 = *(_BYTE *)(v14 + 35);
        if ( v20 != v26 )
        {
          if ( *((_BYTE *)g_pRenderManager + 210) )
            v21 = 3;
          else
            v21 = (unsigned int)(v20 != 0) + 4;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 0, 1, v21);
          if ( *((_BYTE *)g_pRenderManager + 210) )
            v22 = 3;
          else
            v22 = (unsigned int)(*(_BYTE *)(v14 + 35) != 0) + 4;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 536LL))(v2, 0, 4, v22);
          v26 = *(_BYTE *)(v14 + 35);
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 656LL))(v2, 4, 4 * i);
        i += v13;
      }
      if ( ++v5 >= v28 )
        goto LABEL_43;
    }
  }
}

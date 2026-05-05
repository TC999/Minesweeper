void __fastcall MaterialAdditive::RenderList(void **this)
{
  __int64 v2; // r15
  __int64 *v3; // rbp
  int v4; // esi
  int v5; // r14d
  int v6; // r13d
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rsi
  unsigned int v10; // r12d
  RenderManager *v11; // r10
  _QWORD *v12; // r11
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v15; // r13
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // [rsp+80h] [rbp+8h]
  __int64 v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 8) )
  {
    v2 = 0;
    v20 = 0;
    qsort(this[3], *((unsigned int *)this + 8), 8u, (_CoreCrtNonSecureSearchSortCompareFunction)AlphaCompare);
    v3 = (__int64 *)*((_QWORD *)g_pRenderManager + 10);
    (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 712))(v3, 324);
    v4 = 1;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v3 + 456))(v3, 27, 1);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v3 + 456))(v3, 19, 2);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v3 + 456))(v3, 20, 2);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 5, 1);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 6, 1);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 7, 1);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 1, 3);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 2, 3);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 536))(v3, 0, 1, 4);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 536))(v3, 0, 2, 2);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*v3 + 536))(v3, 0, 3, 0);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 536))(v3, 0, 4, 4);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 536))(v3, 0, 5, 2);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*v3 + 536))(v3, 0, 6, 0);
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(*v3 + 536))(v3, 1, 1, 1);
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(*v3 + 536))(v3, 1, 4, 1);
    (*(void (__fastcall **)(__int64 *, _QWORD, void *, _QWORD, int))(*v3 + 800))(v3, 0, this[5], 0, 28);
    (*(void (__fastcall **)(__int64 *, void *))(*v3 + 832))(v3, this[6]);
    v5 = 0;
    v6 = *((_DWORD *)this + 8) / *((_DWORD *)this + 14) + 1;
    v19 = v6;
    if ( v6 <= 0 )
    {
LABEL_29:
      *((_DWORD *)this + 8) = 0;
    }
    else
    {
      while ( 1 )
      {
        v7 = *((_DWORD *)this + 8) - v5 * *((_DWORD *)this + 14);
        if ( *((_DWORD *)this + 14) < v7 )
          v7 = *((_DWORD *)this + 14);
        if ( (*(int (__fastcall **)(void *, _QWORD, _QWORD, __int64 *, int))(*(_QWORD *)this[5] + 88LL))(
               this[5],
               0,
               0,
               &v21,
               0x2000) < 0 )
          break;
        v8 = 0;
        if ( v7 )
        {
          v9 = 0;
          do
          {
            MaterialAdditive::FillVertex(
              (MaterialAdditive *)this,
              (struct AddVertex *)(v9 + v21),
              (struct AddVertex *)(v9 + v21 + 28),
              (struct AddVertex *)(v9 + v21 + 56),
              (struct AddVertex *)(v9 + v21 + 84),
              *((const struct Material::SavedRender **)this[3] + v8 + v5 * *((_DWORD *)this + 14)));
            ++v8;
            v9 += 112;
          }
          while ( v8 < v7 );
          v4 = 1;
        }
        (*(void (__fastcall **)(void *))(*(_QWORD *)this[5] + 96LL))(this[5]);
        v10 = 0;
        if ( v7 )
        {
          do
          {
            v11 = g_pRenderManager;
            if ( *((_BYTE *)g_pRenderManager + 209) )
              break;
            v12 = this[3];
            v13 = v10 + 1;
            v14 = v5 * *((_DWORD *)this + 14);
            v15 = v12[v14 + v10];
            v16 = v10 + 1 == v7;
            if ( v10 + 1 < v7 )
            {
              v17 = v14 + v13;
              while ( *(_QWORD *)(v12[v17] + 16LL) == *(_QWORD *)(v15 + 16) )
              {
                ++v13;
                v17 = (unsigned int)(v17 + 1);
                if ( v13 >= v7 )
                  goto LABEL_18;
              }
              v4 = v13 - v10;
LABEL_18:
              v2 = v20;
              v16 = v13 == v7;
            }
            if ( v16 )
              v4 = v7 - v10;
            if ( *(_QWORD *)(v15 + 16) != v2 )
            {
              (*(void (__fastcall **)(__int64 *, _QWORD))(*v3 + 520))(v3, 0);
              v2 = *(_QWORD *)(v15 + 16);
              v11 = g_pRenderManager;
              v20 = v2;
            }
            if ( *(_BYTE *)(v15 + 32) || *((_BYTE *)v11 + 166) )
            {
              (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 5, 2);
              (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 6, 2);
              (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v3 + 552))(v3, 0, 7, 2);
            }
            v18 = *v3;
            g_uiFillCount += (*(_DWORD *)(*(_QWORD *)v15 + 8LL) - **(_DWORD **)v15)
                           * (*(_DWORD *)(*(_QWORD *)v15 + 12LL) - *(_DWORD *)(*(_QWORD *)v15 + 4LL));
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v18 + 656))(v3, 4, 4 * v10);
            v10 += v4;
            v4 = 1;
          }
          while ( v10 < v7 );
          v6 = v19;
          v4 = 1;
        }
        if ( ++v5 >= v6 )
          goto LABEL_29;
      }
    }
  }
}

char __fastcall MaterialAlpha::Initialize(MaterialAlpha *this)
{
  unsigned __int16 v2; // bx
  _QWORD *v3; // rsi
  signed int v4; // ebp
  __int64 v5; // rcx
  const unsigned __int16 *HResult; // rax
  __int16 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8
  __int16 v11; // dx
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 48);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, char *, _QWORD))(**((_QWORD **)g_pRenderManager
                                                                                           + 10)
                                                                                        + 216LL))(
         *((_QWORD *)g_pRenderManager + 10),
         (unsigned int)(12 * *((_DWORD *)this + 14)),
         8,
         101,
         1,
         (char *)this + 48,
         0);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _DWORD))(*(_QWORD *)*v3 + 88LL))(*v3, 0, 0, &v14, 0);
    if ( *((_DWORD *)this + 14) )
    {
      v8 = 2;
      do
      {
        v9 = 3LL * v2++;
        *(_WORD *)(v14 + 4 * v9) = v8 - 2;
        v10 = 2 * v9;
        *(_WORD *)(v14 + 2 * v10 + 2) = v8 - 1;
        v11 = v8 + 1;
        *(_WORD *)(v14 + 2 * v10 + 4) = v8;
        *(_WORD *)(v14 + 2 * v10 + 6) = v8 - 2;
        *(_WORD *)(v14 + 2 * v10 + 8) = v8;
        v8 += 4;
        *(_WORD *)(v14 + 2 * v10 + 10) = v11;
      }
      while ( (unsigned int)v2 < *((_DWORD *)this + 14) );
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 96LL))(*v3);
    return 1;
  }
  else
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 5) = 0;
    }
    HResult = GetHResult(v4);
    LODWORD(v13) = v4;
    LODWORD(v12) = 1;
    Log(2u, 61, "MaterialAlpha.cpp", L"Unable to create index buffer using MaxBatch: %d; hr %x(%s)", v12, v13, HResult);
    return 0;
  }
}

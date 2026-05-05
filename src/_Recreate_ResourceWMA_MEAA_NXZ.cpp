char __fastcall ResourceWMA::Recreate(ResourceWMA *this)
{
  _DWORD *v3; // rsi
  _QWORD *v4; // rdi
  HRESULT v5; // ebp
  const unsigned __int16 *HResult; // rax
  signed int v7; // ebp
  const unsigned __int16 *v8; // rax
  signed int v9; // ecx
  const unsigned __int16 *v10; // rax
  unsigned int v11; // ecx
  signed int v12; // ecx
  const unsigned __int16 *v13; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // r9d
  bool v18; // cf
  unsigned __int64 v19; // rax
  int v20; // eax
  const unsigned __int16 *v21; // rdx
  unsigned __int64 v22; // rdx
  bool v23; // cf
  unsigned __int64 v24; // rdx
  int v25; // eax
  _QWORD *v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  signed int v30; // ecx
  const unsigned __int16 *v31; // rax
  unsigned int v32; // ecx
  signed int v33; // esi
  const unsigned __int16 *v34; // rax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  size_t v38; // rcx
  int v39; // eax
  bool v40; // zf
  _DWORD *v41; // r11
  unsigned __int8 v42; // di
  unsigned int i; // edi
  Audio *v44; // rdi
  unsigned int v45; // ecx
  __int64 v46; // rdx
  void *v47; // rax
  __int64 v48; // [rsp+20h] [rbp-88h]
  size_t v49; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v50; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-68h] BYREF
  __int16 v52; // [rsp+44h] [rbp-64h] BYREF
  __int16 v53[2]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD Size[3]; // [rsp+4Ch] [rbp-5Ch] BYREF
  _BYTE v55[4]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v56[4]; // [rsp+5Ch] [rbp-4Ch] BYREF
  _BYTE v57[40]; // [rsp+60h] [rbp-48h] BYREF

  if ( !*((_QWORD *)g_pAudio + 2) )
    return 0;
  v3 = operator new(0x20u);
  if ( v3 )
  {
    v3[6] = 1;
    *((_QWORD *)v3 + 1) = 0;
    v3[4] = 0;
    v3[5] = 0;
    *((_BYTE *)v3 + 28) = 1;
    *(_QWORD *)v3 = &FileMgrStream::`vftable';
  }
  else
  {
    v3 = 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v3 + 112LL))(
          v3,
          *((_QWORD *)this + 13),
          0) )
  {
    Log(4u, L"Couldn't open source file %s", *((_QWORD *)this + 13));
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0;
  }
  v4 = (_QWORD *)((char *)this + 120);
  v5 = WMCreateSyncReader_0(0, 1u, (IWMSyncReader **)this + 15);
  if ( v5 < 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
    HResult = GetHResult(v5);
    Log(4u, L"Couldn't create sync reader: %08x (%s)", (unsigned int)v5, HResult);
    return 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v4 + 184LL))(*v4, v3);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v7 < 0 )
  {
    v8 = GetHResult(v7);
    Log(4u, L"Couldn't open wma stream for file: %s - %08x (%s)", *((_QWORD *)this + 13), (unsigned int)v7, v8);
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v4 + 112LL))(*v4, v55);
  if ( v9 < 0 )
  {
    v10 = GetHResult(v9);
    Log(4u, L"Couldn't get wma output count for file: %s - %08x (%s)", *((_QWORD *)this + 13), v11, v10);
    goto LABEL_12;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v4 + 40LL))(*v4, 0, 0);
  if ( v12 < 0 )
  {
    v13 = GetHResult(v12);
    Log(4u, L"Couldn't set wma range for file: %s - %08x (%s)", *((_QWORD *)this + 13), v14, v13);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 **))(*(_QWORD *)*v4 + 144LL))(*v4, 0, 0, &v50);
  (*(void (__fastcall **)(__int64 *, _QWORD, _DWORD *))(*v50 + 32))(v50, 0, Size);
  v15 = operator new[](Size[0]);
  v16 = *v50;
  if ( !v15 )
    goto LABEL_19;
  v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, _DWORD *))(v16 + 32))(v50, v15, Size);
  v18 = *v15 < *(_QWORD *)&WMMEDIATYPE_Audio.Data1;
  if ( *v15 == *(_QWORD *)&WMMEDIATYPE_Audio.Data1
    && (v19 = v15[1], v18 = v19 < *(_QWORD *)WMMEDIATYPE_Audio.Data4, v19 == *(_QWORD *)WMMEDIATYPE_Audio.Data4) )
  {
    v20 = 0;
  }
  else
  {
    v20 = -v18 - (v18 - 1);
  }
  if ( v20 )
  {
    GetHResult(v17);
    v21 = L"File is not audio: %s - %08x (%s)";
LABEL_26:
    Log(4u, v21, *((_QWORD *)this + 13));
    operator delete(v15);
    v16 = *v50;
LABEL_19:
    (*(void (**)(void))(v16 + 16))();
    goto LABEL_12;
  }
  v22 = *(_QWORD *)((char *)v15 + 44);
  v23 = v22 < *(_QWORD *)&WMFORMAT_WaveFormatEx.Data1;
  if ( v22 == *(_QWORD *)&WMFORMAT_WaveFormatEx.Data1
    && (v24 = *(_QWORD *)((char *)v15 + 52),
        v23 = v24 < *(_QWORD *)WMFORMAT_WaveFormatEx.Data4,
        v24 == *(_QWORD *)WMFORMAT_WaveFormatEx.Data4) )
  {
    v25 = 0;
  }
  else
  {
    v25 = -v23 - (v23 - 1);
  }
  if ( v25 )
  {
    GetHResult(v17);
    v21 = L"Audio formattype is not wave format ex: %s - %08x (%s)";
    goto LABEL_26;
  }
  if ( *((_DWORD *)v15 + 18) != 18 )
  {
    GetHResult(v17);
    v21 = L"Sound file wave format header is incorrect size: %s - %08x (%s)";
    goto LABEL_26;
  }
  v26 = operator new(0x12u);
  if ( v26 )
  {
    *v26 = 0;
    v26[1] = 0;
    *((_WORD *)v26 + 8) = 0;
  }
  else
  {
    v26 = 0;
  }
  *((_QWORD *)this + 12) = v26;
  v27 = v15[10];
  *v26 = *(_QWORD *)v27;
  v26[1] = *(_QWORD *)(v27 + 8);
  *((_WORD *)v26 + 8) = *(_WORD *)(v27 + 16);
  operator delete(v15);
  (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
  memset(&v57[4], 0, 0x24u);
  v28 = *((_QWORD *)this + 12);
  *(_QWORD *)v57 = 0x8000000028LL;
  *(_QWORD *)&v57[16] = v28;
  *(_DWORD *)&v57[8] = 0;
  if ( *((_BYTE *)this + 144) )
  {
    v29 = *(_DWORD *)(v28 + 8) >> 1;
    goto LABEL_46;
  }
  v30 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))*v4)(*v4, &IID_IWMHeaderInfo, &Size[1]);
  if ( v30 < 0 )
  {
    v31 = GetHResult(v30);
    Log(4u, L"Couldn't get WMHeaderInfn for file: %s - %08x (%s)", *((_QWORD *)this + 13), v32, v31);
LABEL_42:
    operator delete(*((void **)this + 12));
    *((_QWORD *)this + 12) = 0;
LABEL_12:
    if ( *v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      *v4 = 0;
    }
    return 0;
  }
  v53[0] = 8;
  v52 = 0;
  v33 = (*(__int64 (__fastcall **)(_QWORD, __int16 *, const wchar_t *, _BYTE *, char *, __int16 *))(**(_QWORD **)&Size[1]
                                                                                                  + 40LL))(
          *(_QWORD *)&Size[1],
          &v52,
          L"Duration",
          v56,
          (char *)this + 88,
          v53);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&Size[1] + 16LL))(*(_QWORD *)&Size[1]);
  if ( v33 < 0 )
  {
    v34 = GetHResult(v33);
    Log(4u, L"Couldn't get duration attribute: %s - %08x (%s)", *((_QWORD *)this + 13), (unsigned int)v33, v34);
    goto LABEL_42;
  }
  v29 = (int)(float)((float)((float)(int)*((_QWORD *)this + 11) / 10000000.0)
                   * (float)*(int *)(*((_QWORD *)this + 12) + 8LL));
LABEL_46:
  *(_DWORD *)&v57[8] = v29;
  *((_DWORD *)this + 12) = v29;
  if ( (*(int (__fastcall **)(_QWORD, _BYTE *, char *, _QWORD))(**((_QWORD **)g_pAudio + 2) + 24LL))(
         *((_QWORD *)g_pAudio + 2),
         v57,
         (char *)this + 136,
         0) < 0 )
    goto LABEL_42;
  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, size_t *))(*(_QWORD *)*v4 + 168LL))(*v4, 0, &v49);
  v36 = v49;
  if ( v35 < 0 )
    v36 = 0;
  LODWORD(v49) = v36;
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)*v4 + 176LL))(*v4, 0, &v51);
  v38 = v51;
  if ( v37 < 0 )
    v38 = 0;
  v51 = v38;
  if ( (unsigned int)v49 <= (unsigned int)v38 )
  {
    *((_QWORD *)this + 10) = operator new[](v38);
    v39 = v51;
  }
  else
  {
    *((_QWORD *)this + 10) = operator new[]((unsigned int)v49);
    v39 = v49;
  }
  v40 = *((_BYTE *)this + 52) == 1;
  *((_DWORD *)this + 15) = v39;
  if ( v40 )
  {
    v41 = operator new[](4u);
    *((_QWORD *)this + 19) = v41;
    if ( !v41 )
      return 0;
    *v41 = **((_DWORD **)this + 9);
  }
  v42 = *((_BYTE *)this + 52);
  *((_BYTE *)this + 52) = 1;
  ResourceWMA::VerifyBufferCount(this, v42);
  if ( v42 != *((_BYTE *)this + 52) )
  {
    LODWORD(v48) = v42;
    Log(4u, 726, "ResourceWMA.cpp", L"Couldn't create %d buffers for %s", v48, *((_QWORD *)this + 4));
    return 0;
  }
  ResourceWMA::FillBuffer(this, 0, *((_DWORD *)this + 12));
  for ( i = 0; i < *((unsigned __int8 *)this + 52); Audio::UpdateVolume(g_pAudio, this, i++) )
    ;
  if ( *((_BYTE *)this + 144) )
  {
    v44 = g_pAudio;
    v45 = *((_DWORD *)g_pAudio + 9);
    ++*((_DWORD *)g_pAudio + 8);
    if ( *((_DWORD *)v44 + 8) > v45 )
    {
      v46 = *((_DWORD *)v44 + 10) + v45;
      *((_DWORD *)v44 + 9) = v46;
      v47 = realloc(*((void **)v44 + 6), 8 * v46);
      if ( !v47 )
      {
        CheckAllocation(0);
        return 1;
      }
      *((_QWORD *)v44 + 6) = v47;
    }
    *(_QWORD *)(*((_QWORD *)v44 + 6) + 8LL * (unsigned int)(*((_DWORD *)v44 + 8) - 1)) = this;
  }
  return 1;
}

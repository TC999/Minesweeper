char __fastcall Audio::Initialize(Audio *this)
{
  Audio *v1; // rbx
  HRESULT v2; // ecx
  const unsigned __int16 *HResult; // rax
  int v4; // ecx
  signed int v5; // ecx
  const unsigned __int16 *v6; // rax
  int v7; // ecx
  DWORD LastError; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]

  v1 = g_pAudio;
  if ( !LoadLibraryW(L"wmvcore.dll") )
  {
    LastError = GetLastError();
    Log(0x1000u, 83, "Audio.cpp", L"wmvcore.dll LoadLibrary failed, winerror %d", LastError);
LABEL_7:
    *((_QWORD *)v1 + 2) = 0;
    return 1;
  }
  v2 = DirectSoundCreate8(0, (LPDIRECTSOUND8 *)v1 + 2, 0);
  if ( v2 < 0 )
  {
    HResult = GetHResult(v2);
    v10 = v4;
    Log(0x1000u, 94, "Audio.cpp", L"DirectSoundCreate8 Failed: %x (%s)", v10, HResult);
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)v1 + 2) + 48LL))(
         *((_QWORD *)v1 + 2),
         g_hWnd,
         *((unsigned int *)v1 + 6));
  if ( v5 < 0 )
  {
    v6 = GetHResult(v5);
    v11 = v7;
    Log(0x1000u, 105, "Audio.cpp", L"SetCoopLevel Failed: %x (%s)", v11, v6);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 2) + 16LL))(*((_QWORD *)v1 + 2));
    goto LABEL_7;
  }
  return 1;
}

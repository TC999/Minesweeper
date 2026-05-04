// Hidden C++ exception states: #wind=2
void __fastcall Game::SaveGameExplorerStatistics(Game *this)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rbx
  unsigned __int16 v5; // bp
  __int64 v6; // rsi
  unsigned __int16 *v7; // rdi
  __int64 v8; // r8
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rdi
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // rdi
  unsigned int PercentWon; // eax
  unsigned __int16 *v16; // rbx
  unsigned __int16 *v17; // rdi
  unsigned __int16 *v18; // rbx
  unsigned __int16 *v19; // rdi
  unsigned __int16 *v20; // rbx
  unsigned __int16 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 *v24; // rbx
  unsigned __int16 v25; // r8
  char v26; // [rsp+88h] [rbp+10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  LPVOID v28; // [rsp+98h] [rbp+20h] BYREF

  if ( g_bstrGDFPath )
  {
    v28 = 0;
    v27 = 0;
    if ( CoCreateInstance(
           &GUID_dbc85a2c_c0dc_4961_b6e2_d28b62c11ad4,
           0,
           0x17u,
           &GUID_aff3ea11_e70e_407d_95dd_35e612c41ce2,
           &v28) >= 0
      && (*(int (__fastcall **)(LPVOID, unsigned __int16 *, _QWORD, char *, __int64 *))(*(_QWORD *)v28 + 24LL))(
           v28,
           g_bstrGDFPath,
           0,
           &v26,
           &v27) >= 0 )
    {
      v2 = LocalizeMessage(L"|7400|WGX_STATS|Beginner");
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *))(*(_QWORD *)v27 + 64LL))(v27, 0, v2);
      LocalFree(v2);
      v3 = LocalizeMessage(L"|7401|WGX_STATS|Intermediate");
      (*(void (__fastcall **)(__int64, __int64, unsigned __int16 *))(*(_QWORD *)v27 + 64LL))(v27, 1, v3);
      LocalFree(v3);
      v4 = LocalizeMessage(L"|7402|WGX_STATS|Advanced");
      (*(void (__fastcall **)(__int64, __int64, unsigned __int16 *))(*(_QWORD *)v27 + 64LL))(v27, 2, v4);
      LocalFree(v4);
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = LocalizeMessage(L"|7403|WGX_STATS|Best Time");
        v8 = *(_QWORD *)(v6 + *((_QWORD *)Game::G + 32));
        if ( *(_DWORD *)(**(_QWORD **)(v8 + 64) + 8LL) || *(_DWORD *)(v8 + 8) )
          v9 = LocalizeMessage(
                 L"|7410|WGX_STATS|%1!d!",
                 *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v6 + *((_QWORD *)Game::G + 32)) + 64LL) + 8LL));
        else
          v9 = LocalizeMessage(L"|7416|WGX_STATS|N/A");
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          0,
          v7,
          v9);
        LocalFree(v7);
        LocalFree(v9);
        v10 = LocalizeMessage(L"|7404|WGX_STATS|Games Played");
        v11 = LocalizeMessage(
                L"|7410|WGX_STATS|%1!d!",
                *(unsigned int *)(*(_QWORD *)(v6 + *((_QWORD *)Game::G + 32)) + 12LL));
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          1,
          v10,
          v11);
        LocalFree(v10);
        LocalFree(v11);
        v12 = LocalizeMessage(L"|7405|WGX_STATS|Games Won");
        v13 = LocalizeMessage(
                L"|7410|WGX_STATS|%1!d!",
                *(unsigned int *)(*(_QWORD *)(v6 + *((_QWORD *)Game::G + 32)) + 8LL));
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          2,
          v12,
          v13);
        LocalFree(v12);
        LocalFree(v13);
        v14 = LocalizeMessage(L"|7406|WGX_STATS|Win Percentage");
        PercentWon = GameStat::GetPercentWon(*(GameStat **)(v6 + *((_QWORD *)Game::G + 32)));
        v16 = LocalizeMessage(L"|7411|WGX_STATS|%1!d!%%", PercentWon);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          3,
          v14,
          v16);
        LocalFree(v14);
        LocalFree(v16);
        v17 = LocalizeMessage(L"|7407|WGX_STATS|Longest Winning Streak");
        v18 = LocalizeMessage(
                L"|7410|WGX_STATS|%1!d!",
                *(unsigned int *)(*(_QWORD *)(v6 + *((_QWORD *)Game::G + 32)) + 28LL));
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          4,
          v17,
          v18);
        LocalFree(v17);
        LocalFree(v18);
        v19 = LocalizeMessage(L"|7408|WGX_STATS|Longest Losing Streak");
        v20 = LocalizeMessage(
                L"|7410|WGX_STATS|%1!d!",
                *(unsigned int *)(*(_QWORD *)(v6 + *((_QWORD *)Game::G + 32)) + 32LL));
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          5,
          v19,
          v20);
        LocalFree(v19);
        LocalFree(v20);
        v21 = LocalizeMessage(L"|7409|WGX_STATS|Current Streak");
        v22 = *((_QWORD *)Game::G + 32);
        v23 = *(_QWORD *)(v6 + v22);
        if ( *(_BYTE *)(v23 + 40) )
          v24 = LocalizeMessage(L"|7410|WGX_STATS|%1!d!", *(unsigned int *)(*(_QWORD *)(v6 + v22) + 36LL));
        else
          v24 = LocalizeMessage(L"|7410|WGX_STATS|%1!d!", (unsigned int)-*(_DWORD *)(v23 + 36));
        (*(void (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)v27 + 88LL))(
          v27,
          v5,
          6,
          v21,
          v24);
        LocalFree(v21);
        LocalFree(v24);
        ++v5;
        v6 += 8;
      }
      while ( v5 < 3u );
      v25 = *(_DWORD *)(*((_QWORD *)this + 3) + 36LL) - 1;
      if ( v25 < 3u )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 104LL))(v27, v25);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 96LL))(v27, 1);
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v28 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 16LL))(v28);
  }
}

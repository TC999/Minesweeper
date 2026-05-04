void __fastcall ResourceWav::VerifyBufferCount(ResourceWav *this, unsigned __int8 a2)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // rbp
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  unsigned __int8 v8; // r8
  __int64 v9; // rdx
  unsigned __int8 v10; // si
  __int64 v11; // rbp
  int v12; // eax

  if ( a2 > *((_BYTE *)this + 52) )
  {
    v4 = a2 - 1;
    if ( a2 != 1 )
    {
      v5 = operator new[](saturated_mul(v4, 8u));
      if ( v5 )
      {
        v6 = operator new[](saturated_mul(v4 + 1, 4u));
        if ( v6 )
        {
          v7 = (_DWORD *)*((_QWORD *)this + 13);
          if ( v7 )
          {
            v8 = 0;
            for ( *v6 = *v7;
                  v8 < *((unsigned __int8 *)this + 52) - 1;
                  v6[v9 + 1] = *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v9 + 4) )
            {
              v9 = v8++;
              v5[v9] = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v9);
            }
          }
          else
          {
            *v6 = 100;
          }
          operator delete(*((void **)this + 11));
          operator delete(*((void **)this + 13));
          *((_QWORD *)this + 13) = v6;
          v10 = *((_BYTE *)this + 52);
          *((_QWORD *)this + 11) = v5;
          while ( 1 )
          {
            if ( v10 >= a2 )
            {
              *((_BYTE *)this + 52) = a2;
              return;
            }
            v11 = v10;
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pAudio + 2) + 40LL))(
                    *((_QWORD *)g_pAudio + 2),
                    *((_QWORD *)this + 12),
                    *((_QWORD *)this + 11) + 8LL * v10 - 8);
            if ( v12 < 0 )
              break;
            ++v10;
            *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v11) = 100;
          }
          Log(
            4u,
            625,
            "ResourceWav.cpp",
            L"Unable to duplicate buffer %d for %s: hr=%x",
            v10,
            *((_QWORD *)this + 4),
            v12);
          *((_BYTE *)this + 52) = v10;
        }
        else
        {
          operator delete(v5);
        }
      }
    }
  }
}

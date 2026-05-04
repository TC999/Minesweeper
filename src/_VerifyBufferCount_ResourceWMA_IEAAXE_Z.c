void __fastcall ResourceWMA::VerifyBufferCount(ResourceWMA *this, unsigned __int8 a2)
{
  unsigned __int8 v4; // di
  _QWORD *v5; // rbp
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  unsigned __int8 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 v11; // di
  __int64 v12; // rbp
  int v13; // eax

  if ( a2 > *((_BYTE *)this + 52) )
  {
    v4 = a2 - 1;
    if ( a2 != 1 )
    {
      v5 = operator new[](saturated_mul(v4, 8u));
      v6 = operator new[](saturated_mul(v4 + 1, 4u));
      v7 = v6;
      if ( v6 && v5 )
      {
        v8 = (_DWORD *)*((_QWORD *)this + 19);
        if ( v8 )
        {
          v9 = 0;
          for ( *v7 = *v8;
                v9 < *((unsigned __int8 *)this + 52) - 1;
                v7[v10 + 1] = *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v10 + 4) )
          {
            v10 = v9++;
            v5[v10] = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v10);
          }
        }
        else
        {
          *v7 = **((_DWORD **)this + 9);
        }
        operator delete(*((void **)this + 16));
        operator delete(*((void **)this + 19));
        *((_QWORD *)this + 19) = v7;
        v11 = *((_BYTE *)this + 52);
        *((_QWORD *)this + 16) = v5;
        while ( 1 )
        {
          if ( v11 >= a2 )
          {
            *((_BYTE *)this + 52) = a2;
            return;
          }
          v12 = v11;
          v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pAudio + 2) + 40LL))(
                  *((_QWORD *)g_pAudio + 2),
                  *((_QWORD *)this + 17),
                  *((_QWORD *)this + 16) + 8LL * v11 - 8);
          if ( v13 < 0 )
            break;
          ++v11;
          *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v12) = *(_DWORD *)(*((_QWORD *)this + 9) + 4 * v12);
        }
        Log(4u, 952, "ResourceWMA.cpp", L"Unable to duplicate buffer %d for %s: hr=%x", v11, *((_QWORD *)this + 4), v13);
        *((_BYTE *)this + 52) = v11;
      }
      else
      {
        CheckAllocation(v6);
        CheckAllocation(v5);
      }
    }
  }
}

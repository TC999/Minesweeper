char __fastcall ResourceWav::Recreate(ResourceWav *this)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebx
  char *v4; // rbp
  unsigned int v5; // r12d
  const unsigned __int16 *v6; // r9
  int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // ecx
  __int64 v16; // rbx
  size_t v17; // r12
  int v18; // ebx
  const void *v19; // rax
  unsigned __int8 v20; // r13
  char Str1[4]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-A4h] BYREF
  int v24; // [rsp+48h] [rbp-A0h] BYREF
  char v25[4]; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned int v26; // [rsp+50h] [rbp-98h] BYREF
  void *v27; // [rsp+58h] [rbp-90h] BYREF
  __int64 v28; // [rsp+60h] [rbp-88h] BYREF
  void *Block; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-78h] BYREF
  __int16 v31; // [rsp+80h] [rbp-68h]
  _BYTE v32[40]; // [rsp+88h] [rbp-60h] BYREF

  if ( !*((_QWORD *)g_pAudio + 2) )
    return 0;
  if ( !Ober_ReadFile(*((const unsigned __int16 **)this + 9), (unsigned __int8 **)&Block, &v26) )
  {
    Log(4u, 65, "ResourceWav.cpp", L"Error loading file: %s", *((_QWORD *)this + 9));
    return 0;
  }
  v2 = v26;
  v3 = 12;
  if ( v26 >= 0xC )
  {
    v4 = (char *)Block;
    *(_DWORD *)Str1 = *(_DWORD *)Block;
    v5 = *((_DWORD *)Block + 1);
    *(_DWORD *)v25 = *((_DWORD *)Block + 2);
    if ( !strncmp(Str1, "RIFF", 4u) && !strncmp(v25, "WAVE", 4u) )
    {
      if ( v5 < v2 )
      {
        v8 = v2 - 4;
        if ( v2 - 4 <= 0xC )
          goto LABEL_14;
        while ( 1 )
        {
          v9 = v3;
          v10 = v3 + 4;
          *(_DWORD *)Str1 = *(_DWORD *)&v4[v9];
          v11 = *(_DWORD *)&v4[v10];
          v12 = (unsigned int)(v10 + 4);
          if ( !strncmp(Str1, "fmt ", 4u) )
            break;
          v3 = v11 + v12;
          if ( v3 >= v8 )
            goto LABEL_14;
        }
        if ( v11 )
        {
          if ( v11 == 16 )
          {
            v31 = 18;
            v30[0] = *(_QWORD *)&v4[v12];
            v13 = *(_QWORD *)&v4[v12 + 8];
            v14 = (unsigned int)(v12 + 16);
            v30[1] = v13;
            while ( 1 )
            {
              if ( (unsigned int)v14 >= v8 )
                goto LABEL_23;
              v15 = *(_DWORD *)&v4[v14];
              v16 = (unsigned int)(v14 + 4);
              *(_DWORD *)Str1 = v15;
              v17 = *(unsigned int *)&v4[v16];
              v18 = v16 + 4;
              if ( !strncmp(Str1, "data", 4u) )
                break;
              v14 = (unsigned int)(v17 + v18);
            }
            if ( !(_DWORD)v17 )
            {
LABEL_23:
              Log(4u, L"ResourceWav, No data chunk in file: %s", *((_QWORD *)this + 9));
              goto LABEL_36;
            }
            if ( (unsigned int)v17 < v2 )
            {
              memset(&v32[4], 0, 0x24u);
              *(_QWORD *)v32 = 0x8000000028LL;
              *(_DWORD *)&v32[8] = v17;
              *((_DWORD *)this + 12) = v17;
              *(_QWORD *)&v32[16] = v30;
              if ( (*(int (__fastcall **)(_QWORD, _BYTE *, char *, _QWORD))(**((_QWORD **)g_pAudio + 2) + 24LL))(
                     *((_QWORD *)g_pAudio + 2),
                     v32,
                     (char *)this + 96,
                     0) < 0 )
              {
                Log(4u, 220, "ResourceWav.cpp", L"Couldnt create the dsound buffer: %s", *((_QWORD *)this + 9));
                operator delete(v4);
                operator delete(*((void **)this + 8));
                return 0;
              }
              if ( *((_BYTE *)this + 52) == 1 )
              {
                v19 = operator new[](4u);
                *((_QWORD *)this + 13) = v19;
                CheckAllocation(v19);
                **((_DWORD **)this + 13) = 100;
              }
              v20 = *((_BYTE *)this + 52);
              *((_BYTE *)this + 52) = 1;
              ResourceWav::VerifyBufferCount(this, v20);
              if ( v20 == *((_BYTE *)this + 52) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **, unsigned int *, __int64 *, int *, _DWORD))(**((_QWORD **)this + 12) + 88LL))(
                  *((_QWORD *)this + 12),
                  0,
                  (unsigned int)v17,
                  &v27,
                  &v23,
                  &v28,
                  &v24,
                  0);
                memcpy(v27, &v4[v18], v17);
                (*(void (__fastcall **)(_QWORD, void *, _QWORD, __int64, int))(**((_QWORD **)this + 12) + 152LL))(
                  *((_QWORD *)this + 12),
                  v27,
                  v23,
                  v28,
                  v24);
                operator delete(v4);
                return 1;
              }
              Log(4u, 253, "ResourceWav.cpp", L"Couldn't create %d buffers for %s", v20, *((_QWORD *)this + 4));
            }
            else
            {
              Log(4u, 197, "ResourceWav.cpp", L"Invalid data chunk size in wav file: %d", v17);
            }
          }
          else
          {
            Log(4u, L"ResourceWav, Format size is incorrect: %s", *((_QWORD *)this + 9));
          }
        }
        else
        {
LABEL_14:
          Log(4u, L"ResourceWav, Format chunk not found: %s", *((_QWORD *)this + 9));
        }
LABEL_36:
        operator delete(v4);
        return 0;
      }
      v6 = L"Corrupted wav file: %s";
      v7 = 97;
    }
    else
    {
      v6 = L"File %s is not a wav file";
      v7 = 89;
    }
    Log(4u, v7, "ResourceWav.cpp", v6, *((_QWORD *)this + 9));
    goto LABEL_36;
  }
  Log(4u, 73, "ResourceWav.cpp", L"File %s is not a wav file", *((_QWORD *)this + 9));
  return 0;
}

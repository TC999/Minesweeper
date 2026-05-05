char __fastcall ResourceWMA::FillBuffer(ResourceWMA *this, __int64 a2, unsigned int a3)
{
  size_t v3; // rsi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  const void *v7; // rdx
  unsigned int v8; // eax
  const void *v9; // rdx
  char *v10; // rcx
  unsigned int v11; // r11d
  char v13[4]; // [rsp+40h] [rbp-48h] BYREF
  char v14[4]; // [rsp+44h] [rbp-44h] BYREF
  void *v15; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h] BYREF
  void *Src; // [rsp+60h] [rbp-28h] BYREF
  char v19[8]; // [rsp+68h] [rbp-20h] BYREF
  char v20[16]; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, void **, unsigned int *, __int64 *, int *, _DWORD))(**((_QWORD **)this + 17) + 88LL))(
    *((_QWORD *)this + 17),
    a2,
    a3,
    &v15,
    &v21,
    &v17,
    &v22,
    0);
  v5 = *((unsigned int *)this + 14);
  v6 = 0;
  if ( (_DWORD)v5 )
  {
    v7 = (const void *)(*((_QWORD *)this + 10) + v5);
    v8 = *((_DWORD *)this + 16) - v5;
    if ( v8 > (unsigned int)v3 )
    {
      memcpy(v15, v7, v3);
      *((_DWORD *)this + 14) += v3;
      goto LABEL_12;
    }
    memcpy(v15, v7, v8);
    v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    *((_DWORD *)this + 14) = 0;
  }
  while ( v6 < v21
       && (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *, char *, char *, char *, char *, _QWORD))(**((_QWORD **)this + 15) + 56LL))(
            *((_QWORD *)this + 15),
            0,
            &v16,
            v20,
            v19,
            v14,
            v13,
            0) >= 0 )
  {
    (*(void (__fastcall **)(__int64, void **, char *))(*(_QWORD *)v16 + 56LL))(v16, &Src, (char *)this + 64);
    memcpy(*((void **)this + 10), Src, *((unsigned int *)this + 16));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( *((_DWORD *)this + 16) )
    {
      v9 = (const void *)*((_QWORD *)this + 10);
      v10 = (char *)v15 + v6;
      if ( *((_DWORD *)this + 16) <= v21 - v6 )
      {
        memcpy(v10, v9, *((unsigned int *)this + 16));
        v6 += *((_DWORD *)this + 16);
      }
      else
      {
        memcpy(v10, v9, v21 - v6);
        v11 = v21 - v6;
        *((_DWORD *)this + 14) = v21 - v6;
        v6 += v11;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15), 0, 0);
    }
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, void *, _QWORD, __int64, int))(**((_QWORD **)this + 17) + 152LL))(
    *((_QWORD *)this + 17),
    v15,
    v21,
    v17,
    v22);
  return 1;
}

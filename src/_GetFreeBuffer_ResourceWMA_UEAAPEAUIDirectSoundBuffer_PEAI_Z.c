struct IDirectSoundBuffer *__fastcall ResourceWMA::GetFreeBuffer(ResourceWMA *this, unsigned int *a2)
{
  unsigned __int8 v5; // di
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(ResourceWMA *))(*(_QWORD *)this + 8LL))(this) )
    return 0;
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 72LL))(*((_QWORD *)this + 17), &v7);
  if ( (v7 & 1) == 0 )
  {
    *a2 = 0;
    return (struct IDirectSoundBuffer *)*((_QWORD *)this + 17);
  }
  v5 = 1;
  if ( *((_BYTE *)this + 52) <= 1u )
  {
LABEL_7:
    *a2 = -1;
    return 0;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v5 - 8);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL))(v6, &v7);
    if ( (v7 & 1) == 0 )
      break;
    if ( ++v5 >= *((_BYTE *)this + 52) )
      goto LABEL_7;
  }
  *a2 = v5;
  return *(struct IDirectSoundBuffer **)(*((_QWORD *)this + 16) + 8LL * v5 - 8);
}

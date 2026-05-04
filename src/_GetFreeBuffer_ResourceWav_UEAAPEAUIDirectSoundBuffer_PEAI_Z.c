struct IDirectSoundBuffer *__fastcall ResourceWav::GetFreeBuffer(ResourceWav *this, unsigned int *a2)
{
  unsigned __int8 v5; // bl
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12), &v7);
  if ( (v7 & 1) != 0 )
  {
    v5 = 1;
    if ( *((_BYTE *)this + 52) <= 1u )
    {
LABEL_6:
      *a2 = -1;
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v5 - 8);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL))(v6, &v7);
        if ( (v7 & 1) == 0 )
          break;
        if ( ++v5 >= *((_BYTE *)this + 52) )
          goto LABEL_6;
      }
      *a2 = v5;
      return *(struct IDirectSoundBuffer **)(*((_QWORD *)this + 11) + 8LL * v5 - 8);
    }
  }
  else
  {
    *a2 = 0;
    return (struct IDirectSoundBuffer *)*((_QWORD *)this + 12);
  }
}

void __fastcall ResourceWMA::SetVolume(ResourceWMA *this, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx

  v3 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(ResourceWMA *))(*(_QWORD *)this + 8LL))(this) == 1 )
  {
    v6 = *((_QWORD *)this + 19);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 4 * v3) = a2;
      Audio::UpdateVolume(g_pAudio, this, v3);
    }
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 9) + 4 * v3) = a2;
  }
}

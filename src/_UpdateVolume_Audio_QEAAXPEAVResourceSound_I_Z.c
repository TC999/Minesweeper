void __fastcall Audio::UpdateVolume(Audio *this, struct ResourceSound *a2, unsigned int a3)
{
  Audio *v3; // rbx
  int v6; // eax
  __int64 v7; // rax

  v3 = g_pAudio;
  v6 = (*(__int64 (__fastcall **)(struct ResourceSound *, _QWORD))(*(_QWORD *)a2 + 120LL))(a2, a3);
  LODWORD(v3) = Audio::GetEffectBufferVolume(v3, v6);
  v7 = (*(__int64 (__fastcall **)(struct ResourceSound *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, a3);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 120LL))(v7, (unsigned int)v3);
}

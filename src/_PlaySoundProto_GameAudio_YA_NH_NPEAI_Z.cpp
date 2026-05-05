bool __fastcall GameAudio::PlaySoundProto(GameAudio *this, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  return GameAudio::aSoundEffects > (unsigned int)this
      && Audio::StartEffect(g_pAudio, **((_DWORD **)Block + (unsigned int)this), 0, a3);
}

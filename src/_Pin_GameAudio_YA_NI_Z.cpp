bool __fastcall GameAudio::Pin(GameAudio *this)
{
  return (unsigned int)this < GameAudio::aSoundEffects
      && *((_QWORD *)Block + (unsigned int)this)
      && ResourceManager::PinResource(g_pResourceManager, **((_DWORD **)Block + (unsigned int)this));
}

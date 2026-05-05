void __fastcall GameAudio::Unpin(GameAudio *this)
{
  if ( (unsigned int)this < GameAudio::aSoundEffects )
  {
    if ( *((_QWORD *)Block + (unsigned int)this) )
      ResourceManager::UnpinResource(g_pResourceManager, **((_DWORD **)Block + (unsigned int)this));
  }
}

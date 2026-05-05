void __fastcall GameAudio::SetSoundVolume(GameAudio *this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edx
  struct ResourceBase *Resource; // rax

  if ( GameAudio::aSoundEffects > (unsigned int)this )
  {
    v5 = **((_DWORD **)Block + (unsigned int)this);
    if ( v5 )
    {
      Resource = ResourceManager::GetResource(g_pResourceManager, v5, 1);
      if ( !Resource )
        SharedDialogs::FatalDialog::Show(0);
      (*(void (__fastcall **)(struct ResourceBase *, _QWORD, _QWORD))(*(_QWORD *)Resource + 128LL))(Resource, a2, a3);
    }
  }
}

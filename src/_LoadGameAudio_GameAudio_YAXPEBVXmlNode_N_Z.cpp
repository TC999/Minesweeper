void __fastcall GameAudio::LoadGameAudio(GameAudio *this, const struct XmlNode *a2)
{
  const struct XmlNode *v3; // rax
  const struct XmlNode *v4; // r14
  unsigned int v5; // esi
  __int64 v6; // r15
  XmlNode *v7; // r13
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  wchar_t *v10; // rdi
  bool v11; // zf
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  struct ResourceBase *Resource; // rax
  _DWORD *v18; // rax
  const struct XmlNode *v19; // rax
  const struct XmlNode *v20; // rbp
  unsigned int v21; // esi
  __int64 v22; // r13
  XmlNode *v23; // r12
  void *v24; // rbx
  int XmlInt; // eax
  wchar_t *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  const wchar_t *v29; // rdi
  wchar_t *v30; // rdi
  __int64 v31; // rcx
  unsigned int v32; // eax
  wchar_t *v33; // rdi
  __int64 v34; // rcx
  unsigned int v35; // r9d
  _DWORD *v36; // rax
  wchar_t String1[4]; // [rsp+28h] [rbp-140h] BYREF
  wchar_t Destination[10]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int16 v39; // [rsp+44h] [rbp-124h] BYREF
  unsigned __int16 v40[116]; // [rsp+48h] [rbp-120h] BYREF

  GameAudio::CleanupGameAudio(this);
  if ( this )
  {
    v3 = XmlNode::XPathElementSearchSingle(this, L"/Music");
    v4 = v3;
    if ( v3 )
    {
      v5 = 0;
      if ( *((_DWORD *)v3 + 6) )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = *(XmlNode **)(v6 + *((_QWORD *)v4 + 5));
          wcscpy_s(Destination, 0xDu, L"Audio\\Music\\");
          if ( XmlNode::GetXmlString(v7, v40, 0x74u, L"/File") )
            break;
          v18 = operator new(8u);
          if ( v18 )
          {
            *v18 = 0;
            v18[1] = 0;
          }
          else
          {
            v18 = 0;
          }
          *v18 = 0;
          v18[1] = 0;
          Array<GameAudio::MusicStream *>::SetAt(&GameAudio::aMusicStreams, v5, v18);
LABEL_28:
          ++v5;
          v6 += 8;
          if ( v5 >= *((_DWORD *)v4 + 6) )
            goto LABEL_29;
        }
        v8 = (unsigned int *)operator new(8u);
        if ( v8 )
        {
          *v8 = 0;
          v8[1] = 0;
        }
        else
        {
          v8 = 0;
        }
        v9 = -1;
        v10 = Destination;
        do
        {
          if ( !v9 )
            break;
          v11 = *v10++ == 0;
          --v9;
        }
        while ( !v11 );
        v12 = ~(_DWORD)v9;
        v13 = v12;
        if ( v12 >= 4 )
        {
          if ( !_wcsicmp(&String1[v12], L"wma") )
          {
            v14 = ResourceWMA::Create(Destination, v13, 1u, 0);
LABEL_17:
            *v8 = v14;
            goto LABEL_19;
          }
          if ( !_wcsicmp(&String1[v13], L"wav") )
          {
            v14 = ResourceWav::Create(Destination, v13, 1u);
            goto LABEL_17;
          }
        }
        Log(0x10u, 111, "GameAudio.cpp", L"Invalid audio source: %s", Destination);
LABEL_19:
        v8[1] = XmlNode::GetXmlInt(v7, L"/Volume", 100);
        Array<GameAudio::MusicStream *>::SetAt(&GameAudio::aMusicStreams, v5, v8);
        if ( *v8 )
        {
          v15 = v8[1];
          if ( GameAudio::aMusicStreams > v5 )
          {
            v16 = **(_DWORD **)((char *)qword_1000A6D20 + v6);
            if ( v16 )
            {
              Resource = ResourceManager::GetResource(g_pResourceManager, v16, 0);
              (*(void (__fastcall **)(struct ResourceBase *, _QWORD, _QWORD))(*(_QWORD *)Resource + 128LL))(
                Resource,
                v15,
                0);
            }
          }
        }
        else
        {
          v8[1] = 0;
        }
        goto LABEL_28;
      }
    }
LABEL_29:
    v19 = XmlNode::XPathElementSearchSingle(this, L"/Sounds");
    v20 = v19;
    if ( v19 )
    {
      v21 = 0;
      if ( *((_DWORD *)v19 + 6) )
      {
        v22 = 0;
        do
        {
          v23 = *(XmlNode **)(v22 + *((_QWORD *)v20 + 5));
          wcscpy_s(Destination, 0xBu, L"Audio\\SFX\\");
          if ( !XmlNode::GetXmlString(v23, &v39, 0x76u, L"/File") )
          {
            v36 = operator new(0xCu);
            if ( v36 )
            {
              *v36 = 0;
              v36[1] = 0;
              v36[2] = 0;
            }
            else
            {
              v36 = 0;
            }
            v36[2] = 0;
            *v36 = 0;
            v36[1] = 0;
            Array<GameAudio::SoundEffect *>::SetAt(&GameAudio::aSoundEffects, v21, v36);
            goto LABEL_59;
          }
          v24 = operator new(0xCu);
          if ( v24 )
          {
            *(_DWORD *)v24 = 0;
            *((_DWORD *)v24 + 1) = 0;
            *((_DWORD *)v24 + 2) = 0;
          }
          else
          {
            v24 = 0;
          }
          XmlInt = XmlNode::GetXmlInt(v23, L"/Buffers", 1);
          v26 = Destination;
          v27 = -1;
          *((_DWORD *)v24 + 2) = XmlInt;
          do
          {
            if ( !v27 )
              break;
            v11 = *v26++ == 0;
            --v27;
          }
          while ( !v11 );
          v28 = (unsigned int)~(_DWORD)v27;
          if ( (unsigned int)v28 >= 4 )
          {
            v29 = &String1[v28];
            if ( !_wcsicmp(v29, L"wma") )
            {
              v30 = Destination;
              v31 = -1;
              do
              {
                if ( !v31 )
                  break;
                v11 = *v30++ == 0;
                --v31;
              }
              while ( !v11 );
              v32 = ResourceWMA::Create(Destination, ~(_DWORD)v31, *((_BYTE *)v24 + 8), 0);
LABEL_50:
              *(_DWORD *)v24 = v32;
              goto LABEL_52;
            }
            if ( !_wcsicmp(v29, L"wav") )
            {
              v33 = Destination;
              v34 = -1;
              do
              {
                if ( !v34 )
                  break;
                v11 = *v33++ == 0;
                --v34;
              }
              while ( !v11 );
              v32 = ResourceWav::Create(Destination, ~(_DWORD)v34, *((_BYTE *)v24 + 8));
              goto LABEL_50;
            }
          }
          Log(0x10u, 178, "GameAudio.cpp", L"Invalid audio source: %s", Destination);
LABEL_52:
          *((_DWORD *)v24 + 1) = XmlNode::GetXmlInt(v23, L"/Volume", 100);
          Array<GameAudio::SoundEffect *>::SetAt(&GameAudio::aSoundEffects, v21, v24);
          if ( *(_DWORD *)v24 )
          {
            GameAudio::SetSoundVolume((GameAudio *)v21, *((_DWORD *)v24 + 1), 0, v35);
          }
          else
          {
            *((_DWORD *)v24 + 2) = 0;
            *((_DWORD *)v24 + 1) = 0;
          }
LABEL_59:
          ++v21;
          v22 += 8;
        }
        while ( v21 < *((_DWORD *)v20 + 6) );
      }
    }
  }
}

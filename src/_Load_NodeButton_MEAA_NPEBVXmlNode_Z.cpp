// Hidden C++ exception states: #wind=2
char __fastcall NodeButton::Load(NodeButton *this, const wchar_t **a2)
{
  const wchar_t *v5; // rax
  AnimationDescriptor *v6; // rax
  AnimationDescriptor *v7; // rbp
  float *v8; // rax
  float *v9; // rsi
  _DWORD *v10; // r8
  int v11; // eax
  AnimationDescriptor *v12; // rax
  AnimationDescriptor *v13; // rbp
  float *v14; // rax
  float *v15; // rsi
  const struct Affector_Base *v16; // rax
  const struct Affector_Base *v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax
  RenderManager *v20; // rax

  if ( a2 )
  {
    if ( NodeSprite::Load(this, a2) )
    {
      *((_DWORD *)this + 118) = XmlNode::GetXmlUInt((XmlNode *)a2, L"/ButtonFPS", 0x1Eu);
      if ( *((_DWORD *)this + 106) == 3 )
      {
        v6 = (AnimationDescriptor *)operator new(0x38u);
        if ( v6 )
          v7 = AnimationDescriptor::AnimationDescriptor(v6);
        else
          v7 = 0;
        if ( v7 )
        {
          v8 = (float *)operator new(0x20u);
          v9 = v8;
          if ( v8 )
          {
            *((_QWORD *)v8 + 1) = 0;
            *(_QWORD *)v8 = &Animator_LinearAbsolute::`vftable';
          }
          else
          {
            v9 = 0;
          }
          if ( v9 )
          {
            v10 = operator new(0x38u);
            if ( v10 )
            {
              v10[8] = 0;
              v10[9] = 0;
              v10[10] = 16;
              *((_QWORD *)v10 + 6) = 0;
              v10[6] = 0;
              *(_QWORD *)v10 = &Affector_CurrentFrame::`vftable';
            }
            else
            {
              v10 = 0;
            }
            if ( v10 )
            {
              v9[6] = (float)*(int *)(*((_QWORD *)this + 52) + 44LL) / (float)*((int *)this + 118);
              v9[4] = 0.0;
              *((_DWORD *)v9 + 5) = *(_DWORD *)(*((_QWORD *)this + 52) + 44LL) - 1;
              AnimationDescriptor::AddAnimator(v7, (const struct Animator_Base *)v9, (const struct Affector_Base *)v10);
              v11 = ResourceAnimation::Create(v7);
              *((_DWORD *)this + 123) = v11;
              if ( v11 )
              {
                v12 = (AnimationDescriptor *)operator new(0x38u);
                if ( v12 )
                  v13 = AnimationDescriptor::AnimationDescriptor(v12);
                else
                  v13 = 0;
                if ( v13 )
                {
                  v14 = (float *)operator new(0x20u);
                  v15 = v14;
                  if ( v14 )
                  {
                    *((_QWORD *)v14 + 1) = 0;
                    *(_QWORD *)v14 = &Animator_LinearAbsolute::`vftable';
                  }
                  else
                  {
                    v15 = 0;
                  }
                  if ( v15 )
                  {
                    v16 = (const struct Affector_Base *)operator new(0x38u);
                    v17 = v16;
                    if ( v16 )
                    {
                      *((_DWORD *)v16 + 8) = 0;
                      *((_DWORD *)v16 + 9) = 0;
                      *((_DWORD *)v16 + 10) = 16;
                      *((_QWORD *)v16 + 6) = 0;
                      *((_DWORD *)v16 + 6) = 0;
                      *(_QWORD *)v16 = &Affector_CurrentFrame::`vftable';
                    }
                    else
                    {
                      v17 = 0;
                    }
                    if ( v17 )
                    {
                      v15[6] = (float)*(int *)(*((_QWORD *)this + 52) + 76LL) / (float)*((int *)this + 118);
                      v15[4] = 0.0;
                      *((_DWORD *)v15 + 5) = *(_DWORD *)(*((_QWORD *)this + 52) + 76LL) - 1;
                      AnimationDescriptor::AddAnimator(v13, (const struct Animator_Base *)v15, v17);
                      v18 = ResourceAnimation::Create(v13);
                      *((_DWORD *)this + 121) = v18;
                      if ( v18 )
                      {
                        *((_DWORD *)this + 120) = NodeBase::AddAnimation(this, v18);
                        v19 = NodeBase::AddAnimation(this, *((_DWORD *)this + 123));
                        *((_DWORD *)this + 122) = v19;
                        NodeBase::StopAnimation(this, v19);
                        NodeBase::StopAnimation(this, *((unsigned int *)this + 120));
                        UserInterface::RegisterNodeForFocus(g_pUserInterface, this);
                        if ( *((_BYTE *)this + 501) && *((_DWORD *)this + 99) )
                        {
                          *((_DWORD *)this + 99) = 0;
                          v20 = g_pRenderManager;
                          *((_BYTE *)g_pRenderManager + 20) = 1;
                          *((_BYTE *)v20 + 88) = 1;
                        }
                        return 1;
                      }
                      else
                      {
                        Log(0x100u, 566, "NodeButton.cpp", L"Couldn't create down animation resource");
                        AnimationDescriptor::`scalar deleting destructor'(v13);
                        ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 123));
                        return 0;
                      }
                    }
                    else
                    {
                      CheckAllocation(0);
                      ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 123));
                      (**(void (__fastcall ***)(float *, __int64))v15)(v15, 1);
                      AnimationDescriptor::`scalar deleting destructor'(v13);
                      return 0;
                    }
                  }
                  else
                  {
                    CheckAllocation(0);
                    ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 123));
                    AnimationDescriptor::`scalar deleting destructor'(v13);
                    return 0;
                  }
                }
                else
                {
                  CheckAllocation(0);
                  ResourceManager::DestroyResource(g_pResourceManager, *((_DWORD *)this + 123));
                  return 0;
                }
              }
              else
              {
                Log(0x100u, 518, "NodeButton.cpp", L"Couldn't create enter animation resource");
                AnimationDescriptor::`scalar deleting destructor'(v7);
                return 0;
              }
            }
            else
            {
              CheckAllocation(0);
              (**(void (__fastcall ***)(float *, __int64))v9)(v9, 1);
              AnimationDescriptor::`scalar deleting destructor'(v7);
              return 0;
            }
          }
          else
          {
            CheckAllocation(0);
            AnimationDescriptor::`scalar deleting destructor'(v7);
            return 0;
          }
        }
        else
        {
          CheckAllocation(0);
          return 0;
        }
      }
      else
      {
        Log(0x100u, 465, "NodeButton.cpp", L"Button xml doesn't contain 3 sources (%d found)", *((_DWORD *)this + 106));
        return 0;
      }
    }
    else
    {
      v5 = L"<no xml source file>";
      if ( a2[12] )
        v5 = a2[12];
      Log(0x100u, 447, "NodeButton.cpp", L"Unable to load sprite xml: %s", v5);
      return 0;
    }
  }
  else
  {
    Log(0x100u, 440, "NodeButton.cpp", L"Null xml source passed in to NodeButton::Load()");
    return 0;
  }
}

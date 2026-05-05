void __fastcall NodeEmitter::Render(NodeEmitter *this, unsigned int a2)
{
  NodeEmitter *v4; // rax
  unsigned int v5; // r12d
  int v6; // r11d
  unsigned int v7; // ebp
  Material *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // eax
  float v14; // xmm0_4
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  float v18; // xmm1_4
  int v19; // eax
  int v20; // eax
  float v21; // xmm1_4
  int v22; // [rsp+60h] [rbp-28h] BYREF
  int v23; // [rsp+64h] [rbp-24h]
  int v24; // [rsp+68h] [rbp-20h]
  int v25; // [rsp+6Ch] [rbp-1Ch]

  v4 = this;
  while ( *((_BYTE *)v4 + 41) )
  {
    v4 = (NodeEmitter *)*((_QWORD *)v4 + 17);
    if ( !v4 )
    {
      if ( *((_DWORD *)this + 145) != 3 && *((_DWORD *)this + 118) )
      {
        if ( a2 == *((_DWORD *)this + 15) )
        {
          v5 = *(_DWORD *)(32LL * *((unsigned int *)this + 107) + *((_QWORD *)this + 52));
          NodeSprite::UpdateCurrentUVs(this);
          v6 = *((_DWORD *)this + 90);
          if ( !v6 )
            v6 = 1;
          v7 = 0;
          v8 = *(Material **)(*((_QWORD *)g_pRenderManager + 7) + 8LL * v6);
          if ( *((_DWORD *)this + 118) )
          {
            v9 = 0;
            do
            {
              v10 = *(_QWORD *)(v9 + *((_QWORD *)this + 61));
              if ( *(_BYTE *)(v10 + 24) != 1 )
              {
                v11 = *(float *)(v10 + 28);
                v12 = *(float *)(v10 + 32);
                v13 = (int)v11;
                v14 = v11 + *(float *)(v10 + 56);
                if ( *((_BYTE *)this + 577) )
                {
                  v15 = *((_DWORD *)this + 66);
                  v16 = *((_DWORD *)this + 67);
                  v22 = v15 + v13;
                  v17 = (int)v12;
                  v18 = v12 + *(float *)(v10 + 60);
                  v23 = v16 + v17;
                  v24 = v15 + (int)v14;
                  v19 = v16 + (int)v18;
                }
                else
                {
                  v22 = v13;
                  v20 = (int)v12;
                  v21 = v12 + *(float *)(v10 + 60);
                  v23 = v20;
                  v24 = (int)v14;
                  v19 = (int)v21;
                }
                v25 = v19;
                Material::Render(
                  v8,
                  &v22,
                  (const float *)this + 108,
                  v5,
                  *(_DWORD *)(*(_QWORD *)(v9 + *((_QWORD *)this + 61)) + 52LL),
                  *(float *)(*(_QWORD *)(v9 + *((_QWORD *)this + 61)) + 64LL),
                  *((_DWORD *)this + 101),
                  0,
                  1,
                  0,
                  0,
                  0);
              }
              ++v7;
              v9 += 8;
            }
            while ( v7 < *((_DWORD *)this + 118) );
          }
        }
        NodeBase::Render(this, a2);
      }
      return;
    }
  }
}

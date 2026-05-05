void __fastcall NodeSprite::UpdateCurrentUVs(NodeSprite *this)
{
  struct ResourceBase *Resource; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r11
  int v6; // r8d
  int v7; // edi
  unsigned int v8; // r10d
  unsigned int v9; // eax
  BOOL v10; // r8d
  int v11; // eax
  int v12; // et2
  int v13; // r10d
  int v14; // r9d
  bool v15; // zf
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  int v23; // [rsp+30h] [rbp+8h] BYREF
  int v24; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 464) )
  {
    Resource = ResourceManager::GetResource(
                 g_pResourceManager,
                 *(_DWORD *)(32LL * *((unsigned int *)this + 107) + *((_QWORD *)this + 52)),
                 0);
    if ( Resource )
    {
      (*(void (__fastcall **)(struct ResourceBase *, int *, int *))(*(_QWORD *)Resource + 72LL))(Resource, &v23, &v24);
      v3 = *((_QWORD *)this + 52);
      v4 = *((_DWORD *)this + 96);
      v5 = 32LL * *((unsigned int *)this + 107);
      v6 = *(_DWORD *)(v5 + v3 + 12);
      v7 = *(_DWORD *)(v5 + v3 + 8);
      v8 = *(_DWORD *)(v5 + v3 + 16);
      v9 = v6 - 1;
      if ( v4 < v6 - 1 )
        v9 = *((_DWORD *)this + 96);
      if ( *((_BYTE *)this + 414) )
        v9 = v6 - v4 - 1;
      v10 = *(_BYTE *)(v5 + v3 + 20) != 0;
      v12 = v9 % v8;
      v11 = v9 / v8;
      v13 = *(_DWORD *)(v5 + v3 + 4) + v10 + v12 * (*((_DWORD *)this + 113) + 2 * v10);
      v14 = *((_DWORD *)this + 114);
      v15 = *((_BYTE *)this + 400) == 0;
      v16 = (float)v23;
      v17 = (float)v24;
      v18 = (float)v13 / (float)v23;
      v19 = (float)(v7 + v10 + v11 * (v14 + 2 * v10)) / (float)v24;
      v20 = (float)(*((_DWORD *)this + 113) + v13);
      *((float *)this + 108) = v18;
      v21 = v20 / v16;
      *((float *)this + 109) = v19;
      v22 = (float)(v14 + v7 + v10 + v11 * (v14 + 2 * v10)) / v17;
      *((float *)this + 110) = v21;
      *((float *)this + 111) = v22;
      if ( !v15 )
      {
        *((float *)this + 108) = v21;
        *((float *)this + 110) = v18;
      }
      if ( *((_BYTE *)this + 401) )
      {
        *((float *)this + 109) = v22;
        *((float *)this + 111) = v19;
      }
    }
  }
}

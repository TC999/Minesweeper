void __fastcall NodeBase::UpdateZero(NodeBase *this)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // edx
  unsigned int v5; // edx
  unsigned int v6; // edi
  float v7; // xmm0_4
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebp
  float v12; // xmm1_4
  __int64 v13; // rdx
  int v14; // r11d
  int v15; // r8d
  __int64 v16; // rsi
  float v17; // [rsp+20h] [rbp-58h] BYREF
  float v18; // [rsp+24h] [rbp-54h]
  int v19; // [rsp+28h] [rbp-50h]
  _BYTE v20[64]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 2);
  v2 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)this + 4) * *((_DWORD *)this + 7);
  *((_DWORD *)this + 66) = v1;
  *((_DWORD *)this + 67) = v2;
  v5 = *((_DWORD *)this + 6) * v3;
  v6 = 0;
  v7 = *((float *)this + 9);
  *((float *)this + 70) = v7;
  *((_DWORD *)this + 68) = v5 / 0x2710 + v1;
  v8 = *((_QWORD *)this + 17);
  v9 = *((_DWORD *)this + 6) * *((_DWORD *)this + 5) * *((_DWORD *)this + 8) / 0x2710u + v2;
  *((_DWORD *)this + 69) = v9;
  if ( v8 )
  {
    v10 = v5 / 0x2710;
    v11 = v9 - v2;
    *((float *)this + 70) = v7 + *(float *)(v8 + 280);
    v18 = (float)v2;
    v12 = *(float *)(v8 + 280);
    v17 = (float)v1;
    v19 = 0;
    off_1000A6778((struct D3DXMATRIX *)v20, v12);
    off_1000A66A0((struct D3DXVECTOR3 *)&v17, (const struct D3DXVECTOR3 *)&v17, (const struct D3DXMATRIX *)v20);
    v13 = *((_QWORD *)this + 17);
    v14 = (int)v17;
    v15 = (int)v18;
    *((_DWORD *)this + 66) = (int)v17 + *(_DWORD *)(v13 + 264);
    *((_DWORD *)this + 67) = v15 + *(_DWORD *)(v13 + 268);
    *((_DWORD *)this + 68) = v14 + v10 + *(_DWORD *)(v13 + 264);
    *((_DWORD *)this + 69) = v15 + v11 + *(_DWORD *)(v13 + 268);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v16 = 0;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + *((_QWORD *)this + 12)) + 8LL))(*(_QWORD *)(v16 + *((_QWORD *)this + 12)));
      ++v6;
      v16 += 8;
    }
    while ( v6 < *((_DWORD *)this + 20) );
  }
}

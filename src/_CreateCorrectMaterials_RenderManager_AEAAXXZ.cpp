void __fastcall RenderManager::CreateCorrectMaterials(RenderManager *this)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rax

  v2 = operator new(0x40u);
  if ( v2 )
  {
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 16;
    *((_QWORD *)v2 + 3) = 0;
    v2[8] = 0;
    *(_QWORD *)v2 = &MaterialAlpha::`vftable';
    *((_QWORD *)v2 + 5) = 0;
    *((_QWORD *)v2 + 6) = 0;
    v2[14] = 1000;
  }
  else
  {
    v2 = 0;
  }
  *((_QWORD *)this + 12) = v2;
  v3 = operator new(0x40u);
  if ( v3 )
  {
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 16;
    *((_QWORD *)v3 + 3) = 0;
    v3[8] = 0;
    *(_QWORD *)v3 = &MaterialAlpha::`vftable';
    *((_QWORD *)v3 + 5) = 0;
    *((_QWORD *)v3 + 6) = 0;
    v3[14] = 1000;
  }
  else
  {
    v3 = 0;
  }
  *((_QWORD *)this + 13) = v3;
  CheckAllocation(v3);
  v4 = operator new(0x40u);
  if ( v4 )
  {
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 16;
    *((_QWORD *)v4 + 3) = 0;
    v4[8] = 0;
    *((_QWORD *)v4 + 5) = 0;
    *((_QWORD *)v4 + 6) = 0;
    v4[14] = 1000;
    *(_QWORD *)v4 = &MaterialAdditive::`vftable';
  }
  else
  {
    v4 = 0;
  }
  *((_QWORD *)this + 14) = v4;
  CheckAllocation(v4);
}

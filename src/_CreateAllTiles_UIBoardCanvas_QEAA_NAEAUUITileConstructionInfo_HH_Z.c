// Hidden C++ exception states: #wind=2
char __fastcall UIBoardCanvas::CreateAllTiles(void **this, struct UITileConstructionInfo *a2, int a3, int a4)
{
  int v8; // esi
  __int64 v9; // rbp
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  void *v14; // rax
  int i; // ebx
  UITile *v16; // rax
  UITile *v17; // rax
  _BYTE v19[16]; // [rsp+28h] [rbp-40h] BYREF
  void *Block; // [rsp+38h] [rbp-30h]

  Log(0x1000000u, L"Create tiles");
  UIBoardCanvas::cleanupTiles((UIBoardCanvas *)this);
  Str::FromNumber(v19, *((unsigned int *)a2 + 67));
  v8 = 0;
  if ( a3 > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = operator new(0x18u);
      v11 = v10;
      if ( v10 )
      {
        *v10 = 0;
        v10[1] = 0;
        v10[2] = a4;
        *((_QWORD *)v10 + 2) = 0;
      }
      else
      {
        v11 = 0;
      }
      ++*((_DWORD *)this + 2);
      v12 = *((_DWORD *)this + 3);
      if ( *((_DWORD *)this + 2) <= v12 )
        goto LABEL_10;
      v13 = *((_DWORD *)this + 4) + v12;
      *((_DWORD *)this + 3) = v13;
      v14 = realloc(this[3], 8LL * v13);
      if ( v14 )
        break;
      CheckAllocation(0);
LABEL_11:
      for ( i = 0; i < a4; ++i )
      {
        v16 = (UITile *)operator new(0xA0u);
        if ( v16 )
          v17 = UITile::UITile(v16, a2, v8, i);
        else
          v17 = 0;
        Array<IEventListener *>::Add(*(_QWORD *)((char *)this[3] + v9), (__int64)v17);
      }
      ++v8;
      v9 += 8;
      if ( v8 >= a3 )
        goto LABEL_17;
    }
    this[3] = v14;
LABEL_10:
    *((_QWORD *)this[3] + (unsigned int)(*((_DWORD *)this + 2) - 1)) = v11;
    goto LABEL_11;
  }
LABEL_17:
  operator delete(Block);
  return 1;
}

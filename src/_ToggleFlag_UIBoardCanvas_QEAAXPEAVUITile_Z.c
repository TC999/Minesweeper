void __fastcall UIBoardCanvas::ToggleFlag(UIBoardCanvas *this, struct UITile *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r11
  Game *v7; // rdx
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 7);
  v3 = *((unsigned int *)a2 + 13);
  v4 = *((unsigned int *)a2 + 12);
  v5 = *(_QWORD *)(v2 + 80);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v4) + 16LL);
  switch ( *(_DWORD *)(v6 + 4 * v3) )
  {
    case 9:
      v7 = Game::G;
      *(_DWORD *)(v6 + 4 * v3) = 10;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 24LL) + 8 * v4) + 16LL) + 8 * v3)
               + 64LL) = 1;
      ++*(_DWORD *)(v2 + 20);
      goto LABEL_12;
    case 0xA:
      --*(_DWORD *)(v2 + 20);
      v7 = Game::G;
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v4) + 16LL);
      if ( *((_BYTE *)Game::G + 44) )
      {
        if ( *(_DWORD *)(v8 + 4 * v3) == 11 )
          goto LABEL_12;
        *(_DWORD *)(v8 + 4 * v3) = 11;
      }
      else
      {
        if ( *(_DWORD *)(v8 + 4 * v3) == 9 )
          goto LABEL_12;
        *(_DWORD *)(v8 + 4 * v3) = 9;
      }
LABEL_5:
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 24LL) + 8 * v4) + 16LL) + 8 * v3)
               + 64LL) = 1;
LABEL_12:
      *((_BYTE *)v7 + 273) = 1;
      break;
    case 0xB:
      v7 = Game::G;
      *(_DWORD *)(v6 + 4 * v3) = 9;
      goto LABEL_5;
  }
  *((_BYTE *)this + 276) = 1;
}

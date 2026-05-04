void __fastcall Board::ToXML(Board *this, struct SerialXML *a2)
{
  Board *v3; // rsi
  float v4; // xmm6_4
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r12d
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned int v17; // ebx
  const unsigned __int16 *v18; // rdx
  _BYTE v19[16]; // [rsp+28h] [rbp-50h] BYREF
  void *Block; // [rsp+38h] [rbp-40h]

  v3 = this;
  SerialXML::WriteStartTag(a2, L"Board", 1);
  SerialXML::ToXML(a2, 3, L"SaveVersion");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 2), L"Mines");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 3), L"Height");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 4), L"Width");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 9), L"Difficulty");
  v4 = *((float *)v3 + 8);
  SerialXML::WriteStartTag(a2, L"TimeElapsed", 0);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"%f", v4);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"TimeElapsed");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 5), L"FlagsPlaced");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 6), L"RevealedSquares");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 7), L"RevealsAttempted");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 10), L"FirstXClickPos");
  SerialXML::ToXML(a2, *((_DWORD *)v3 + 11), L"FirstYClickPos");
  v5 = *((_DWORD *)v3 + 12);
  SerialXML::WriteStartTag(a2, L"RandSeed", 0);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"%d", v5);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"RandSeed");
  v6 = *((_QWORD *)v3 + 10);
  SerialXML::WriteStartTag(a2, L"BoardTiles", 0);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
  v7 = 0;
  if ( *(_DWORD *)v6 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + v8);
      v10 = 0;
      if ( *(_DWORD *)v9 )
      {
        v11 = 0;
        do
        {
          v12 = Str::FromNumber(v19, *(unsigned int *)(v11 + *(_QWORD *)(v9 + 16)));
          Str::AppendF((struct SerialXML *)((char *)a2 + 8), *(const unsigned __int16 **)(v12 + 16));
          operator delete(Block);
          if ( ++v10 < *(_DWORD *)v9 )
            Str::AppendF((struct SerialXML *)((char *)a2 + 8), L",");
          v11 += 4;
        }
        while ( v10 < *(_DWORD *)v9 );
      }
      Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
      ++v7;
      v8 += 8;
    }
    while ( v7 < *(_DWORD *)v6 );
    v3 = this;
  }
  SerialXML::PrintTabs(a2);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"BoardTiles");
  v13 = *((_QWORD *)v3 + 11);
  SerialXML::WriteStartTag(a2, L"BoardMines", 0);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
  v14 = 0;
  if ( *(_DWORD *)v13 )
  {
    v15 = 0;
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + v15);
      v17 = 0;
      while ( v17 < *(_DWORD *)v16 )
      {
        v18 = L"F";
        if ( *(_BYTE *)(v17 + *(_QWORD *)(v16 + 16)) )
          v18 = L"T";
        Str::AppendF((struct SerialXML *)((char *)a2 + 8), v18);
        if ( ++v17 < *(_DWORD *)v16 )
          Str::AppendF((struct SerialXML *)((char *)a2 + 8), L",");
      }
      Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"\n");
      ++v14;
      v15 += 8;
    }
    while ( v14 < *(_DWORD *)v13 );
  }
  SerialXML::PrintTabs(a2);
  Str::AppendF((struct SerialXML *)((char *)a2 + 8), L"</%s>\n", L"BoardMines");
  SerialXML::WriteEndTag(a2, L"Board", 1);
}

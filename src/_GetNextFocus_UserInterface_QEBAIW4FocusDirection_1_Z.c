__int64 __fastcall UserInterface::GetNextFocus(__int64 a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r15d
  int v6; // r13d
  int v7; // r14d
  int v8; // r12d
  _BYTE *v9; // rbx
  __int64 GameEvent; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned int *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned int *v17; // rbx
  bool v18; // sf
  bool v19; // of
  bool v20; // zf
  bool v21; // sf
  bool v22; // of
  char v23; // al
  int v24; // kr00_4
  int v25; // kr04_4
  int v26; // kr08_4
  int v27; // kr0C_4
  int v28; // r11d
  int v29; // eax
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // [rsp+20h] [rbp-58h]
  DWORD pdwDefaultLayout; // [rsp+80h] [rbp+8h] BYREF
  int v34; // [rsp+88h] [rbp+10h]
  _DWORD *v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v34 = a2;
  v3 = *(unsigned int *)(a1 + 24);
  v4 = 0;
  v35 = 0;
  if ( (unsigned __int8)SortedListI<NodeBase *>::TryGet(a1, v3, &v35) == 1
    || (unsigned __int8)SortedListI<NodeBase *>::TryGet(a1, *(unsigned int *)(a1 + 228), &v35) == 1 )
  {
    v9 = v35;
    v6 = v35[66];
    v7 = v35[67];
    v8 = v35[4];
    pdwDefaultLayout = v35[5];
  }
  else
  {
    v6 = 0;
    v7 = 0;
    pdwDefaultLayout = 0;
    GetProcessDefaultLayout(&pdwDefaultLayout);
    if ( (pdwDefaultLayout & 1) != 0 )
      v8 = *(_DWORD *)(a1 + 256);
    else
      v8 = 0;
    v9 = v35;
    pdwDefaultLayout = 0;
  }
  if ( v9 && v9[74] )
  {
    GameEvent = Event::CreateGameEvent(21);
    *(_DWORD *)(GameEvent + 28) = -1;
    *(_DWORD *)(GameEvent + 24) = a2;
    v11 = GameEvent;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 16LL))(v9, GameEvent);
    v12 = *(_DWORD *)(v11 + 28);
    (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1);
    return v12;
  }
  v14 = 0;
  v15 = Event::CreateGameEvent(16);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v16 = 0;
    v32 = 0;
    while ( 1 )
    {
      v17 = *(unsigned int **)(v16 + *(_QWORD *)(a1 + 8));
      *(_BYTE *)(v15 + 24) = 0;
      (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v17 + 16LL))(v17, v15);
      if ( !*(_BYTE *)(v15 + 24) )
        goto LABEL_32;
      if ( !v34 )
        break;
      switch ( v34 )
      {
        case 1:
          v22 = __OFSUB__(v17[69], v7);
          v20 = v17[69] == v7;
          v21 = (int)(v17[69] - v7) < 0;
LABEL_21:
          v23 = !(v21 ^ v22 | v20);
LABEL_24:
          if ( v23 )
            goto LABEL_32;
          break;
        case 2:
          v22 = __OFSUB__(v17[68], v6);
          v20 = v17[68] == v6;
          v21 = (int)(v17[68] - v6) < 0;
          goto LABEL_21;
        case 3:
          v19 = __OFSUB__(v17[66], v8 + v6);
          v18 = (int)(v17[66] - (v8 + v6)) < 0;
          goto LABEL_23;
      }
      if ( !v14 )
        goto LABEL_26;
      v24 = v17[66] + v17[68];
      v25 = v17[67] + v17[69];
      v26 = v14[66] + v14[68];
      v27 = v14[67] + v14[69];
      v28 = v26 / 2 - v24 / 2;
      v36 = (v26 / 2 + v24 / 2) / 2;
      LODWORD(v35) = (v27 / 2 + v25 / 2) / 2;
      v29 = v25 / 2 - v27 / 2;
      v30 = v29 * (v25 / 2 - (_DWORD)v35);
      v31 = v28 * (v24 / 2 - v36);
      if ( (int)(v29 * (((pdwDefaultLayout + 2 * v7) >> 1) - (_DWORD)v35)
               - v28 * (((unsigned int)(v8 + 2 * v6) >> 1) - v36)) <= 0 )
      {
        if ( v31 - v30 > 0 )
          v14 = v17;
        goto LABEL_32;
      }
      if ( v31 - v30 < 0 )
LABEL_26:
        v14 = v17;
LABEL_32:
      ++v4;
      v16 = v32 + 8;
      v32 += 8;
      if ( v4 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_33;
    }
    v19 = __OFSUB__(v17[67], v7 + pdwDefaultLayout);
    v18 = (int)(v17[67] - (v7 + pdwDefaultLayout)) < 0;
LABEL_23:
    v23 = v18 ^ v19;
    goto LABEL_24;
  }
LABEL_33:
  if ( v15 )
    (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1);
  if ( v14 )
    return v14[56];
  else
    return 0xFFFFFFFFLL;
}

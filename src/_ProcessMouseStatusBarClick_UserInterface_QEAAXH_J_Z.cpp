void __fastcall UserInterface::ProcessMouseStatusBarClick(UserInterface *this, unsigned int a2, char a3)
{
  UserInterface *v3; // rdi
  __int64 GameEvent; // rax
  int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rsi

  v3 = g_pUserInterface;
  if ( g_pUserInterface )
  {
    UserInterface::StandardUpdate(g_pUserInterface, 0, 0.0);
    if ( a2 <= 2 )
    {
      GameEvent = Event::CreateGameEvent(8);
      *(_DWORD *)(GameEvent + 32) = *((_DWORD *)v3 + 66);
      v7 = *((_DWORD *)v3 + 67);
      *(_QWORD *)(GameEvent + 8) = 0;
      *(_DWORD *)(GameEvent + 36) = v7;
      *(_DWORD *)(GameEvent + 48) = a2;
      *(_QWORD *)(GameEvent + 24) = (char *)v3 + 272;
      v8 = GameEvent;
      *(_BYTE *)(GameEvent + 41) = (a3 & 4) != 0;
      LOBYTE(v7) = (a3 & 8) != 0;
      v9 = 0;
      *(_BYTE *)(GameEvent + 40) = v7;
      if ( *((_DWORD *)v3 + 30) )
      {
        v10 = 0;
        do
        {
          (***(void (__fastcall ****)(_QWORD, __int64))(v10 + *((_QWORD *)v3 + 17)))(
            *(_QWORD *)(v10 + *((_QWORD *)v3 + 17)),
            v8);
          if ( *(_BYTE *)(v8 + 52) )
            break;
          ++v9;
          v10 += 8;
        }
        while ( v9 < *((_DWORD *)v3 + 30) );
      }
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1);
    }
  }
}

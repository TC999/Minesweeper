void __fastcall TipManager::HideTip(TipManager *this, char a2)
{
  __int64 v3; // rdx
  bool v5; // dl
  Tip *v6; // rcx
  __int64 v7; // rax

  v3 = *((unsigned int *)this + 30);
  if ( (_DWORD)v3 )
  {
    Timer::DeleteEvent(g_pTimer, v3);
    *((_DWORD *)this + 30) = 0;
  }
  if ( *((_QWORD *)this + 4) )
  {
    Log(0x2000u, L"Hide tip");
    v5 = !a2 && *((_BYTE *)this + 145);
    v6 = *(Tip **)(*((_QWORD *)this + 16) + 232LL);
    if ( v6 )
      Tip::Close(v6, v5);
    *((_QWORD *)this + 17) = *((_QWORD *)this + 16);
    v7 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 5) = v7;
  }
}

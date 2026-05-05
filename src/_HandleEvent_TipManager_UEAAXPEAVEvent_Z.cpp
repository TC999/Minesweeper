void __fastcall TipManager::HandleEvent(TipManager *this, struct Event *a2, __int64 a3, __int64 a4)
{
  TipManager *v5; // rbx
  __int16 v6; // ax
  __int64 v7; // rax

  v5 = this;
  if ( *((_DWORD *)a2 + 4) == 4 )
  {
    v7 = *((_QWORD *)this + 4);
    if ( v7 && *(_BYTE *)(v7 + 80) )
    {
      LOBYTE(a4) = 1;
      if ( RenderManager::HitTestTopLevel(
             g_pRenderManager,
             *((_DWORD *)g_pUserInterface + 66),
             *((_DWORD *)g_pUserInterface + 67),
             a4) )
      {
        *((_BYTE *)a2 + 52) = 1;
      }
      this = v5;
      goto LABEL_18;
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 15
         || *((_DWORD *)a2 + 4) == 29
         && ((v6 = *((_WORD *)a2 + 12), v6 == 27)
          || v6 == 37
          || v6 == 38
          || v6 == 39
          || v6 == 40
          || v6 == 32
          || v6 == 13
          || v6 == 9) )
  {
LABEL_18:
    TipManager::HideTip(this, 0);
  }
}

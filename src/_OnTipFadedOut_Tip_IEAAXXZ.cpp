void __fastcall Tip::OnTipFadedOut(Tip *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  RenderManager *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  v1 = *((unsigned int *)this + 29);
  if ( (_DWORD)v1 )
    Timer::DeleteEvent(g_pTimer, v1);
  v3 = *((_QWORD *)this + 16);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *(_BYTE *)(v3 + 41) )
  {
    *(_BYTE *)(v3 + 41) = 0;
    v4 = g_pRenderManager;
    *((_BYTE *)g_pRenderManager + 20) = 1;
    *((_BYTE *)v4 + 88) = 1;
  }
  v5 = *((_QWORD *)this + 17);
  v6 = *(_QWORD *)(v5 + 232);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1);
  *(_QWORD *)(v5 + 232) = 0;
}

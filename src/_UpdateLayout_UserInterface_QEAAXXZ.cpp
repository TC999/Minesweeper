void __fastcall UserInterface::UpdateLayout(UserInterface *this)
{
  if ( *((_BYTE *)this + 275) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)g_pRenderManager + 15) + 8LL))(*((_QWORD *)g_pRenderManager + 15));
    *((_BYTE *)this + 275) = 0;
  }
}

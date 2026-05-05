char __fastcall TextRenderer::SelectDXFont(TextRenderer *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 2) || !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2) + 8LL) )
    return 0;
  *((_DWORD *)this + 8) = a2;
  return 1;
}

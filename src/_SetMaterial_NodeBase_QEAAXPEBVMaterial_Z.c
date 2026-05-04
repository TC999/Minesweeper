void __fastcall NodeBase::SetMaterial(NodeBase *this, const struct Material *a2)
{
  unsigned int v2; // r8d
  const struct Material **v3; // r9
  int v4; // eax

  v2 = 0;
  v3 = (const struct Material **)((char *)g_pRenderManager + 96);
  v4 = 3;
  while ( *v3 != a2 )
  {
    ++v2;
    ++v3;
    if ( v2 >= 3 )
      goto LABEL_6;
  }
  v4 = v2;
LABEL_6:
  *((_DWORD *)this + 90) = v4;
}

void __fastcall ChangeAppearanceDialog::LogErrorCallback(int a1, const unsigned __int16 *a2)
{
  int v2; // ecx
  unsigned int v3; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    v3 = 4;
  }
  else
  {
    v3 = 1;
  }
  Log(v3, a2);
}

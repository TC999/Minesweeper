BOOL SharedDialogs::ChangeAppearance::ExitCleanup()
{
  HIMAGELIST *v0; // rbx
  __int64 v1; // rdi
  BOOL result; // eax

  v0 = (HIMAGELIST *)&unk_1000A8610;
  v1 = 2;
  do
  {
    if ( *v0 )
    {
      result = ImageList_Destroy(*v0);
      *v0 = 0;
    }
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}

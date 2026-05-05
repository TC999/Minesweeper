void __fastcall CheckAllocation(const void *a1)
{
  unsigned __int16 *v1; // [rsp+30h] [rbp-18h]
  bool v2; // [rsp+38h] [rbp-10h]

  if ( !a1 )
  {
    LOBYTE(v1) = 1;
    DialogHelper::ShowMessageBox(0, 0, 1u, 0xFFFEu, L"Fatal Error", L"Out of memory.", v1, v2);
    ExitProcess(0);
  }
}

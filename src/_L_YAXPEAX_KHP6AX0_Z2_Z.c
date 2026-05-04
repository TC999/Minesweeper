void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int i; // ebx

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}

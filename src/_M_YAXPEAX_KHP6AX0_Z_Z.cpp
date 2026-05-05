void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v5; // edi
  char *i; // rbx

  v5 = a3;
  for ( i = &a1[a2 * a3]; --v5 >= 0; a4(i) )
    i -= a2;
}

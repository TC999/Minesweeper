char IsNonwritableInCurrentImage()
{
  __int64 PESection; // rax
  __int64 v1; // r8
  __int64 v2; // r9

  LOBYTE(PESection) = ValidateImageBase((__int64)&_ImageBase);
  if ( (_DWORD)PESection )
  {
    PESection = FindPESection(v2, v1 - v2);
    if ( PESection )
      LOBYTE(PESection) = *(int *)(PESection + 36) >= 0;
  }
  return PESection;
}

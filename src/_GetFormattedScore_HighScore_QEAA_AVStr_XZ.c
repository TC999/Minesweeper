__int64 __fastcall HighScore::GetFormattedScore(__int64 a1, __int64 a2)
{
  Str::FromNumber(a2, *(unsigned int *)(a1 + 8));
  return a2;
}

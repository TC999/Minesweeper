__int64 __fastcall GameStat::GetPercentWon(GameStat *this)
{
  if ( *((_DWORD *)this + 3) )
    return (unsigned int)(int)((float)((float)*((int *)this + 2) / (float)*((int *)this + 3)) * 100.0);
  else
    return 0;
}

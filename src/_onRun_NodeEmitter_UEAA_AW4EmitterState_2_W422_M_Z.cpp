__int64 __fastcall NodeEmitter::onRun(float *a1, unsigned int a2, float a3)
{
  if ( a2 <= 1 )
  {
    if ( !NodeEmitter::doRunning((NodeEmitter *)a1, a3) )
      return 2;
    a1[132] = a3 + a1[132];
  }
  return a2;
}

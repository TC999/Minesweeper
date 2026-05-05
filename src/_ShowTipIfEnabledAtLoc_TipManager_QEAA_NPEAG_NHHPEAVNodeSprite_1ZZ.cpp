bool TipManager::ShowTipIfEnabledAtLoc(
        TipManager *this,
        unsigned __int16 *a2,
        bool a3,
        int a4,
        int a5,
        struct NodeSprite *a6,
        bool a7,
        ...)
{
  va_list v8; // [rsp+40h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+40h] BYREF

  va_start(va, a7);
  va_copy(v8, va);
  return TipManager::ShowTipIfEnabledAtLocV(this, a2, a3, a4, a5, a6, a7, &v8);
}

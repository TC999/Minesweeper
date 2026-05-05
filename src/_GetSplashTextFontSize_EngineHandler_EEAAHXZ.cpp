__int64 __fastcall EngineHandler::GetSplashTextFontSize(EngineHandler *this)
{
  wchar_t *v1; // rdi
  unsigned int v2; // ebx

  v1 = LocalizeMessage(L"|63357|SplashScreen|60// Splash screen font size");
  v2 = _wtoi(v1);
  LocalFree(v1);
  return v2;
}

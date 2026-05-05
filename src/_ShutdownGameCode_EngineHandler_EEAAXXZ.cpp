void __fastcall EngineHandler::ShutdownGameCode(EngineHandler *this)
{
  GameAudio::CleanupGameAudio(this);
  if ( DialogHelper::m_hTaskDialogDll )
  {
    FreeLibrary(DialogHelper::m_hTaskDialogDll);
    DialogHelper::m_hTaskDialogDll = 0;
    DialogHelper::m_TaskDialog = 0;
    DialogHelper::m_TaskDialogOld = 0;
    DialogHelper::m_TaskDialogIndirect = 0;
    DialogHelper::m_TaskDialogIndirectOld = 0;
  }
  if ( DialogHelper::m_artButNFCenter )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButNFCenter)(
      DialogHelper::m_artButNFCenter,
      1);
  if ( DialogHelper::m_artButNFRight )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButNFRight)(DialogHelper::m_artButNFRight, 1);
  if ( DialogHelper::m_artButNFLeft )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButNFLeft)(DialogHelper::m_artButNFLeft, 1);
  if ( DialogHelper::m_artButCenter )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButCenter)(DialogHelper::m_artButCenter, 1);
  if ( DialogHelper::m_artButRight )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButRight)(DialogHelper::m_artButRight, 1);
  if ( DialogHelper::m_artButLeft )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artButLeft)(DialogHelper::m_artButLeft, 1);
  if ( DialogHelper::m_artChkBoxNF )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artChkBoxNF)(DialogHelper::m_artChkBoxNF, 1);
  if ( DialogHelper::m_artChkBox )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artChkBox)(DialogHelper::m_artChkBox, 1);
  if ( DialogHelper::m_artChkBoxNFChecked )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artChkBoxNFChecked)(
      DialogHelper::m_artChkBoxNFChecked,
      1);
  if ( DialogHelper::m_artChkBoxChecked )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artChkBoxChecked)(
      DialogHelper::m_artChkBoxChecked,
      1);
  if ( DialogHelper::m_artRadioNF )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artRadioNF)(DialogHelper::m_artRadioNF, 1);
  if ( DialogHelper::m_artRadio )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artRadio)(DialogHelper::m_artRadio, 1);
  if ( DialogHelper::m_artRadioNFChecked )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artRadioNFChecked)(
      DialogHelper::m_artRadioNFChecked,
      1);
  if ( DialogHelper::m_artRadioChecked )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_artRadioChecked)(
      DialogHelper::m_artRadioChecked,
      1);
  if ( DialogHelper::m_Background )
    (**(void (__fastcall ***)(struct Image *, __int64))DialogHelper::m_Background)(DialogHelper::m_Background, 1);
  if ( DialogHelper::m_hFont )
    DeleteObject(DialogHelper::m_hFont);
  if ( DialogHelper::m_hWritableTemplate )
    GlobalFree(DialogHelper::m_hWritableTemplate);
  if ( Game::G )
    Game::`scalar deleting destructor'(Game::G);
  Game::G = 0;
}

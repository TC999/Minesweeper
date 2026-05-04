void __fastcall DialogHelper::InitMCE(DialogHelper *this, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r8
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // r8
  const unsigned __int16 *v15; // r8

  DialogHelper::m_artButNFCenter = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\Buttons_Center.png", 0, a3);
  DialogHelper::m_artButNFRight = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\Buttons_Right.png", 0, v3);
  DialogHelper::m_artButNFLeft = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\Buttons_Left.png", 0, v4);
  DialogHelper::m_artButCenter = DialogHelper::LoadImageMCE(
                                   (DialogHelper *)L"DialogMCE\\Buttons_Shiny_Center.png",
                                   0,
                                   v5);
  DialogHelper::m_artButRight = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\Buttons_Shiny_Right.png", 0, v6);
  DialogHelper::m_artButLeft = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\Buttons_Shiny_Left.png", 0, v7);
  DialogHelper::m_artRadioNF = DialogHelper::LoadImageMCE(
                                 (DialogHelper *)L"DialogMCE\\RadioButton_Disabled_NoSpot.png",
                                 0,
                                 v8);
  DialogHelper::m_artRadioNFChecked = DialogHelper::LoadImageMCE(
                                        (DialogHelper *)L"DialogMCE\\RadioButton_Disabled_Spot.png",
                                        0,
                                        v9);
  DialogHelper::m_artRadio = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\RadioButton_NoSpot.png", 0, v10);
  DialogHelper::m_artRadioChecked = DialogHelper::LoadImageMCE(
                                      (DialogHelper *)L"DialogMCE\\RadioButton_Spot.png",
                                      0,
                                      v11);
  DialogHelper::m_artChkBoxNF = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\CheckBox_Disabled.png", 0, v12);
  DialogHelper::m_artChkBoxNFChecked = DialogHelper::LoadImageMCE(
                                         (DialogHelper *)L"DialogMCE\\CheckBox_Disabled_Check.png",
                                         0,
                                         v13);
  DialogHelper::m_artChkBox = DialogHelper::LoadImageMCE((DialogHelper *)L"DialogMCE\\CheckBox_NoCheck.png", 0, v14);
  DialogHelper::m_artChkBoxChecked = DialogHelper::LoadImageMCE(
                                       (DialogHelper *)L"DialogMCE\\CheckBox_Check.png",
                                       0,
                                       v15);
  DialogHelper::m_hFont = 0;
  DialogHelper::m_Background = 0;
  DialogHelper::m_hLastFocus = 0;
}

__int64 __fastcall DialogHelper::ShowMessageBox(
        UINT uID,
        unsigned __int16 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int16 *lpCaption,
        LPCWSTR lpText,
        const unsigned __int16 *a7)
{
  unsigned __int16 *v7; // rdi
  const unsigned __int16 *v8; // rbx
  UINT v12; // r9d
  WCHAR *v13; // r8
  WCHAR *v14; // rdx
  int v15[4]; // [rsp+40h] [rbp-648h] BYREF
  WCHAR Buffer[256]; // [rsp+50h] [rbp-638h] BYREF
  WCHAR v17[512]; // [rsp+250h] [rbp-438h] BYREF

  v7 = lpCaption;
  v8 = lpText;
  v15[0] = 0;
  memset(Buffer, 0, sizeof(Buffer));
  memset(v17, 0, sizeof(v17));
  if ( DialogHelper::m_TaskDialog && (_BYTE)a7 )
  {
    if ( !lpText )
      v8 = (const unsigned __int16 *)a2;
    if ( !lpCaption )
      v7 = (unsigned __int16 *)(unsigned __int16)uID;
    DialogHelper::m_TaskDialog(DialogHelper::m_hWnd, DialogHelper::m_hInstance, v7, v8, 0, 1u, a4, v15);
  }
  else if ( DialogHelper::m_TaskDialogOld && (_BYTE)a7 )
  {
    if ( !lpText )
      v8 = (const unsigned __int16 *)a2;
    if ( !lpCaption )
      v7 = (unsigned __int16 *)(unsigned __int16)uID;
    DialogHelper::m_TaskDialogOld(DialogHelper::m_hWnd, DialogHelper::m_hInstance, v7, v8, 1u, a4, v15);
  }
  else
  {
    if ( !lpCaption && !LoadStringW(DialogHelper::m_hInstance, (unsigned __int16)uID, Buffer, 256)
      || !lpText && !LoadStringW(DialogHelper::m_hInstance, a2, v17, 512) )
    {
      return 0;
    }
    if ( a4 == (const unsigned __int16 *)65534 )
    {
      v12 = 16;
    }
    else
    {
      v12 = 0;
      if ( a4 == (const unsigned __int16 *)0xFFFF )
        v12 = 48;
    }
    v13 = Buffer;
    if ( lpCaption )
      v13 = lpCaption;
    v14 = v17;
    if ( lpText )
      v14 = (WCHAR *)lpText;
    v15[0] = MessageBoxW(DialogHelper::m_hWnd, v14, v13, v12);
  }
  if ( DialogHelper::m_DialogShutdown )
    DialogHelper::m_DialogShutdown();
  return (unsigned int)v15[0];
}

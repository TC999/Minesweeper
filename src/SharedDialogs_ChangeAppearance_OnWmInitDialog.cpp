void __fastcall SharedDialogs::ChangeAppearance::OnWmInitDialog(HWND hDlg, HWND a2)
{
  const unsigned __int16 *v3; // rcx
  const WCHAR *v4; // rax
  WCHAR *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  const unsigned __int16 *v9; // rcx
  const WCHAR *v10; // rax
  WCHAR *v11; // rdi
  unsigned int *v12; // rax
  unsigned int v13; // ecx
  unsigned int *v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // esi
  LONG WindowLongW; // eax
  unsigned int v18; // ebp
  int v19; // r13d
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int ImageWidth; // eax
  __int64 v29; // rcx
  int ImageHeight; // eax
  HBITMAP hbmColor; // rdx
  HICON IconW; // rax
  bool v33; // zf
  char v34; // si
  HIMAGELIST v35; // rax
  signed int v36; // ecx
  int v37; // edi
  char *v38; // r15
  __int64 v39; // rbp
  unsigned __int16 *v40; // rsi
  unsigned int v41; // r13d
  unsigned __int16 *v42; // rax
  const unsigned __int16 *v43; // rcx
  const WCHAR *v44; // rax
  WCHAR *v45; // rbx
  const unsigned __int16 *v46; // rcx
  const WCHAR *v47; // rax
  WCHAR *v48; // rbx
  const unsigned __int16 *v49; // rcx
  const WCHAR *v50; // rax
  WCHAR *v51; // rbx
  HGDIOBJ ho; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-F0h]
  __int64 v54; // [rsp+40h] [rbp-E8h]
  __int64 v55; // [rsp+48h] [rbp-E0h]
  __int64 v56; // [rsp+50h] [rbp-D8h]
  __int64 v57; // [rsp+58h] [rbp-D0h]
  struct tagRECT Rect; // [rsp+60h] [rbp-C8h] BYREF
  LPARAM lParam[12]; // [rsp+70h] [rbp-B8h] BYREF
  ICONINFO piconinfo; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+140h] [rbp+18h] BYREF
  unsigned int v62; // [rsp+148h] [rbp+20h]

  if ( !qword_1000A8640 )
    return;
  DialogHelper::CenterDialog(hDlg, a2);
  hWnd = hDlg;
  qword_1000A8600[0] = (__int64)GetDlgItem(hDlg, 5000);
  qword_1000A8608 = (__int64)GetDlgItem(hDlg, 5002);
  qword_1000A8620 = (__int64)GetDlgItem(hDlg, 5001);
  qword_1000A8628 = (__int64)GetDlgItem(hDlg, 5003);
  qword_1000A85F0 = GetDlgItem(hDlg, 5004);
  qword_1000A85E8 = GetDlgItem(hDlg, 1);
  qword_1000A85E0 = GetDlgItem(hDlg, 2);
  v3 = *(const unsigned __int16 **)(qword_1000A8640 + 96);
  if ( v3 )
  {
    v4 = LocalizeMessage(v3);
    v5 = (WCHAR *)v4;
    if ( v4 )
    {
      SetWindowTextW(hWnd, v4);
      LocalFree(v5);
    }
    else
    {
      SharedDialogs::ChangeAppearance::LogCallback(
        1u,
        L"%S - Failed to localize caption string: %s",
        "SharedDialogs::ChangeAppearance::OnWmInitDialog",
        *(_QWORD *)(qword_1000A8640 + 96));
    }
  }
  v6 = 0;
  v55 = 2;
  v7 = 56LL - (_QWORD)&unk_1000A8610;
  v57 = 56LL - (_QWORD)&unk_1000A8610;
  do
  {
    v8 = qword_1000A8640;
    v56 = qword_1000A8640;
    v9 = *(const unsigned __int16 **)(v6 * 8 + qword_1000A8640 + 32);
    if ( v9 )
    {
      v10 = LocalizeMessage(v9);
      v11 = (WCHAR *)v10;
      if ( v10 )
      {
        SetWindowTextW((HWND)qword_1000A8600[v6 + 1], v10);
        LocalFree(v11);
      }
      else
      {
        SharedDialogs::ChangeAppearance::LogCallback(
          1u,
          L"%S - Failed to localize label string: %s",
          "SharedDialogs::ChangeAppearance::OnWmInitDialog",
          *(_QWORD *)(v6 * 8 + v8 + 32));
      }
    }
    v12 = *(unsigned int **)(v6 * 8 + v8 + 40);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0;
    v14 = *(unsigned int **)(v6 * 8 + v8 + 48);
    v62 = v13;
    if ( v14 )
      v15 = *v14;
    else
      v15 = 0;
    v16 = v15;
    if ( v13 )
      v16 = v13;
    v53 = v16;
    if ( !v15 )
    {
      WindowLongW = GetWindowLongW((HWND)qword_1000A8600[v6], -16);
      SetWindowLongW((HWND)qword_1000A8600[v6], -16, WindowLongW | 3);
      goto LABEL_57;
    }
    v18 = 0;
    v19 = 0;
    v20 = v15;
    v21 = 0;
    v54 = v15;
    do
    {
      v22 = *(_QWORD *)(v6 * 8 + v8 + 48);
      ho = 0;
      v23 = (*(__int64 (__fastcall **)(_QWORD))(qword_1000A8640 + 16))(*(_QWORD *)(v21 + *(_QWORD *)(v22 + 16)));
      if ( v23 )
      {
        v24 = GdipAlloc(24);
        if ( v24 )
        {
          v61 = 0;
          *(_QWORD *)v24 = &Gdiplus::Image::`vftable';
          *(_DWORD *)(v24 + 16) = GdipCreateBitmapFromStream(v23, &v61);
          *(_QWORD *)(v24 + 8) = v61;
        }
        else
        {
          v24 = 0;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v24 )
        {
          v25 = *(_DWORD *)(v24 + 16);
          *(_DWORD *)(v24 + 16) = 0;
          if ( !v25 )
          {
            v26 = ((__int64 (__fastcall *)(_QWORD, HGDIOBJ *, _QWORD))GdipCreateHBITMAPFromBitmap)(
                    *(_QWORD *)(v24 + 8),
                    &ho,
                    0);
            if ( v26 )
              *(_DWORD *)(v24 + 16) = v26;
            else
              v26 = 0;
            if ( ho )
            {
              if ( v26 )
              {
                DeleteObject(ho);
                ho = 0;
              }
              else if ( !qword_1000A8600[v6 + 2] )
              {
                v27 = *(_QWORD *)(v24 + 8);
                LODWORD(v61) = 0;
                ImageWidth = GdipGetImageWidth(v27, &v61);
                if ( ImageWidth )
                  *(_DWORD *)(v24 + 16) = ImageWidth;
                v18 = v61;
                v29 = *(_QWORD *)(v24 + 8);
                LODWORD(v61) = 0;
                ImageHeight = GdipGetImageHeight(v29, &v61);
                if ( ImageHeight )
                  *(_DWORD *)(v24 + 16) = ImageHeight;
                v19 = v61;
                LODWORD(qword_1000A8600[v6 + 3]) = v18;
                HIDWORD(qword_1000A8600[v6 + 3]) = v19;
              }
            }
          }
          (**(void (__fastcall ***)(__int64, __int64))v24)(v24, 1);
        }
        v20 = v54;
      }
      hbmColor = (HBITMAP)ho;
      if ( ho )
      {
        v34 = 0;
      }
      else
      {
        SharedDialogs::ChangeAppearance::LogCallback(
          2u,
          L"%S - Thumbnail image %s doesn't exist or could not be loaded",
          "SharedDialogs::ChangeAppearance::OnWmInitDialog",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 * 8 + v8 + 48) + 16LL) + v21));
        memset(&piconinfo, 0, sizeof(piconinfo));
        IconW = LoadIconW(0, (LPCWSTR)0x7F02);
        GetIconInfo(IconW, &piconinfo);
        hbmColor = piconinfo.hbmColor;
        v33 = qword_1000A8600[v6 + 2] == 0;
        ho = piconinfo.hbmColor;
        v34 = 1;
        if ( !v33 )
          goto LABEL_48;
        v18 = 160;
        v19 = 118;
      }
      if ( !qword_1000A8600[v6 + 2] )
      {
        v35 = ImageList_Create(v18, v19, 0x2020u, v15, 0);
        hbmColor = (HBITMAP)ho;
        qword_1000A8600[v6 + 2] = (__int64)v35;
      }
LABEL_48:
      ImageList_Add((HIMAGELIST)qword_1000A8600[v6 + 2], hbmColor, 0);
      if ( ho && !v34 )
        DeleteObject(ho);
      v21 += 8;
      v54 = --v20;
    }
    while ( v20 );
    v16 = v53;
    SendMessageW((HWND)qword_1000A8600[v6], 0x1003u, 0, qword_1000A8600[v6 + 2]);
    GetClientRect((HWND)qword_1000A8600[v6], &Rect);
    v36 = (Rect.right - v15 * v18 - Rect.left) / v15;
    if ( v36 >= 0 )
    {
      if ( v36 > (int)(v18 >> 1) )
        LOWORD(v36) = v18 >> 1;
    }
    else
    {
      LOWORD(v36) = 0;
    }
    SendMessageW(
      (HWND)qword_1000A8600[v6],
      0x1035u,
      0,
      ((unsigned __int16)(v19 + 8) << 16) | (unsigned __int16)(v18 + v36));
    v7 = v57;
LABEL_57:
    v37 = 0;
    if ( v16 )
    {
      v38 = (char *)&qword_1000A8600[v6 + 2] + v7;
      v39 = 0;
      do
      {
        v40 = 0;
        memset(lParam, 0, 0x58u);
        v41 = v37 + 1;
        HIDWORD(lParam[0]) = v37 + 1;
        LODWORD(lParam[0]) = 8;
        if ( v15 )
        {
          LODWORD(lParam[0]) = 10;
          HIDWORD(lParam[4]) = v37;
        }
        if ( v62 )
        {
          v42 = LocalizeMessage(*(const unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v6 * 8 + v56 + 40) + 16LL) + v39));
          v40 = v42;
          if ( v42 )
          {
            LODWORD(lParam[0]) |= 1u;
            lParam[3] = (LPARAM)v42;
          }
          else
          {
            SharedDialogs::ChangeAppearance::LogCallback(
              1u,
              L"%S - Failed to localize listview item text string: %s",
              "SharedDialogs::ChangeAppearance::OnWmInitDialog",
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 * 8 + v56 + 40) + 16LL) + v39));
          }
        }
        if ( v37 == *(_DWORD *)&v38[qword_1000A8640] )
        {
          LODWORD(lParam[2]) = 3;
          HIDWORD(lParam[1]) = 3;
        }
        SendMessageW((HWND)qword_1000A8600[v6], 0x104Du, 0, (LPARAM)lParam);
        if ( v40 )
          LocalFree(v40);
        v39 += 8;
        ++v37;
      }
      while ( v41 < v53 );
    }
    v7 = v57;
    v6 += 4;
    --v55;
  }
  while ( v55 );
  v43 = *(const unsigned __int16 **)(qword_1000A8640 + 112);
  if ( v43 )
  {
    v44 = LocalizeMessage(v43);
    v45 = (WCHAR *)v44;
    if ( v44 )
    {
      SetWindowTextW(qword_1000A85E8, v44);
      LocalFree(v45);
    }
    else
    {
      SharedDialogs::ChangeAppearance::LogCallback(
        1u,
        L"%S - Failed to localize Ok button text string: %s",
        "SharedDialogs::ChangeAppearance::OnWmInitDialog",
        *(_QWORD *)(qword_1000A8640 + 112));
    }
  }
  v46 = *(const unsigned __int16 **)(qword_1000A8640 + 120);
  if ( v46 )
  {
    v47 = LocalizeMessage(v46);
    v48 = (WCHAR *)v47;
    if ( v47 )
    {
      SetWindowTextW(qword_1000A85E0, v47);
      LocalFree(v48);
    }
    else
    {
      SharedDialogs::ChangeAppearance::LogCallback(
        1u,
        L"%S - Failed to localize Cancel button text string: %s",
        "SharedDialogs::ChangeAppearance::OnWmInitDialog",
        *(_QWORD *)(qword_1000A8640 + 120));
    }
  }
  v49 = *(const unsigned __int16 **)(qword_1000A8640 + 104);
  if ( v49 )
  {
    v50 = LocalizeMessage(v49);
    v51 = (WCHAR *)v50;
    if ( v50 )
    {
      SetWindowTextW(qword_1000A85F0, v50);
      LocalFree(v51);
    }
    else
    {
      SharedDialogs::ChangeAppearance::LogCallback(
        1u,
        L"%S - Failed to localize random checkbox text string: %s",
        "SharedDialogs::ChangeAppearance::OnWmInitDialog",
        *(_QWORD *)(qword_1000A8640 + 104));
    }
  }
  SendMessageW(qword_1000A85F0, 0xF1u, *(unsigned __int8 *)(qword_1000A8640 + 128), 0);
}

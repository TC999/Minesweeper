// Hidden C++ exception states: #wind=2
char __fastcall Stash::SaveFile(Stash *this, wchar_t *a2, unsigned int a3, bool a4)
{
  void *SpecialFolderFile; // rdi
  bool v10; // bl
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // rdx
  int Buffer; // [rsp+40h] [rbp-88h] BYREF
  __int64 v15; // [rsp+48h] [rbp-80h]
  __m128i v16; // [rsp+50h] [rbp-78h]
  _BYTE v17[16]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v18[4]; // [rsp+70h] [rbp-58h] BYREF
  void *v19; // [rsp+80h] [rbp-48h]
  _BYTE v20[16]; // [rsp+88h] [rbp-40h] BYREF
  void *Block; // [rsp+98h] [rbp-30h]
  DWORD NumberOfBytesWritten; // [rsp+D8h] [rbp+10h] BYREF

  v15 = -2;
  if ( a2 )
  {
    NumberOfBytesWritten = 0;
    SpecialFolderFile = (void *)CreateSpecialFolderFile(a2, 0, a3, 1, 102);
    if ( SpecialFolderFile == (void *)-1LL )
    {
      Log(0x80u, L"Stash::SaveFile(): Unable to open %s", a2);
      return 0;
    }
    else
    {
      v18[0] = 0;
      v18[1] = 0;
      v18[2] = 16;
      v19 = 0;
      if ( g_pRenderManager && *((_DWORD *)g_pRenderManager + 53) )
        RenderManager::SaveScreenshotToMemory(g_pRenderManager, 256, 192, v18, L"RGMH_Thumbnail_Minesweeper.png");
      Str::Str((Str *)v20, 0x66u);
      v16 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(void *, _BYTE *))(*(_QWORD *)g_pInterface + 16LL))(
                                               g_pInterface,
                                               v17));
      v10 = (unsigned int)WriteSpecialFolderFileRichGameHeader(SpecialFolderFile, a2) == 0;
      operator delete(Block);
      if ( v10 )
      {
        Log(0x80u, L"Stash::SaveFile(): Unable to write Rich Game Media header to %s", a2);
        CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, 1);
        if ( v19 )
          free(v19);
        return 0;
      }
      else
      {
        Buffer = *((_DWORD *)this + 2);
        NumberOfBytesWritten = 0;
        if ( WriteFile(SpecialFolderFile, &Buffer, 4u, &NumberOfBytesWritten, 0) && NumberOfBytesWritten == 4 )
        {
          v11 = 0;
          if ( *((_DWORD *)this + 2) )
          {
            v12 = 0;
            while ( 1 )
            {
              v13 = *((_QWORD *)this + 3);
              if ( !*(_QWORD *)(v12 + v13) )
                break;
              NumberOfBytesWritten = 0;
              if ( !WriteFile(SpecialFolderFile, *(LPCVOID *)(v12 + v13), 4u, &NumberOfBytesWritten, 0)
                || NumberOfBytesWritten != 4 )
              {
                Log(0x80u, L"Stash::SaveFile(): Unable to write size of buffer[%d] to %s", v11, a2);
                CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, 1);
                if ( v19 )
                  free(v19);
                return 0;
              }
              if ( !WriteFile(
                      SpecialFolderFile,
                      *(LPCVOID *)(*(_QWORD *)(v12 + *((_QWORD *)this + 3)) + 8LL),
                      **(_DWORD **)(v12 + *((_QWORD *)this + 3)),
                      &NumberOfBytesWritten,
                      0)
                || NumberOfBytesWritten != **(_DWORD **)(v12 + *((_QWORD *)this + 3)) )
              {
                Log(0x80u, L"Stash::SaveFile(): Unable to write buffer[%d] to %s", v11, a2);
                CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, 1);
                if ( v19 )
                  free(v19);
                return 0;
              }
              ++v11;
              v12 += 8;
              if ( v11 >= *((_DWORD *)this + 2) )
                goto LABEL_32;
            }
            Log(0x80u, L"Stash::SaveFile(): Buffer[%d] doesn't exist in %s", v11, a2);
            CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, 1);
            if ( v19 )
              free(v19);
            return 0;
          }
          else
          {
LABEL_32:
            CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, a4);
            if ( v19 )
              free(v19);
            return 1;
          }
        }
        else
        {
          Log(0x80u, L"Stash::SaveFile(): Unable to write buffer count to %s", a2);
          CloseSpecialFolderFile((__int64)SpecialFolderFile, a3, 1);
          if ( v19 )
            free(v19);
          return 0;
        }
      }
    }
  }
  else
  {
    Log(0x80u, L"Stash::SaveFile(): Missing save filename");
    return 0;
  }
}

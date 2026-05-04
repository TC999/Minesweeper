// Hidden C++ exception states: #wind=5
bool __fastcall InitializeEngine(struct IEngineInterface *a1, struct IControllerInterface *a2)
{
  HMODULE ModuleHandleW; // rax
  HMODULE LibraryW; // rax
  HRESULT (__stdcall *TaskDialogIndirect)(const TASKDIALOGCONFIG *, int *, int *, BOOL *); // rax
  _WORD *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  const wchar_t *v12; // rax
  HANDLE MutexW; // rdi
  const unsigned __int16 *v14; // rax
  WCHAR *v15; // rdi
  HWND WindowW; // rsi
  const WCHAR *CommandLineW; // rax
  LPWSTR *v18; // r8
  const wchar_t **v19; // r8
  __int64 v20; // r9
  char v21; // al
  bool v22; // cf
  bool v23; // zf
  int v24; // edx
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rsi
  __int64 v27; // rcx
  const WCHAR *v28; // rax
  bool v29; // si
  __int64 v30; // r11
  __int64 v31; // rdx
  struct _OSVERSIONINFOW *p_VersionInformation; // rcx
  __int64 v33; // rdi
  _WORD *v34; // rax
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // r11
  __int16 v38; // cx
  unsigned __int16 *v39; // rax
  _QWORD *v40; // rax
  const unsigned __int16 *v41; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v43; // rcx
  WCHAR *v44; // rdx
  _DWORD *v45; // rax
  DllFileMgr *v46; // rax
  DllFileMgr *v47; // rax
  const unsigned __int16 *v48; // rax
  bool v49; // di
  const unsigned __int16 *v50; // rdi
  __int64 v51; // rax
  const unsigned __int16 *v52; // rdx
  Timekeeping *v53; // rcx
  ResourceManager *v54; // rax
  ResourceManager *v55; // rax
  RenderManager *v56; // rax
  RenderManager *v57; // rax
  _DWORD *v58; // rax
  CommonControllerThread *v59; // rax
  CommonControllerThread *v60; // rdi
  void **v61; // rdi
  XmlNode *Xml; // rax
  const struct XmlNode **v63; // r12
  DWORD v64; // ebp
  XmlNode **v65; // rsi
  unsigned __int16 *NodeValue; // rdi
  unsigned int v67; // eax
  int v68; // ecx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  XmlNode *v71; // rdi
  const WCHAR *v72; // rdi
  HMODULE v73; // rax
  LPVOID *ppv; // [rsp+20h] [rbp-728h]
  LPVOID *ppva; // [rsp+20h] [rbp-728h]
  unsigned __int16 *v76; // [rsp+30h] [rbp-718h]
  bool v77; // [rsp+38h] [rbp-710h]
  DWORD pdwDefaultLayout; // [rsp+40h] [rbp-708h] BYREF
  RAWINPUTDEVICE pRawInputDevices; // [rsp+48h] [rbp-700h] BYREF
  void *Block; // [rsp+58h] [rbp-6F0h]
  int pNumArgs; // [rsp+60h] [rbp-6E8h] BYREF
  HWND v82; // [rsp+68h] [rbp-6E0h] BYREF
  _QWORD v83[2]; // [rsp+70h] [rbp-6D8h] BYREF
  int v84; // [rsp+80h] [rbp-6C8h]
  __int64 v85; // [rsp+88h] [rbp-6C0h]
  int v86; // [rsp+90h] [rbp-6B8h]
  int v87; // [rsp+94h] [rbp-6B4h]
  void (__fastcall *v88)(unsigned __int64 *); // [rsp+98h] [rbp-6B0h]
  void (__fastcall *v89)(unsigned __int64); // [rsp+A0h] [rbp-6A8h]
  __int64 v90; // [rsp+A8h] [rbp-6A0h]
  tagMSG Msg; // [rsp+B0h] [rbp-698h] BYREF
  char v92[16]; // [rsp+E0h] [rbp-668h] BYREF
  void *v93; // [rsp+F0h] [rbp-658h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+100h] [rbp-648h] BYREF
  WCHAR Filename[512]; // [rsp+310h] [rbp-438h] BYREF

  v90 = -2;
  ModuleHandleW = GetModuleHandleW(0);
  if ( ModuleHandleW )
  {
    DialogHelper::m_hInstance = ModuleHandleW;
    DialogHelper::m_hWnd = 0;
    DialogHelper::m_bIsMediaCenter = 0;
    if ( !DialogHelper::m_hTaskDialogDll )
    {
      LibraryW = LoadLibraryW(L"comctl32");
      DialogHelper::m_hTaskDialogDll = LibraryW;
      if ( LibraryW )
      {
        DialogHelper::m_TaskDialog = (int (*)(HWND, HINSTANCE, const unsigned __int16 *, const unsigned __int16 *, const unsigned __int16 *, unsigned int, const unsigned __int16 *, int *))GetProcAddress(LibraryW, "TaskDialog");
        TaskDialogIndirect = (HRESULT (__stdcall *)(const TASKDIALOGCONFIG *, int *, int *, BOOL *))GetProcAddress(DialogHelper::m_hTaskDialogDll, "TaskDialogIndirect");
        DialogHelper::m_TaskDialogIndirect = TaskDialogIndirect;
        if ( DialogHelper::m_TaskDialog || TaskDialogIndirect )
        {
          VersionInformation.dwOSVersionInfoSize = 276;
          if ( GetVersionExW(&VersionInformation) )
          {
            if ( VersionInformation.dwMajorVersion >= 6
              && !VersionInformation.dwMinorVersion
              && VersionInformation.dwPlatformId == 2
              && VersionInformation.dwBuildNumber < 0x147C )
            {
              DialogHelper::m_TaskDialogOld = (int (*)(HWND, HINSTANCE, const unsigned __int16 *, const unsigned __int16 *, unsigned int, const unsigned __int16 *, int *))DialogHelper::m_TaskDialog;
              DialogHelper::m_TaskDialog = 0;
              DialogHelper::m_TaskDialogIndirectOld = (int (*)(const struct _TASKDIALOGCONFIG_OLD *, int *, int *))DialogHelper::m_TaskDialogIndirect;
              DialogHelper::m_TaskDialogIndirect = 0;
            }
          }
        }
      }
      pdwDefaultLayout = 0;
      GetProcessDefaultLayout(&pdwDefaultLayout);
      DialogHelper::m_bRTL = pdwDefaultLayout & 1;
      DialogHelper::m_DlgTemplateAlloc = 3000;
      DialogHelper::m_hWritableTemplate = GlobalAlloc(0x40u, 0xBB8u);
      DialogHelper::m_hLastFocus = 0;
    }
  }
  v6 = (_WORD *)(*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 32LL))(a1);
  v7 = -1;
  do
  {
    if ( !v7 )
      break;
    v23 = *v6++ == 0;
    --v7;
  }
  while ( !v23 );
  v8 = (unsigned int)(-(int)v7 - 2 + 24);
  v9 = (wchar_t *)operator new[](saturated_mul(v8, 2u));
  v10 = v9;
  if ( v9 )
  {
    wcscpy_s(v9, v8, L"Local\\Oberon_");
    v12 = (const wchar_t *)(*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 32LL))(a1);
    wcscat_s(v10, v8, v12);
    wcscat_s(v10, v8, L"_Singleton");
    MutexW = CreateMutexW(0, 1, v10);
    operator delete(v10);
    if ( !MutexW )
      ExitProcess(0);
    if ( GetLastError() == 183 )
    {
      v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 32LL))(a1);
      v15 = LocalizeMessage(v14);
      WindowW = FindWindowW(v15, 0);
      LocalFree(v15);
      if ( WindowW )
      {
        if ( IsIconic(WindowW) )
          ShowWindow(WindowW, 10);
        BringWindowToTop(WindowW);
        SetForegroundWindow(WindowW);
      }
      ExitProcess(0);
    }
    CommandLineW = GetCommandLineW();
    pNumArgs = 0;
    v18 = CommandLineToArgvW(CommandLineW, &pNumArgs);
    if ( pNumArgs > 1 )
    {
      v19 = (const wchar_t **)(v18 + 1);
      v20 = (unsigned int)(pNumArgs - 1);
      v21 = (char)g_bMediaCenter;
      do
      {
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v25 = L"-mce";
        v26 = *v19;
        v27 = 5;
        do
        {
          if ( !v27 )
            break;
          v22 = *v26 < *v25;
          v23 = *v26++ == *v25++;
          --v27;
        }
        while ( v23 );
        if ( !v23 )
          v24 = -v22 - (v22 - 1);
        if ( !v24 )
          v21 = 1;
        LOBYTE(g_bMediaCenter) = v21;
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    v28 = GetCommandLineW();
    RegisterApplicationRestart(v28, 0);
    CoInitialize(0);
    v29 = 0;
    *(_QWORD *)&pRawInputDevices.usUsagePage = 0;
    if ( CoCreateInstance(
           &GUID_9a5ea990_3034_4d6f_9128_01f3c61022bc,
           0,
           1u,
           &GUID_e7b2fb72_d728_49b3_a5f2_18ebf5f1349e,
           (LPVOID *)&pRawInputDevices) >= 0
      && (int)((__int64 (__fastcall *)(const GUID *, _QWORD, _QWORD, struct _OSVERSIONINFOW *, int))SHGetFolderPathEx)(
                &FOLDERID_ProgramFiles,
                0,
                0,
                &VersionInformation,
                260) >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 168LL))(a1);
      v31 = 260;
      p_VersionInformation = &VersionInformation;
      do
      {
        if ( !LOWORD(p_VersionInformation->dwOSVersionInfoSize) )
          break;
        p_VersionInformation = (struct _OSVERSIONINFOW *)((char *)p_VersionInformation + 2);
        --v31;
      }
      while ( v31 );
      if ( v31 )
      {
        v33 = v31;
        v34 = (_WORD *)((char *)&VersionInformation + 2 * (260 - v31));
        v35 = 0;
        v36 = 0x7FFFFFFF;
        v37 = v30 - (_QWORD)v34;
        do
        {
          if ( !v36 )
            break;
          v38 = *(_WORD *)((char *)v34 + v37);
          if ( !v38 )
            break;
          *v34++ = v38;
          --v33;
          --v36;
        }
        while ( v33 );
        if ( !v33 )
        {
          --v34;
          v35 = -2147024774;
        }
        *v34 = 0;
        if ( v35 >= 0 )
        {
          v39 = SysAllocString((const OLECHAR *)&VersionInformation);
          g_bstrGDFPath = v39;
          if ( v39 )
          {
            if ( SysStringLen(v39)
              && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, DWORD *))(**(_QWORD **)&pRawInputDevices.usUsagePage
                                                                            + 48LL))(
                   *(_QWORD *)&pRawInputDevices.usUsagePage,
                   g_bstrGDFPath,
                   &pdwDefaultLayout) >= 0 )
            {
              v29 = pdwDefaultLayout != 0;
            }
          }
        }
      }
    }
    if ( *(_QWORD *)&pRawInputDevices.usUsagePage )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&pRawInputDevices.usUsagePage + 16LL))(*(_QWORD *)&pRawInputDevices.usUsagePage);
    if ( !v29 )
      CleanupEngine(5u);
    v40 = operator new(8u);
    if ( v40 )
    {
      *v40 = 0;
      g_pSecondTimerCallback = v40;
    }
    else
    {
      g_pSecondTimerCallback = 0;
    }
    _set_new_handler((int (*)(unsigned __int64))HandleNewFail);
    _set_new_mode(1);
    g_pInterface = a1;
    v41 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 32LL))(a1);
    g_wszProjectName = LocalizeMessage(v41);
    ModuleFileNameW = GetModuleFileNameW(0, Filename, 0x200u);
    v43 = ModuleFileNameW - 1;
    if ( ModuleFileNameW )
    {
      v44 = &Filename[(int)v43];
      while ( *v44 != 47 && *v44 != 92 )
      {
        v43 = (unsigned int)(v43 - 1);
        --v44;
        if ( (unsigned int)v43 > ModuleFileNameW )
          goto LABEL_67;
      }
      Filename[v43] = 0;
    }
LABEL_67:
    SetCurrentDirectoryW(Filename);
    XmlNode::SetNodeName((XmlNode *)&ErrorXml, L"ErrorLog");
    v45 = operator new(0x18u);
    if ( v45 )
    {
      *v45 = 0;
      v45[1] = 0;
      v45[2] = 16;
      *((_QWORD *)v45 + 2) = 0;
    }
    else
    {
      v45 = 0;
    }
    g_pXmlManager = (XmlManager *)v45;
    CheckAllocation(v45);
    Log(0x10u, 1129, "Engine.cpp", L"Initializing Virtual FS");
    Log(0x10u, 1138, "Engine.cpp", L"Project name localized to: %s", g_wszProjectName);
    OutputDebugStringW(Filename);
    Log(0x10u, 1142, "Engine.cpp", L"Using working directory: %s", Filename);
    Log(0x10u, 1146, "Engine.cpp", L"Initializing GDI+");
    v84 = 1;
    v85 = 0;
    v87 = 0;
    v86 = 1;
    GdiplusStartup();
    LoadWindowPrefs((int *)&pRawInputDevices, (int *)&pdwDefaultLayout);
    v46 = (DllFileMgr *)operator new(0x2868u);
    *(_QWORD *)&pRawInputDevices.usUsagePage = v46;
    if ( v46 )
      v47 = DllFileMgr::DllFileMgr(v46, 0);
    else
      v47 = 0;
    qword_1000AAC98 = v47;
    v48 = (const unsigned __int16 *)(**(__int64 (__fastcall ***)(struct IEngineInterface *))a1)(a1);
    Str::Str((Str *)&pRawInputDevices, v48);
    v49 = !DllFileMgr::Open(qword_1000AAC98, (const struct Str *)&pRawInputDevices, g_bDebugEnabled, L"input\\");
    operator delete(Block);
    if ( v49 )
    {
      *(_QWORD *)&pRawInputDevices.usUsagePage = 0;
      pRawInputDevices.hwndTarget = 0;
      Block = 0;
      v50 = (const unsigned __int16 *)*((_QWORD *)Str::Str((Str *)v92, 0x37Cu) + 2);
      v51 = (**(__int64 (__fastcall ***)(struct IEngineInterface *))a1)(a1);
      Str::Format((Str *)&pRawInputDevices, v50, v51);
      operator delete(v93);
      LOBYTE(v76) = 1;
      DialogHelper::ShowMessageBox(0x385u, 0, 1u, 0xFFFEu, 0, (const unsigned __int16 *)Block, v76, v77);
      CleanupEngine(0);
    }
    if ( !CreateGameWindow() )
    {
      Log(0x10u, 1198, "Engine.cpp", L"Window Creation Failed");
      CleanupEngine(0);
    }
    if ( (_BYTE)g_bMediaCenter )
    {
      Log(0x10u, 1211, "Engine.cpp", L"Initializing MCE Dialog");
      DialogHelper::InitMCE(0, v52);
      if ( (_BYTE)g_bMediaCenter )
      {
        Log(0x10u, 1220, "Engine.cpp", L"Registering for raw input, for remote control");
        pRawInputDevices.usUsagePage = 12;
        pRawInputDevices.usUsage = 1;
        pRawInputDevices.dwFlags = 0;
        pRawInputDevices.hwndTarget = g_hWnd;
        if ( !RegisterRawInputDevices(&pRawInputDevices, 1u, 0x10u) )
        {
          LODWORD(ppv) = GetLastError();
          Log(0x10u, 1231, "Engine.cpp", L"Register failed, winerror %d", ppv);
        }
      }
    }
    Log(0x10u, 1237, "Engine.cpp", L"Adding system events");
    Event::RegisterEventType(2, Event_MouseEnter::Create);
    Event::RegisterEventType(4, Event_MouseDown::Create);
    Event::RegisterEventType(5, Event_MouseDoubleClick::Create);
    Event::RegisterEventType(3, Event_MouseLeave::Create);
    Event::RegisterEventType(6, Event_MouseRelease::Create);
    Event::RegisterEventType(7, Event_MouseReleaseOut::Create);
    Event::RegisterEventType(8, Event_MouseStatusBarClick::Create);
    Event::RegisterEventType(9, Event_MouseOuterDown::Create);
    Event::RegisterEventType(10, Event_MouseOuterRelease::Create);
    Event::RegisterEventType(11, Event_MouseGlobalRelease::Create);
    Event::RegisterEventType(1, Event_ButtonClick::Create);
    Event::RegisterEventType(13, Event_AnimationComplete::Create);
    Event::RegisterEventType(12, Event_AnimationFrame::Create);
    Event::RegisterEventType(14, Event_AnimationInt::Create);
    Event::RegisterEventType(15, Event_Timer::Create);
    Event::RegisterEventType(16, Event_FocusCheck::Create);
    Event::RegisterEventType(17, Event_FocusGot::Create);
    Event::RegisterEventType(18, Event_FocusLost::Create);
    Event::RegisterEventType(19, Event_FocusSelect::Create);
    Event::RegisterEventType(20, Event_FocusUnSelect::Create);
    Event::RegisterEventType(21, Event_FocusGetNodeAtDir::Create);
    Event::RegisterEventType(22, Event_FocusGetNextTabNode::Create);
    Event::RegisterEventType(23, Event_InitComplete::Create);
    Event::RegisterEventType(24, Event_DoDefaultAction::Create);
    Event::RegisterEventType(25, Event_DragCheck::Create);
    Event::RegisterEventType(26, Event_DragStart::Create);
    Event::RegisterEventType(27, Event_DragMove::Create);
    Event::RegisterEventType(28, Event_DragEnd::Create);
    Event::RegisterEventType(29, Event_KeyDown::Create);
    Event::RegisterEventType(30, Event_KeyUp::Create);
    Event::RegisterEventType(31, Event_AccessGetParent::Create);
    Event::RegisterEventType(32, Event_AccessGetChildCount::Create);
    Event::RegisterEventType(33, Event_AccessGetChild::Create);
    Event::RegisterEventType(34, Event_TipClose::Create);
    Event::RegisterEventType(37, Event_DpiChange::Create);
    Event::RegisterEventType(35, Event_ControllerKey::Create);
    Log(0x10u, 1280, "Engine.cpp", L"Registering Node Types");
    NodeBase::RegisterNodeType((wchar_t *)L"Button", (struct NodeBase *(*const)(unsigned int *))NodeButton::CreateNode);
    NodeBase::RegisterNodeType((wchar_t *)L"Label", (struct NodeBase *(*const)(unsigned int *))NodeLabel::CreateNode);
    NodeBase::RegisterNodeType((wchar_t *)L"Base", (struct NodeBase *(*const)(unsigned int *))NodeBase::CreateNode);
    memset(NodeBase::m_RenderLayerNodeCount, 0, 0x18u);
    NodeBase::m_RenderLayerNodeCountInitialized = 1;
    NodeBase::RegisterNodeType((wchar_t *)L"Sprite", (struct NodeBase *(*const)(unsigned int *))NodeSprite::CreateNode);
    NodeBase::RegisterNodeType(
      (wchar_t *)L"Emitter",
      (struct NodeBase *(*const)(unsigned int *))NodeEmitter::CreateNode);
    NodeBase::RegisterNodeType((wchar_t *)L"Shot", (struct NodeBase *(*const)(unsigned int *))NodeShot::CreateNode);
    NodeBase::RegisterNodeType((wchar_t *)L"Number", (struct NodeBase *(*const)(unsigned int *))NodeNumber::CreateNode);
    Log(0x10u, 1291, "Engine.cpp", L"Initializing Timekeeping");
    if ( !Timekeeping::InitializeTimekeeping(v53) )
    {
      Log(0x10u, 1294, "Engine.cpp", L"Failed to initialize timekeeping");
      CleanupEngine(0);
    }
    DialogHelper::m_DialogShutdown = Engine_ResetTimer;
    Log(0x10u, 1304, "Engine.cpp", L"Initializing ResourceManager");
    v54 = (ResourceManager *)operator new(0x80u);
    if ( v54 )
      v55 = ResourceManager::ResourceManager(v54);
    else
      v55 = 0;
    g_pResourceManager = v55;
    CheckAllocation(v55);
    if ( !ResourceManager::Initialize(g_pResourceManager) )
    {
      Log(0x10u, 1308, "Engine.cpp", L"Failed to initialize ResourceManager");
      CleanupEngine(0);
    }
    v83[0] = 0;
    v82 = g_hRenderWindow;
    v83[1] = 32;
    (*(void (__fastcall **)(void *, _QWORD *, char *))(*(_QWORD *)g_pInterface + 24LL))(
      g_pInterface,
      v83,
      (char *)v83 + 4);
    if ( g_bDoubleDPI )
    {
      LODWORD(v83[0]) *= 2;
      HIDWORD(v83[0]) *= 2;
    }
    Log(0x10u, 1331, "Engine.cpp", L"Initializing RenderManager");
    v56 = (RenderManager *)operator new(0xD8u);
    if ( v56 )
      v57 = RenderManager::RenderManager(v56);
    else
      v57 = 0;
    g_pRenderManager = v57;
    CheckAllocation(v57);
    if ( !RenderManager::Initialize(g_pRenderManager, (const struct RenderInitializeOptions *)&v82) )
    {
      Log(0x10u, 1335, "Engine.cpp", L"Failed to initialize RenderManager");
      CleanupEngine(0);
    }
    Log(0x10u, 1342, "Engine.cpp", L"Initializing Audio");
    v58 = operator new(0x38u);
    if ( v58 )
    {
      v58[8] = 0;
      v58[9] = 0;
      v58[10] = 16;
      *((_QWORD *)v58 + 6) = 0;
      *((_QWORD *)v58 + 2) = 0;
      *((_QWORD *)v58 + 3) = 2;
      v58[2] = 100;
      *v58 = 100;
      v58[1] = 100;
    }
    else
    {
      v58 = 0;
    }
    g_pAudio = (Audio *)v58;
    CheckAllocation(v58);
    if ( !Audio::Initialize(g_pAudio) )
    {
      Log(0x10u, 1346, "Engine.cpp", L"Failed to initialize Audio");
      CleanupEngine(0);
    }
    Log(0x10u, 1354, "Engine.cpp", L"Initializing XNA Common Controller");
    v59 = (CommonControllerThread *)operator new(0x90u);
    if ( v59 )
      v60 = CommonControllerThread::CommonControllerThread(v59, g_hWnd, (bool)g_bMediaCenter, 0);
    else
      v60 = 0;
    g_pCommonController = v60;
    if ( *((_QWORD *)v60 + 1) )
      Thread::End(v60);
    *((_BYTE *)v60 + 20) = 1;
    *((_QWORD *)v60 + 1) = CreateThread(0, 0, sThreadProc, v60, 0, (LPDWORD)v60 + 4);
    Log(0x10u, 1361, "Engine.cpp", L"Initializing Timer");
    v61 = (void **)operator new(0x50u);
    if ( v61 )
    {
      *v61 = malloc(0x40u);
      v61[1] = malloc(0x200u);
      *((_DWORD *)v61 + 4) = 0;
      *((_DWORD *)v61 + 5) = 16;
      v61[3] = malloc(0x40u);
      v61[4] = malloc(0x40u);
      *((_DWORD *)v61 + 10) = 0;
      *((_DWORD *)v61 + 11) = 16;
      v61[6] = malloc(0x40u);
      v61[7] = malloc(0x200u);
      *((_DWORD *)v61 + 16) = 0;
      *((_DWORD *)v61 + 17) = 16;
    }
    else
    {
      v61 = 0;
    }
    g_pTimer = (Timer *)v61;
    CheckAllocation(v61);
    Log(0x10u, 1372, "Engine.cpp", L"Loading Fonts");
    Xml = XmlManager::GetXml(g_pXmlManager, L"xml\\Fonts.xml");
    if ( Xml )
    {
      v63 = XmlNode::XPathElementSearch(Xml, L"/Font", &pdwDefaultLayout);
      LODWORD(ppva) = pdwDefaultLayout;
      Log(0x10u, 1383, "Engine.cpp", L"%d Fonts Found", ppva);
      v64 = 0;
      if ( pdwDefaultLayout )
      {
        v65 = v63;
        do
        {
          NodeValue = XmlNode::GetNodeValue(*v65);
          Log(0x10u, 1388, "Engine.cpp", L"Loading Font: %s", NodeValue);
          if ( AddFontResourceW(NodeValue) )
          {
            v67 = LoadedFonts + 1;
            LoadedFonts = v67;
            v68 = dword_1000A6D44;
            if ( v67 <= dword_1000A6D44 )
            {
              v70 = qword_1000A6D50;
              goto LABEL_118;
            }
            dword_1000A6D44 += dword_1000A6D48;
            v69 = realloc(qword_1000A6D50, 8LL * (unsigned int)(dword_1000A6D48 + v68));
            v70 = v69;
            if ( v69 )
            {
              qword_1000A6D50 = v69;
              v67 = LoadedFonts;
LABEL_118:
              v70[v67 - 1] = NodeValue;
              goto LABEL_119;
            }
            CheckAllocation(0);
          }
          else
          {
            Log(0x10u, 1412, "Engine.cpp", L"Couldn't add font: %s", NodeValue);
            operator delete(NodeValue);
          }
LABEL_119:
          ++v64;
          ++v65;
        }
        while ( v64 < pdwDefaultLayout );
      }
      operator delete(v63);
    }
    else
    {
      Log(0x10u, 1426, "Engine.cpp", L"No Font Xml Found");
    }
    Log(0x10u, 1431, "Engine.cpp", L"Registering for session notification");
    WTSRegisterSessionNotification(g_hWnd, 0);
    v71 = XmlManager::GetXml(g_pXmlManager, L"engine.xml");
    g_bInInitializer = 1;
    Log(0x10u, 1439, "Engine.cpp", L"Engine Initialization Complete: Initializing Game Code.");
    if ( !(*(unsigned __int8 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 96LL))(a1) )
    {
      Log(0x10u, 1442, "Engine.cpp", L"Game code initialization failed.");
      CleanupEngine(0);
    }
    g_bInInitializer = 0;
    if ( v71 )
      g_bFocusPause = (int)XmlNode::GetXmlInt(v71, L"/PauseOnLostFocus", -1) > 0;
    Engine_LoadingComplete();
    g_Accelerator = 0;
    if ( (*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 80LL))(a1) )
    {
      v72 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 80LL))(a1);
      v73 = GetModuleHandleW(0);
      g_Accelerator = LoadAcceleratorsW(v73, v72);
    }
    g_bInitializing = 0;
    v88(&g_GdiPlusToken);
    while ( 1 )
    {
      while ( !PeekMessageW(&Msg, 0, 0, 0, 0) )
        RunEngine();
      if ( !GetMessageW(&Msg, 0, 0, 0) )
        break;
      if ( !g_Accelerator || !TranslateAcceleratorW(g_hWnd, g_Accelerator, &Msg) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
    }
    v89(g_GdiPlusToken);
    (*(void (__fastcall **)(struct IEngineInterface *))(*(_QWORD *)a1 + 144LL))(a1);
    CleanupEngine(0);
  }
  return 0;
}

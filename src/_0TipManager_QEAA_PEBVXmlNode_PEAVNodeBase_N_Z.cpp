// Hidden C++ exception states: #wind=3
TipManager *__fastcall TipManager::TipManager(TipManager *this, const struct XmlNode *a2, struct NodeBase *a3)
{
  const wchar_t *v6; // r8

  *(_QWORD *)this = &TipManager::`vftable';
  *((_QWORD *)this + 1) = malloc(0x80u);
  *((_QWORD *)this + 2) = malloc(0x80u);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 16;
  `eh vector constructor iterator'(
    (char *)this + 48,
    0x18u,
    3,
    (void (*)(void *))Str::Str,
    (void (*)(void *))DllFileMgr::ResourceCacheEntry::~ResourceCacheEntry);
  v6 = L"<no xml source file>";
  if ( *((_QWORD *)a2 + 12) )
    v6 = (const wchar_t *)*((_QWORD *)a2 + 12);
  Log(0x2000u, L"Initializing tip manager (source %s)", v6);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = a3;
  *((_QWORD *)this + 17) = 0;
  *((_BYTE *)this + 144) = 0;
  *((_BYTE *)this + 145) = 1;
  Str::operator=((char *)this + 48, &unk_1000AB5D0);
  Str::operator=((char *)this + 72, &unk_1000AB600);
  Str::operator=((char *)this + 96, &unk_1000AB5E8);
  if ( !*((_BYTE *)this + 144) )
  {
    *((_BYTE *)this + 144) = 1;
    Array<IEventListener *>::Add((__int64)g_pUserInterface + 120, (__int64)this);
    Array<IEventListener *>::Add((__int64)g_pUserInterface + 96, (__int64)this);
  }
  TipManager::parseXml(this, a2);
  if ( (int)SortedListW<TipManager::TipInfo *>::BinSearch((char *)this + 8, L"PinIntro", 0, *((unsigned int *)this + 6)) >= 0 )
  {
    TipManager::ShowTipIfEnabledAtLoc(this, L"PinIntro", 0, 0, 0, 0, 1);
    TipManager::HideTip(this, 1);
  }
  if ( (int)SortedListW<TipManager::TipInfo *>::BinSearch((char *)this + 8, L"PinHelp", 0, *((unsigned int *)this + 6)) >= 0 )
  {
    TipManager::ShowTipIfEnabledAtLoc(this, L"PinHelp", 0, 0, 0, 0, 1);
    TipManager::HideTip(this, 1);
  }
  if ( (int)SortedListW<TipManager::TipInfo *>::BinSearch((char *)this + 8, L"PinError", 0, *((unsigned int *)this + 6)) >= 0 )
  {
    TipManager::ShowTipIfEnabledAtLoc(this, L"PinError", 0, 0, 0, 0, 1);
    TipManager::HideTip(this, 1);
  }
  return this;
}

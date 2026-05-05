void __fastcall RenderManager::SetEngineState(__int64 a1, unsigned int a2)
{
  Log(2u, L"SetState: %d", a2);
  *(_DWORD *)(a1 + 212) = a2;
  *(_BYTE *)(a1 + 20) = 1;
  *(_BYTE *)(a1 + 88) = 1;
}

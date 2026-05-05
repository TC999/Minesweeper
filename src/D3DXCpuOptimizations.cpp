__int64 D3DXCpuOptimizations()
{
  __int64 v0; // rdi
  BOOL v1; // eax
  BOOL v2; // edx
  int v3; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+34h] [rbp-24h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  if ( g_CpuOptimization == 0xFFFF )
  {
    v0 = 0;
    g_CpuOptimization = 0;
    memcpy(&g_D3DXFastTable, &g_D3DXFastTableC, 0x250u);
    phkResult = 0;
    v1 = !RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Direct3D", 0, 0x2000000u, &phkResult)
      && GetD3DRegValue("DisablePSGP", (BYTE *)&v10, &phkResult);
    phkResult = 0;
    v10 &= -v1;
    v2 = !RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Direct3D", 0, 0x2000000u, &phkResult)
      && GetD3DRegValue("DisableD3DXPSGP", (BYTE *)&v11, &phkResult);
    v3 = v10;
    if ( v2 )
      v3 = v11;
    v10 = v3;
    if ( v3 != 1 )
    {
      if ( IsProcessorFeaturePresent(6u) )
      {
        _RAX = 0;
        __asm { cpuid }
        phkResult = (HKEY)__PAIR64__(_RDX, _RBX);
        v13 = _RCX;
        while ( *((_BYTE *)&phkResult + v0) == aGenuineintel[v0] )
        {
          if ( ++v0 >= 12 )
            return g_CpuOptimization;
        }
        g_CpuOptimization = 2;
      }
    }
  }
  return g_CpuOptimization;
}

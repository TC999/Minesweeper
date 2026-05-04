__int64 __fastcall D3DXCore::CFont::DrawTextAW(
        D3DXCore::CFont *this,
        struct ID3DXSprite *a2,
        const WCHAR *a3,
        UINT a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int *a9)
{
  __int64 v9; // r13
  UINT v10; // edi
  const WCHAR *v11; // r14
  D3DXCore::CFont *v12; // rbp
  __int64 result; // rax
  int v14; // esi
  unsigned int v15; // r15d
  const WCHAR *v16; // rax
  const WCHAR *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  _WORD *v20; // rsi
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  size_t v24; // rax
  void *v25; // r12
  HRESULT v26; // eax
  unsigned int ii; // ebx
  void *v28; // rsi
  int v29; // ecx
  int v30; // r12d
  const WCHAR *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rdx
  signed int v36; // edi
  unsigned int jj; // ebx
  size_t v38; // rax
  void *v39; // rsi
  signed int v40; // r12d
  int v41; // r10d
  __int64 v42; // rbx
  __int64 v43; // r8
  signed int v44; // edi
  __int64 v45; // rax
  __int64 v46; // r11
  __int64 v47; // rsi
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned int kk; // ebx
  void *v54; // rsi
  unsigned int mm; // ebx
  size_t v56; // rax
  void *v57; // rdi
  char *v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // esi
  int v62; // r13d
  BOOL v63; // r12d
  unsigned int v64; // ebx
  size_t v65; // rax
  void *v66; // rdi
  HRESULT v67; // eax
  __int64 v68; // r13
  signed int v69; // ecx
  _WORD *v70; // rdx
  __int64 v71; // rdi
  signed int v72; // esi
  unsigned int v73; // r14d
  _QWORD *v74; // r15
  _QWORD *v75; // rsi
  _QWORD *v76; // r14
  int *v77; // r8
  struct D3DXCore::_D3DXFONT_CELL *v78; // r10
  __int64 v79; // rdx
  __int64 v80; // r11
  __int64 v81; // r9
  __int64 v82; // r13
  unsigned int v83; // ebp
  __int64 v84; // rdx
  unsigned int v85; // ecx
  bool v86; // cc
  unsigned int v87; // r14d
  unsigned int v88; // eax
  unsigned int i; // ebx
  int v90; // esi
  void *v91; // r12
  unsigned int j; // ebx
  size_t v93; // rax
  void *v94; // r12
  unsigned int k; // ebx
  void *v96; // r12
  HDC v97; // rcx
  INT *v98; // rax
  __int64 nGlyphs; // r12
  _QWORD *v100; // r15
  __int64 v101; // rdx
  __int64 m; // r9
  __int64 v103; // rcx
  WCHAR v104; // r8
  int v105; // r13d
  signed int v106; // ebx
  _QWORD *v107; // r14
  __int64 v108; // rsi
  __int64 v109; // rdi
  wint_t v110; // r12
  __int64 v111; // r12
  __int64 *v112; // rsi
  __int64 v113; // rdi
  int v114; // r11d
  __int64 v115; // r9
  _BYTE *v116; // rdx
  __int64 v117; // r12
  __int64 v118; // rcx
  __int64 v119; // r10
  _BYTE *v120; // rax
  __int64 v121; // r13
  __int64 v122; // r8
  __int64 v123; // r14
  __int64 v124; // r15
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // r8
  __int64 v128; // rcx
  __int64 v129; // rdx
  __m128i v130; // xmm1
  __int64 v131; // rbx
  __int64 v132; // r13
  __int64 v133; // r14
  __int64 v134; // r12
  __int64 v135; // r8
  __int64 v136; // rbx
  __int64 v137; // r13
  __int64 v138; // rcx
  __int16 v139; // dx
  __int64 v140; // rcx
  int v141; // edx
  __int64 v142; // rcx
  __int64 v143; // r13
  __int64 v144; // r14
  __int64 v145; // r12
  __int64 v146; // r8
  __int64 v147; // rbx
  __int64 v148; // r13
  __int64 v149; // rcx
  __int16 v150; // dx
  __int64 v151; // rcx
  int v152; // edx
  unsigned int n; // ebx
  signed int v154; // r12d
  signed int v155; // r12d
  __int64 v156; // r13
  wint_t v157; // di
  signed int v158; // r12d
  __int64 v159; // rdi
  signed int v160; // r12d
  __int64 v161; // rdi
  signed int v162; // ecx
  _WORD *v163; // rdx
  size_t v164; // rax
  void *v165; // r12
  __int64 v166; // r8
  __int64 v167; // r10
  __int64 v168; // r9
  __int64 v169; // r11
  unsigned int nn; // ebx
  size_t v171; // rax
  void *v172; // rdi
  unsigned int v173; // r11d
  struct tagRECT *v174; // rdi
  int v175; // r15d
  unsigned int v176; // r14d
  signed int v177; // eax
  int v178; // edx
  LONG right; // ecx
  __int64 v180; // rcx
  int *v181; // r8
  unsigned int v182; // r10d
  unsigned int v183; // r9d
  int v184; // esi
  unsigned int v185; // r12d
  struct D3DXCore::_D3DXFONT_CELL *v186; // rdx
  __int64 v187; // rax
  bool v188; // zf
  int v189; // r11d
  __int64 v190; // r14
  int v191; // ecx
  int v192; // r12d
  unsigned int v193; // r8d
  __int64 v194; // rcx
  signed int v195; // r15d
  __int64 v196; // r12
  __int64 v197; // r8
  _QWORD *v198; // r13
  __int64 v199; // rax
  int v200; // edx
  int v201; // eax
  __int64 v202; // rbx
  unsigned int v203; // esi
  signed int v204; // esi
  __int64 v205; // r11
  __int64 v206; // rdx
  __int64 v207; // r9
  __int64 v208; // r8
  __int64 v209; // r10
  int v210; // eax
  __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rax
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // r10
  int v221; // eax
  __int64 v222; // rcx
  __int64 v223; // rax
  unsigned int v224; // esi
  int v225; // esi
  int left; // r12d
  int top; // esi
  unsigned int v228; // r15d
  int v229; // r8d
  LONG v230; // eax
  __int64 v231; // r13
  unsigned int v232; // r14d
  __int64 v233; // rax
  unsigned int v234; // r8d
  __int64 v235; // r10
  int *v236; // r9
  __int64 v237; // r11
  int v238; // ebx
  __int64 v239; // rcx
  int v240; // edx
  int v241; // r9d
  int v242; // edx
  int v243; // ecx
  int v244; // eax
  int v245; // r9d
  float v246; // xmm2_4
  float v247; // xmm3_4
  LONG v248; // ecx
  LONG v249; // ecx
  int v250; // eax
  LONG bottom; // ecx
  __int64 v252; // rax
  DWORD cchWideChar; // [rsp+28h] [rbp-160h]
  signed int v254; // [rsp+50h] [rbp-138h]
  unsigned int v255; // [rsp+54h] [rbp-134h] BYREF
  unsigned int v256; // [rsp+58h] [rbp-130h]
  signed int v257; // [rsp+5Ch] [rbp-12Ch]
  int v258; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v259; // [rsp+64h] [rbp-124h] BYREF
  unsigned int v260; // [rsp+68h] [rbp-120h]
  int v261; // [rsp+6Ch] [rbp-11Ch]
  int v262; // [rsp+70h] [rbp-118h]
  int v263; // [rsp+74h] [rbp-114h]
  struct D3DXCore::_D3DXFONT_CELL *v264; // [rsp+78h] [rbp-110h] BYREF
  int v265; // [rsp+80h] [rbp-108h]
  int v266; // [rsp+84h] [rbp-104h]
  int *v267; // [rsp+88h] [rbp-100h] BYREF
  __int64 v268; // [rsp+90h] [rbp-F8h]
  __int64 v269; // [rsp+98h] [rbp-F0h]
  __int64 v270; // [rsp+A0h] [rbp-E8h]
  __int64 v271; // [rsp+A8h] [rbp-E0h]
  __int64 v272; // [rsp+B0h] [rbp-D8h] BYREF
  int v273; // [rsp+B8h] [rbp-D0h]
  __int64 v274; // [rsp+C0h] [rbp-C8h] BYREF
  int v275; // [rsp+C8h] [rbp-C0h]
  int v276; // [rsp+D0h] [rbp-B8h]
  tagGCP_RESULTSA Results; // [rsp+E0h] [rbp-A8h] BYREF
  const WCHAR *v280; // [rsp+1A0h] [rbp+18h] BYREF
  UINT v281; // [rsp+1A8h] [rbp+20h]

  v281 = a4;
  v280 = a3;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  v12 = this;
  v276 = 0;
  if ( !a3 && a4 || (a6 & 0xFFFDFA80) != 0 )
    return 2289436780LL;
  v14 = a8;
  v15 = a6 & 0x20000;
  v262 = a6 & 0x20000;
  if ( a4 == -1 )
  {
    v10 = 0;
    v281 = 0;
    if ( a8 )
    {
      if ( !*a3 )
        goto LABEL_15;
      v17 = a3;
      do
      {
        ++v17;
        ++v10;
      }
      while ( *v17 );
    }
    else
    {
      if ( !*(_BYTE *)a3 )
        goto LABEL_15;
      v16 = a3;
      do
      {
        v16 = (const WCHAR *)((char *)v16 + 1);
        ++v10;
      }
      while ( *(_BYTE *)v16 );
    }
    v281 = v10;
  }
LABEL_15:
  v257 = 0;
  v254 = 0;
  if ( !v10 )
  {
    v87 = 0;
    goto LABEL_147;
  }
  if ( !dword_1000AB198 )
  {
    if ( a8 && !D3DXCore::g_bUnicodeAPI )
    {
      v88 = WideCharToMultiByte(0, 0, a3, v10, 0, 0, 0, 0);
      i = *((_DWORD *)v12 + 612);
      v90 = v88;
      if ( v88 > i )
      {
        if ( i )
          goto LABEL_154;
        for ( i = 16; i < v88; i *= 2 )
LABEL_154:
          ;
        v91 = operator new(i, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        if ( !v91 )
          goto LABEL_36;
        operator delete(*((void **)v12 + 305));
        *((_QWORD *)v12 + 305) = v91;
        *((_DWORD *)v12 + 612) = i;
      }
      WideCharToMultiByte(0, 0, v11, v10, *((LPSTR *)v12 + 305), v90, 0, 0);
      v11 = (const WCHAR *)*((_QWORD *)v12 + 305);
      v10 = v90;
      v14 = 0;
    }
    LODWORD(v19) = D3DXCore::CArray<unsigned short>::Assure((char *)v12 + 2536, v10, 1);
    if ( (int)v19 < 0 )
      return (unsigned int)v19;
    j = *((_DWORD *)v12 + 620);
    if ( v10 > j )
    {
      if ( j )
        goto LABEL_163;
      for ( j = 16; j < v10; j *= 2 )
LABEL_163:
        ;
      v93 = 4LL * j;
      if ( !is_mul_ok(j, 4u) )
        v93 = -1;
      v94 = operator new(v93, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      if ( !v94 )
        goto LABEL_36;
      operator delete(*((void **)v12 + 309));
      *((_QWORD *)v12 + 309) = v94;
      *((_DWORD *)v12 + 620) = j;
    }
    k = *((_DWORD *)v12 + 624);
    if ( v10 > k )
    {
      if ( k )
        goto LABEL_172;
      for ( k = 16; k < v10; k *= 2 )
LABEL_172:
        ;
      v96 = operator new(k, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      if ( !v96 )
        goto LABEL_36;
      operator delete(*((void **)v12 + 311));
      *((_QWORD *)v12 + 311) = v96;
      *((_DWORD *)v12 + 624) = k;
    }
    LODWORD(v19) = D3DXCore::CArray<int>::Assure((char *)v12 + 2568, v10, 1);
    if ( (int)v19 < 0 )
      return (unsigned int)v19;
    memset(*((void **)v12 + 311), 0, (int)v10);
    **((_BYTE **)v12 + 311) = v15 != 0 ? 64 : 0x80;
    memset(&Results, 0, sizeof(Results));
    v97 = (HDC)*((_QWORD *)v12 + 5);
    Results.lpOrder = (UINT *)*((_QWORD *)v12 + 309);
    v98 = (INT *)*((_QWORD *)v12 + 321);
    Results.lStructSize = 64;
    Results.lpDx = v98;
    Results.lpClass = (LPSTR)*((_QWORD *)v12 + 311);
    Results.lpGlyphs = (LPWSTR)*((_QWORD *)v12 + 317);
    LODWORD(v98) = *((_DWORD *)v12 + 39);
    Results.nGlyphs = v10;
    cchWideChar = (unsigned __int16)v98 & 0x13A | 0x80000;
    if ( v14 )
      GetCharacterPlacementW(v97, v11, v10, 0, (LPGCP_RESULTSW)&Results, cchWideChar);
    else
      GetCharacterPlacementA(v97, (LPCSTR)v11, v10, 0, &Results, cchWideChar);
    nGlyphs = (int)Results.nGlyphs;
    v254 = Results.nGlyphs;
    result = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2600, Results.nGlyphs, 1);
    if ( (int)result < 0 )
      return result;
    memset(*((void **)v12 + 325), 0, 8 * nGlyphs);
    v100 = (_QWORD *)((char *)v12 + 2456);
    result = D3DXCore::CArray<unsigned short>::Assure((char *)v12 + 2456, (unsigned int)nGlyphs, 1);
    if ( (int)result < 0 )
      return result;
    v101 = 0;
    for ( m = v14; v101 < nGlyphs; ++v101 )
    {
      v103 = *(unsigned int *)(*((_QWORD *)v12 + 309) + 4 * v101);
      if ( v14 )
        v104 = v11[v103];
      else
        v104 = *((char *)v11 + v103);
      *(_WORD *)(*v100 + 2 * v101) = v104;
    }
    v87 = v254;
    v105 = 0;
    LODWORD(v280) = 0;
    v106 = 0;
    if ( v254 <= 0 )
    {
LABEL_196:
      v111 = v257;
      v112 = (__int64 *)((char *)v12 + 2408);
      result = D3DXCore::CArray<D3DXCore::D3DXFONT_WORD>::Assure((char *)v12 + 2408, (unsigned int)(v257 + 1), 0, m);
      if ( (int)result < 0 )
        return result;
      v113 = v257;
      *(_DWORD *)(*v112 + 16LL * v257 + 8) = v87;
      if ( v105 )
      {
        v114 = 0;
        v115 = 0;
        if ( v111 > 0 )
        {
          do
          {
            v116 = (_BYTE *)(*v112 + 16 * v115 + 12);
            do
            {
              if ( (*v116 & 8) != 0 )
                break;
              ++v115;
              ++v114;
              v116 += 16;
            }
            while ( v115 < v113 );
            LODWORD(v280) = v114;
            v117 = v115;
            if ( v115 >= v113 )
              break;
            v118 = *v112;
            v119 = 16 * v115;
            v120 = (_BYTE *)(16 * v115 + *v112 + 12);
            do
            {
              if ( (*v120 & 8) == 0 )
                break;
              ++v115;
              ++v114;
              v120 += 16;
            }
            while ( v115 < v113 );
            if ( v117 < v115 )
            {
              v121 = *(int *)(v119 + v118 + 8);
              v122 = v119;
              v123 = *(int *)(16 * v115 + v118 + 8);
              v124 = v115 - v117;
              v261 = (*(_DWORD *)(16 * v115 + v118 + 8) - (int)v121) / 2;
              v125 = v115 - v117;
              do
              {
                v122 += 16;
                --v125;
                *(_DWORD *)(v122 + *v112 - 8) = v121 + v123 - *(_DWORD *)(v122 + *v112 + 8);
              }
              while ( v125 );
              v126 = (v114 - (int)v280) / 2;
              v127 = v126;
              if ( v126 > 0 )
              {
                v128 = v119;
                v129 = 16 * v115 - 16;
                do
                {
                  v130 = _mm_loadu_si128((const __m128i *)(v128 + *v112));
                  *(__m128i *)(v128 + *v112) = _mm_loadu_si128((const __m128i *)(v129 + *v112));
                  v128 += 16;
                  *(__m128i *)(v129 + *v112) = v130;
                  v129 -= 16;
                  --v127;
                }
                while ( v127 );
                v12 = this;
              }
              v131 = v121;
              v132 = v123;
              v133 = v261;
              if ( v261 > 0LL )
              {
                v134 = 4 * v132 - 4;
                v135 = 4 * v131;
                v136 = 2 * v131;
                v137 = 2 * v132 - 2;
                do
                {
                  v138 = *((_QWORD *)v12 + 317);
                  v139 = *(_WORD *)(v136 + v138);
                  *(_WORD *)(v136 + v138) = *(_WORD *)(v137 + v138);
                  v136 += 2;
                  *(_WORD *)(v137 + *((_QWORD *)v12 + 317)) = v139;
                  v140 = *((_QWORD *)v12 + 321);
                  v137 -= 2;
                  v141 = *(_DWORD *)(v135 + v140);
                  *(_DWORD *)(v135 + v140) = *(_DWORD *)(v134 + v140);
                  v135 += 4;
                  *(_DWORD *)(v134 + *((_QWORD *)v12 + 321)) = v141;
                  v134 -= 4;
                  --v133;
                }
                while ( v133 );
                v112 = (__int64 *)((char *)v12 + 2408);
              }
              do
              {
                v142 = *(int *)(*v112 + v119 + 8);
                v143 = *(int *)(*v112 + v119 + 24);
                v144 = (*(_DWORD *)(*v112 + v119 + 24) - (int)v142) / 2;
                if ( v144 > 0 )
                {
                  v145 = 4 * v143 - 4;
                  v146 = 4 * v142;
                  v147 = 2 * v142;
                  v148 = 2 * v143 - 2;
                  do
                  {
                    v149 = *((_QWORD *)v12 + 317);
                    v150 = *(_WORD *)(v149 + v147);
                    *(_WORD *)(v149 + v147) = *(_WORD *)(v149 + v148);
                    v147 += 2;
                    *(_WORD *)(v148 + *((_QWORD *)v12 + 317)) = v150;
                    v151 = *((_QWORD *)v12 + 321);
                    v148 -= 2;
                    v152 = *(_DWORD *)(v151 + v146);
                    *(_DWORD *)(v151 + v146) = *(_DWORD *)(v151 + v145);
                    v146 += 4;
                    *(_DWORD *)(v145 + *((_QWORD *)v12 + 321)) = v152;
                    v145 -= 4;
                    --v144;
                  }
                  while ( v144 );
                  v112 = (__int64 *)((char *)v12 + 2408);
                }
                v119 += 16;
                --v124;
              }
              while ( v124 );
            }
          }
          while ( v115 < v113 );
          v87 = v254;
          LODWORD(v111) = v257;
        }
      }
      n = *((_DWORD *)v12 + 608);
      LODWORD(v9) = 0;
      if ( (unsigned int)v111 > n )
      {
        if ( n )
          goto LABEL_265;
        for ( n = 16; n < (unsigned int)v111; n *= 2 )
LABEL_265:
          ;
        v164 = 12LL * n;
        if ( !is_mul_ok(n, 0xCu) )
          v164 = -1;
        v165 = operator new(v164, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
        if ( !v165 )
          return 2147942414LL;
        operator delete(*((void **)v12 + 303));
        *((_QWORD *)v12 + 303) = v165;
        *((_DWORD *)v12 + 608) = n;
      }
      if ( v113 > 0 )
      {
        v166 = 0;
        v167 = 0;
        do
        {
          *(_DWORD *)(v166 + *((_QWORD *)v12 + 303)) = 0;
          *(_DWORD *)(*((_QWORD *)v12 + 303) + v166 + 4) = 0;
          *(_DWORD *)(*((_QWORD *)v12 + 303) + v166 + 8) = 0;
          v168 = *(int *)(*v112 + v167 + 8);
          v169 = *(int *)(*v112 + v167 + 24);
          while ( v168 < v169 )
            *(_DWORD *)(*((_QWORD *)v12 + 303) + v166 + 4) += *(_DWORD *)(*((_QWORD *)v12 + 321) + 4 * v168++);
          v167 += 16;
          v166 += 12;
          --v113;
        }
        while ( v113 );
        v87 = v254;
      }
      result = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2552, v87, 1);
      if ( (int)result < 0 )
        return result;
      LODWORD(v19) = D3DXCore::CFont::Preload(
                       v12,
                       *((const unsigned __int16 **)v12 + 317),
                       v87,
                       *((struct D3DXCore::_D3DXFONT_CELL ***)v12 + 319));
      if ( (int)v19 < 0 )
        return (unsigned int)v19;
      goto LABEL_147;
    }
    v107 = (_QWORD *)((char *)v12 + 2408);
    v108 = 0;
    v269 = (__int64)v12 + 2408;
    while ( 1 )
    {
      result = D3DXCore::CArray<D3DXCore::D3DXFONT_WORD>::Assure(v107, (unsigned int)++v257, 0, m);
      if ( (int)result < 0 )
        return result;
      v109 = v106;
      *(_DWORD *)(v108 + *v107) = 0;
      *(_DWORD *)(v108 + *v107 + 4) = *(_DWORD *)(*((_QWORD *)v12 + 309) + 4LL * v106);
      *(_DWORD *)(v108 + *v107 + 8) = v106;
      *(_DWORD *)(v108 + *v107 + 12) = 0;
      v110 = *(_WORD *)(*v100 + 2LL * v106);
      if ( v110 == 32 )
        goto LABEL_258;
      if ( v110 == 13 )
        break;
      if ( v110 == 10 )
      {
        *(_DWORD *)(v108 + *v107 + 12) |= 2u;
        goto LABEL_193;
      }
      if ( v110 == 9 )
      {
        *(_DWORD *)(v108 + *v107 + 12) |= 4u;
        goto LABEL_193;
      }
      if ( *(_BYTE *)(v106 + *((_QWORD *)v12 + 311)) == 2 )
      {
        v154 = v106 + 1;
        if ( v106 + 1 < v254 )
        {
          do
          {
            if ( *(_BYTE *)(*((_QWORD *)v12 + 311) + v109 + 1) != 2 )
              break;
            if ( iswspace(*(_WORD *)(*v100 + 2 * v109 + 2)) )
              break;
            ++v154;
            ++v106;
            ++v109;
          }
          while ( v154 < v254 );
          v107 = (_QWORD *)((char *)v12 + 2408);
        }
        *(_DWORD *)(v108 + *v107 + 12) |= 8u;
        v105 = 1;
        LODWORD(v280) = 1;
        goto LABEL_259;
      }
      if ( iswalpha(v110) )
      {
        v155 = v106 + 1;
        if ( v106 + 1 < v254 )
        {
          v156 = 2LL * v106;
          do
          {
            v157 = *(_WORD *)(v156 + *v100 + 2);
            if ( !iswalpha(v157) && !iswdigit(v157) && v157 != 95 )
              break;
            v156 += 2;
            ++v155;
            ++v106;
          }
          while ( v155 < v254 );
        }
        goto LABEL_258;
      }
      if ( iswdigit(v110) )
      {
        v158 = v106 + 1;
        if ( v106 + 1 < v254 )
        {
          v159 = 2LL * v106 + 2;
          do
          {
            if ( !iswdigit(*(_WORD *)(v159 + *v100)) )
              break;
            v159 += 2;
            ++v158;
            ++v106;
          }
          while ( v158 < v254 );
        }
        goto LABEL_258;
      }
      if ( iswpunct(v110) )
      {
        v160 = v106 + 1;
        if ( v106 + 1 < v254 )
        {
          v161 = 2LL * v106 + 2;
          do
          {
            if ( !iswpunct(*(_WORD *)(v161 + *v100)) )
              break;
            ++v160;
            ++v106;
            v161 += 2;
          }
          while ( v160 < v254 );
          v12 = this;
          v107 = (_QWORD *)v269;
        }
LABEL_258:
        v105 = (int)v280;
LABEL_259:
        v162 = v106 + 1;
        if ( v106 + 1 < v254 )
        {
          v163 = (_WORD *)(*v100 + 2LL * v106 + 2);
          do
          {
            if ( *v163 != 32 )
              break;
            ++v162;
            ++v106;
            ++v163;
          }
          while ( v162 < v254 );
        }
        goto LABEL_194;
      }
      v105 = (int)v280;
LABEL_194:
      ++v106;
      v108 += 16;
      if ( v106 >= v254 )
      {
        v87 = v254;
        goto LABEL_196;
      }
    }
    *(_DWORD *)(v108 + *v107 + 12) |= 1u;
LABEL_193:
    v105 = (int)v280;
    goto LABEL_194;
  }
  if ( !a8 )
  {
    v18 = (unsigned int)MultiByteToWideChar(0, 0, (LPCCH)a3, v10, 0, 0);
    LODWORD(v19) = D3DXCore::CArray<unsigned short>::Assure((char *)v12 + 2456, v18, 1);
    if ( (int)v19 < 0 )
      return (unsigned int)v19;
    MultiByteToWideChar(0, 0, (LPCCH)v11, v10, *((LPWSTR *)v12 + 307), v18);
    v11 = (const WCHAR *)*((_QWORD *)v12 + 307);
    v10 = v18;
    v280 = v11;
    v281 = v18;
  }
  v20 = (_WORD *)((char *)v12 + 184);
  *((_WORD *)v12 + 92) = 0;
  *((_DWORD *)v12 + 47) = 0;
  LODWORD(v19) = ScriptApplyDigitSubstitution(&stru_1000AB220, (SCRIPT_CONTROL *)v12 + 47, (SCRIPT_STATE *)v12 + 92);
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  if ( v15 )
  {
    *v20 &= 0xFFE1u;
    *v20 |= 1u;
  }
  v21 = v10 + 1;
  v22 = (int)(3 * v10) / 2 + 16;
  v255 = v22;
  while ( 1 )
  {
    v23 = *((_DWORD *)v12 + 600);
    if ( v21 > v23 )
    {
      if ( !v23 )
      {
        v23 = 16;
        goto LABEL_28;
      }
      do
      {
        v23 *= 2;
LABEL_28:
        ;
      }
      while ( v23 < v21 );
      v24 = 8LL * v23;
      if ( !is_mul_ok(v23, 8u) )
        v24 = -1;
      v25 = operator new(v24, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
      if ( !v25 )
        goto LABEL_36;
      operator delete(*((void **)v12 + 299));
      *((_QWORD *)v12 + 299) = v25;
      *((_DWORD *)v12 + 600) = v23;
    }
    v26 = ScriptItemize_0(
            v11,
            v10,
            *((_DWORD *)v12 + 600),
            (const SCRIPT_CONTROL *)v12 + 47,
            (const SCRIPT_STATE *)v12 + 92,
            *((SCRIPT_ITEM **)v12 + 299),
            &v258);
    LODWORD(v19) = v26;
    if ( v26 >= 0 )
      break;
    if ( v26 != -2147024882 )
      return (unsigned int)v19;
    v21 = 2 * *((_DWORD *)v12 + 600);
  }
  ii = *((_DWORD *)v12 + 628);
  if ( v10 > ii )
  {
    if ( ii )
      goto LABEL_40;
    for ( ii = 16; ii < v10; ii *= 2 )
LABEL_40:
      ;
    v28 = operator new(ii, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( !v28 )
      goto LABEL_36;
    operator delete(*((void **)v12 + 313));
    *((_QWORD *)v12 + 313) = v28;
    *((_DWORD *)v12 + 628) = ii;
  }
  v29 = v258;
  v30 = 0;
  if ( v258 > 0 )
  {
    v31 = v280;
    do
    {
      v32 = *((_QWORD *)v12 + 299);
      v33 = *(int *)(v32 + v9);
      v34 = *(int *)(v32 + v9 + 8);
      LODWORD(v19) = ScriptBreak_0(
                       &v31[v33],
                       *(_DWORD *)(v32 + v9 + 8) - *(_DWORD *)(v32 + v9),
                       (const SCRIPT_ANALYSIS *)(v32 + 8LL * v30 + 4),
                       (SCRIPT_LOGATTR *)(v33 + *((_QWORD *)v12 + 313)));
      if ( (int)v19 < 0 )
        return (unsigned int)v19;
      v35 = v33;
      if ( v33 < v34 )
      {
        v36 = v257;
        do
        {
          if ( v33 == v35 || (*(_BYTE *)(v33 + *((_QWORD *)v12 + 313)) & 8) != 0 )
            ++v36;
          ++v33;
        }
        while ( v33 < v34 );
        v257 = v36;
        v10 = v281;
      }
      v29 = v258;
      ++v30;
      v9 += 8;
    }
    while ( v30 < v258 );
    v11 = v280;
    v22 = v255;
    LODWORD(v9) = 0;
  }
  jj = *((_DWORD *)v12 + 604);
  if ( v257 + 1 > jj )
  {
    if ( jj )
      goto LABEL_59;
    for ( jj = 16; jj < v257 + 1; jj *= 2 )
LABEL_59:
      ;
    v38 = 16LL * jj;
    if ( !is_mul_ok(jj, 0x10u) )
      v38 = -1;
    v39 = operator new(v38, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( !v39 )
      goto LABEL_36;
    operator delete(*((void **)v12 + 301));
    v29 = v258;
    *((_QWORD *)v12 + 301) = v39;
    *((_DWORD *)v12 + 604) = jj;
  }
  v40 = 0;
  v257 = 0;
  v41 = 0;
  v42 = 0;
  if ( v29 > 0 )
  {
    v43 = 0;
    v44 = 0;
    do
    {
      v45 = *((_QWORD *)v12 + 299);
      v46 = *(int *)(v45 + v43);
      v47 = *(int *)(v45 + v43 + 8);
      v48 = *(_DWORD *)(v45 + v43);
      v49 = v46;
      if ( v46 < v47 )
      {
        v50 = 16 * v42;
        do
        {
          if ( v48 == (_DWORD)v46 || (*(_BYTE *)(v49 + *((_QWORD *)v12 + 313)) & 8) != 0 )
          {
            *(_DWORD *)(v50 + *((_QWORD *)v12 + 301)) = v41;
            *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 4) = v48;
            *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 12) = 0;
            if ( v11[v49] == 13 )
              *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 12) |= 1u;
            if ( v11[v49] == 10 )
              *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 12) |= 2u;
            if ( v11[v49] == 9 )
              *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 12) |= 4u;
            v11 = v280;
            if ( (*(_WORD *)(*((_QWORD *)v12 + 299) + v43 + 4) & 0x800) != 0 )
              *(_DWORD *)(*((_QWORD *)v12 + 301) + v50 + 12) |= 8u;
            ++v44;
            ++v42;
            v50 += 16;
          }
          ++v49;
          ++v48;
        }
        while ( v49 < v47 );
        v29 = v258;
        v257 = v44;
      }
      ++v41;
      v43 += 8;
    }
    while ( v41 < v29 );
    v10 = v281;
    v22 = v255;
    v40 = v257;
    LODWORD(v9) = 0;
  }
  v51 = *((_QWORD *)v12 + 301);
  v52 = v40;
  v274 = v40;
  v272 = 16LL * v40;
  *(_DWORD *)(v51 + v272 + 4) = v10;
  kk = *((_DWORD *)v12 + 628);
  if ( v10 > kk )
  {
    if ( kk )
      goto LABEL_87;
    for ( kk = 16; kk < v10; kk *= 2 )
LABEL_87:
      ;
    v54 = operator new(kk, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( !v54 )
      goto LABEL_36;
    operator delete(*((void **)v12 + 313));
    *((_QWORD *)v12 + 313) = v54;
    v52 = v274;
    *((_DWORD *)v12 + 628) = kk;
  }
  LODWORD(v19) = D3DXCore::CArray<unsigned short>::Assure((char *)v12 + 2520, v10, 1);
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  mm = *((_DWORD *)v12 + 608);
  if ( v40 > mm )
  {
    if ( mm )
      goto LABEL_95;
    for ( mm = 16; mm < v40; mm *= 2 )
LABEL_95:
      ;
    v56 = 12LL * mm;
    if ( !is_mul_ok(mm, 0xCu) )
      v56 = -1;
    v57 = operator new(v56, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( !v57 )
      goto LABEL_36;
    operator delete(*((void **)v12 + 303));
    *((_QWORD *)v12 + 303) = v57;
    *((_DWORD *)v12 + 608) = mm;
  }
  v263 = 0;
  v271 = 0;
  if ( v52 > 0 )
  {
    v58 = (char *)v12 + 2536;
    v59 = 0;
    v268 = 0;
    v269 = (__int64)v12 + 2536;
    v270 = 0;
    while ( 1 )
    {
      v60 = *((_QWORD *)v12 + 301);
      v61 = *(_DWORD *)(v60 + v59);
      v62 = *(_DWORD *)(v60 + v59 + 20);
      v260 = *(_DWORD *)(v60 + v59 + 4);
      v256 = v61;
      v261 = v62;
      *(_DWORD *)(v60 + v59 + 8) = v254;
      v63 = v61 == 0;
      while ( 1 )
      {
        LODWORD(v19) = D3DXCore::CArray<unsigned short>::Assure(v58, v22, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v64 = *((_DWORD *)v12 + 656);
        if ( v22 > v64 )
        {
          if ( !v64 )
          {
            v64 = 16;
            goto LABEL_109;
          }
          do
          {
            v64 *= 2;
LABEL_109:
            ;
          }
          while ( v64 < v22 );
          v65 = 2LL * v64;
          if ( !is_mul_ok(v64, 2u) )
            v65 = -1;
          v66 = operator new(v65, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
          if ( !v66 )
            goto LABEL_36;
          if ( v61 )
            memcpy(v66, *((const void **)v12 + 327), 2LL * *((unsigned int *)v12 + 656));
          operator delete(*((void **)v12 + 327));
          *((_QWORD *)v12 + 327) = v66;
          *((_DWORD *)v12 + 656) = v64;
        }
        v67 = ScriptShape(
                *((HDC *)v12 + 5),
                (SCRIPT_CACHE *)v12 + 20,
                &v11[v260],
                v62 - v260,
                *((_DWORD *)v12 + 636) - v254,
                (SCRIPT_ANALYSIS *)(*((_QWORD *)v12 + 299) + 8LL * (int)v256 + 4),
                (WORD *)(*((_QWORD *)v12 + 317) + 2LL * v254),
                (WORD *)(*((_QWORD *)v12 + 315) + 2LL * (int)v260),
                (SCRIPT_VISATTR *)(*((_QWORD *)v12 + 327) + 2LL * v254),
                (int *)&v259);
        if ( v67 != -2147024882 )
          break;
        v61 = v256;
        v58 = (char *)v12 + 2536;
        v22 = 2 * *((_DWORD *)v12 + 636);
      }
      v68 = v254;
      if ( v67 < 0 )
        goto LABEL_130;
      v69 = 0;
      if ( (int)v259 > 0 )
      {
        v70 = (_WORD *)(*((_QWORD *)v12 + 317) + 2LL * v254);
        do
        {
          if ( *v70 == *((_WORD *)v12 + 87) )
            break;
          ++v69;
          ++v70;
        }
        while ( v69 < (int)v259 );
      }
      if ( v69 < (int)v259 )
      {
LABEL_130:
        v255 = 0;
        v264 = 0;
        v267 = 0;
        v256 = 0;
        LODWORD(v19) = D3DXCore::CFont::PreloadPhrase(v12, &v11[v260], v261 - v260, v262, &v255, &v264, &v267);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v71 = v255;
        v72 = v255 + v254;
        v254 = v72;
        if ( (int)v22 < v72 )
          v22 = v72;
        v255 = v22;
        LODWORD(v19) = D3DXCore::CArray<unsigned short>::Assure((char *)v12 + 2536, v22, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v73 = v255;
        v74 = (_QWORD *)((char *)v12 + 2568);
        LODWORD(v19) = D3DXCore::CArray<int>::Assure((char *)v12 + 2568, v255, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v75 = (_QWORD *)((char *)v12 + 2600);
        LODWORD(v19) = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2600, v73, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v76 = (_QWORD *)((char *)v12 + 2552);
        LODWORD(v19) = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2552, v255, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        if ( (_DWORD)v71 )
        {
          v77 = v267;
          v78 = v264;
          v79 = 8 * v68;
          v80 = v71;
          v81 = 4 * v68;
          v82 = 2 * v68;
          v83 = 0;
          do
          {
            *(_WORD *)(v82 + *(_QWORD *)v269) = -1;
            v82 += 2;
            *(_QWORD *)(v79 + *v76) = v78;
            *(_DWORD *)(v81 + *v74) = *v77;
            v78 = (struct D3DXCore::_D3DXFONT_CELL *)((char *)v78 + 24);
            *(_DWORD *)(v79 + *v75) = 0;
            v79 += 8;
            *(_DWORD *)(*v75 + v79 - 4) = 0;
            v83 += *v77++;
            v81 += 4;
            --v80;
          }
          while ( v80 );
          v256 = v83;
          v12 = this;
        }
        v84 = v268;
        v85 = v256;
        v22 = v255;
        LODWORD(v9) = 0;
        *(_DWORD *)(v268 + *((_QWORD *)v12 + 303)) = 0;
        *(_QWORD *)(*((_QWORD *)v12 + 303) + v84 + 4) = v85;
      }
      else
      {
        LODWORD(v19) = D3DXCore::CArray<int>::Assure((char *)v12 + 2568, v22, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        LODWORD(v19) = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2600, v22, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        LODWORD(v19) = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2552, v22, v63);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        if ( ScriptPlace(
               *((HDC *)v12 + 5),
               (SCRIPT_CACHE *)v12 + 20,
               (const WORD *)(*((_QWORD *)v12 + 317) + 2LL * v254),
               v259,
               (const SCRIPT_VISATTR *)(*((_QWORD *)v12 + 327) + 2LL * v254),
               (SCRIPT_ANALYSIS *)(*((_QWORD *)v12 + 299) + 8LL * (int)v256 + 4),
               (int *)(*((_QWORD *)v12 + 321) + 4LL * v254),
               (GOFFSET *)(*((_QWORD *)v12 + 325) + 8LL * v254),
               (ABC *)(*((_QWORD *)v12 + 303) + 12LL * v263)) < 0 )
        {
          LODWORD(v9) = 0;
        }
        else
        {
          LODWORD(v9) = 0;
          LODWORD(v19) = D3DXCore::CFont::Preload(
                           v12,
                           (const unsigned __int16 *)(*((_QWORD *)v12 + 317) + 2LL * v254),
                           v259,
                           (struct D3DXCore::_D3DXFONT_CELL **)(*((_QWORD *)v12 + 319) + 8LL * v254));
          if ( (int)v19 < 0 )
            return (unsigned int)v19;
          v254 += v259;
        }
        v84 = v268;
      }
      ++v263;
      v59 = v270 + 16;
      v86 = ++v271 < v274;
      v270 += 16;
      v268 = v84 + 12;
      if ( !v86 )
        break;
      v11 = v280;
      v58 = (char *)v12 + 2536;
    }
  }
  v87 = v254;
  *(_DWORD *)(*((_QWORD *)v12 + 301) + v272 + 8) = v254;
LABEL_147:
  if ( !a9 )
    return 0;
  nn = *((_DWORD *)v12 + 620);
  if ( v87 > nn )
  {
    if ( nn )
      goto LABEL_286;
    for ( nn = 16; nn < v87; nn *= 2 )
LABEL_286:
      ;
    v171 = 4LL * nn;
    if ( !is_mul_ok(nn, 4u) )
      v171 = -1;
    v172 = operator new(v171, (const struct D3DX9MEMORY::CD3DXNEW *)&D3DX9MEMORY::D3dxNew);
    if ( v172 )
    {
      operator delete(*((void **)v12 + 309));
      *((_QWORD *)v12 + 309) = v172;
      *((_DWORD *)v12 + 620) = nn;
      goto LABEL_292;
    }
LABEL_36:
    LODWORD(v19) = -2147024882;
    return (unsigned int)v19;
  }
LABEL_292:
  LODWORD(v19) = D3DXCore::CArray<int>::Assure((char *)v12 + 2584, v87, 1);
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  v173 = a6;
  v174 = a5;
  v19 = 0;
  v175 = 0x7FFFFFFF;
  v176 = 0;
  v255 = 0;
  LODWORD(v280) = 0;
  v177 = (a6 >> 5) & 1;
  *((_DWORD *)v12 + 658) = 0;
  v263 = 0x7FFFFFFF;
  v261 = 0x7FFFFFFF;
  v178 = 0;
  if ( (v173 & 0x10) == 0 )
    goto LABEL_298;
  if ( v174 )
  {
    right = v174->right;
    if ( v174->left < right && !v177 )
    {
      v178 = 1;
      v175 = right - v174->left;
      v263 = v175;
    }
LABEL_298:
    if ( v174 && (v173 & 0x52C) == 0 )
      v261 = v174->bottom - v174->top;
  }
  v180 = v177;
  v181 = (int *)v178;
  v182 = 0;
  v260 = 0;
  v183 = 0;
  v256 = 0;
  v184 = 0;
  v185 = 0;
  v258 = 0;
  v272 = 0;
  v269 = v177;
  v267 = (int *)v178;
  if ( v257 <= 0LL )
  {
    v225 = v262;
    goto LABEL_363;
  }
  v271 = 0;
  v186 = 0;
  v264 = 0;
  while ( 1 )
  {
    v187 = *((_QWORD *)v12 + 301);
    v188 = (*(_BYTE *)(v19 + v187 + 12) & 1) == 0;
    v189 = *(_DWORD *)(v19 + v187 + 24);
    v190 = *(int *)(v19 + v187 + 8);
    v259 = v189;
    if ( !v188 && !v180 )
    {
      v186 = v264;
      *(_DWORD *)(*((_QWORD *)v12 + 321) + 4 * v190) = 0;
      *(_WORD *)(*((_QWORD *)v12 + 317) + 2 * v190) = *((_WORD *)v12 + 86);
    }
    v191 = *(_DWORD *)(v19 + *((_QWORD *)v12 + 301) + 12);
    if ( (v191 & 2) == 0 || v269 )
    {
      if ( (v191 & 4) != 0 && (a6 & 0x40) != 0 )
      {
        if ( v181 && v184 >= v175 )
        {
          LODWORD(v19) = D3DXCore::CFont::AddLine(v12, v182, v190, v183, v185, v262, (int *)&v255, (int *)&v280);
          if ( (int)v19 < 0 )
            return (unsigned int)v19;
          LODWORD(v9) = (_DWORD)v280;
          v181 = v267;
          v260 = v190;
          v256 = v185;
          v184 = 0;
        }
        v192 = 8 * *((_DWORD *)v12 + 29) - v184 % (8 * *((_DWORD *)v12 + 29));
        if ( v181 && v192 + v184 > v175 )
          v192 = v175 - v184;
        *(_DWORD *)(*((_QWORD *)v12 + 321) + 4 * v190) = v192;
        *(_WORD *)(*((_QWORD *)v12 + 317) + 2 * v190) = *((_WORD *)v12 + 86);
        LODWORD(v19) = D3DXCore::CFont::Preload(
                         v12,
                         (const unsigned __int16 *)(*((_QWORD *)v12 + 317) + 2 * v190),
                         1,
                         (struct D3DXCore::_D3DXFONT_CELL **)(*((_QWORD *)v12 + 319) + 8 * v190));
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        v182 = v260;
        v183 = v256;
        v184 += v192;
LABEL_321:
        v185 = v258;
        goto LABEL_322;
      }
      if ( v181
        && v184 > 0
        && *(_DWORD *)((char *)v186 + *((_QWORD *)v12 + 303))
         + v184
         + *(_DWORD *)((char *)v186 + *((_QWORD *)v12 + 303) + 4)
         + *(_DWORD *)((char *)v186 + *((_QWORD *)v12 + 303) + 8) > v175 )
      {
        LODWORD(v19) = D3DXCore::CFont::AddLine(v12, v182, v190, v183, v185, v262, (int *)&v255, (int *)&v280);
        if ( (int)v19 < 0 )
          return (unsigned int)v19;
        LODWORD(v9) = (_DWORD)v280;
        v189 = v259;
        v19 = v271;
        v182 = v190;
        v260 = v190;
        v183 = v185;
        v256 = v185;
        v184 = 0;
      }
      v194 = v190;
      v195 = v190;
      v196 = v190;
      v270 = v190;
      if ( (int)v190 >= v189 )
        goto LABEL_321;
      v197 = v189 - v190;
      v274 = v197;
      do
      {
        v198 = (_QWORD *)((char *)v12 + 2568);
        v199 = *((_QWORD *)v12 + 321);
        v200 = *(_DWORD *)(v19 + *((_QWORD *)v12 + 301) + 12) & 8;
        if ( v200 )
        {
          v201 = *(_DWORD *)(v199 + 4 * (v197 + v194) - 4);
          v194 = v270;
        }
        else
        {
          v201 = *(_DWORD *)(v199 + 4 * v196);
        }
        LODWORD(v268) = v201;
        if ( v267 && v184 + v201 > v263 )
        {
          if ( v200 )
          {
            v202 = v196 - v194;
            v203 = v254 + v195 - v190;
            result = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2552, v203, 1);
            if ( (int)result < 0 )
              return result;
            result = D3DXCore::CArray<int>::Assure((char *)v12 + 2568, v203, 1);
            if ( (int)result < 0 )
              return result;
            result = D3DXCore::CArray<D3DXCore::_D3DXFONT_CELL *>::Assure((char *)v12 + 2600, v203, 1);
            if ( (int)result < 0 )
              return result;
            if ( v202 <= 0 )
            {
              v204 = v259;
            }
            else
            {
              v204 = v259;
              v205 = v202;
              v206 = 8LL * v254;
              v207 = 4LL * v254;
              v208 = 8 * ((int)v259 - v202);
              v209 = 4 * ((int)v259 - v202);
              do
              {
                *(_QWORD *)(*((_QWORD *)v12 + 319) + v206) = *(_QWORD *)(*((_QWORD *)v12 + 319) + v208);
                v210 = *(_DWORD *)(*v198 + v209);
                v209 += 4;
                *(_DWORD *)(*v198 + v207) = v210;
                v211 = *((_QWORD *)v12 + 325);
                v207 += 4;
                v212 = *(_QWORD *)(v211 + v208);
                v208 += 8;
                *(_QWORD *)(v211 + v206) = v212;
                v206 += 8;
                --v205;
              }
              while ( v205 );
              v174 = a5;
            }
            v213 = v204;
            if ( v204 > v196 )
            {
              v214 = v204 - v202;
              v215 = 8 * v214;
              v216 = 4 * v214;
              do
              {
                --v213;
                v215 -= 8;
                v216 -= 4;
                *(_QWORD *)(*((_QWORD *)v12 + 319) + 8 * v213) = *(_QWORD *)(*((_QWORD *)v12 + 319) + v215);
                *(_DWORD *)(*v198 + 4 * v213) = *(_DWORD *)(*v198 + v216);
                *(_QWORD *)(*((_QWORD *)v12 + 325) + 8 * v213) = *(_QWORD *)(*((_QWORD *)v12 + 325) + v215);
              }
              while ( v213 > v196 );
            }
            if ( v202 > 0 )
            {
              v217 = 8 * v270;
              v218 = 8LL * v254;
              v219 = 4 * v270;
              v220 = 4LL * v254;
              do
              {
                *(_QWORD *)(v217 + *((_QWORD *)v12 + 319)) = *(_QWORD *)(v218 + *((_QWORD *)v12 + 319));
                v221 = *(_DWORD *)(v220 + *v198);
                v220 += 4;
                *(_DWORD *)(v219 + *v198) = v221;
                v222 = *((_QWORD *)v12 + 325);
                v219 += 4;
                v223 = *(_QWORD *)(v218 + v222);
                v218 += 8;
                *(_QWORD *)(v217 + v222) = v223;
                v217 += 8;
                --v202;
              }
              while ( v202 );
            }
            LODWORD(v190) = v195;
            v270 = v196;
          }
          v224 = v258;
          LODWORD(v19) = D3DXCore::CFont::AddLine(v12, v260, v195, v256, v258 + 1, v262, (int *)&v255, (int *)&v280);
          if ( (int)v19 < 0 )
            return (unsigned int)v19;
          v197 = v274;
          v189 = v259;
          v19 = v271;
          v183 = v224;
          v256 = v224;
          v182 = v195;
          v184 = 0;
          v260 = v195;
        }
        v184 += v268;
        v194 = v270;
        --v197;
        ++v195;
        ++v196;
        v274 = v197;
      }
      while ( v195 < v189 );
      LODWORD(v9) = (_DWORD)v280;
      v185 = v258;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v12 + 321) + 4 * v190) = 0;
      *(_WORD *)(*((_QWORD *)v12 + 317) + 2 * v190) = *((_WORD *)v12 + 86);
      LODWORD(v19) = D3DXCore::CFont::AddLine(v12, v182, v189, v183, v185 + 1, v262, (int *)&v255, (int *)&v280);
      if ( (int)v19 < 0 )
        return (unsigned int)v19;
      v182 = v259;
      LODWORD(v9) = (_DWORD)v280;
      v183 = v185 + 1;
      v256 = v185 + 1;
      v184 = 0;
      v260 = v259;
    }
LABEL_322:
    if ( (int)v9 > v261 )
      break;
    v193 = v257;
    ++v185;
    v186 = (struct D3DXCore::_D3DXFONT_CELL *)((char *)v264 + 12);
    v19 = v271 + 16;
    v86 = v272 + 1 < v257;
    v258 = v185;
    ++v272;
    v264 = (struct D3DXCore::_D3DXFONT_CELL *)((char *)v264 + 12);
    v271 += 16;
    if ( !v86 )
      goto LABEL_358;
    v175 = v263;
    v181 = v267;
    v180 = v269;
  }
  v193 = v257;
LABEL_358:
  LODWORD(v19) = 0;
  v86 = v184 <= 0;
  v225 = v262;
  if ( !v86 )
  {
    LODWORD(v19) = D3DXCore::CFont::AddLine(v12, v182, v254, v183, v193, v262, (int *)&v255, (int *)&v280);
    if ( (int)v19 >= 0 )
    {
      LODWORD(v9) = (_DWORD)v280;
      v176 = v255;
      v173 = a6;
      LODWORD(v19) = 0;
      goto LABEL_363;
    }
    return (unsigned int)v19;
  }
  v176 = v255;
  v173 = a6;
LABEL_363:
  if ( v174 )
  {
    if ( v225 )
    {
      v173 ^= 2u;
      a6 = v173;
    }
    if ( (v173 & 1) != 0 )
    {
      left = (int)(v174->left + v174->right - v176) / 2;
    }
    else if ( (v173 & 2) != 0 )
    {
      left = v174->right - v176;
    }
    else
    {
      left = v174->left;
    }
    if ( (v173 & 4) != 0 )
    {
      top = (v174->top + v174->bottom - (int)v9) / 2;
    }
    else if ( (v173 & 8) != 0 )
    {
      top = v174->bottom - v9;
    }
    else
    {
      top = v174->top;
    }
    *a9 = v9 + top - v174->top;
  }
  else
  {
    top = 0;
    left = 0;
    *a9 = v9;
  }
  if ( (v173 & 0x400) != 0 )
  {
    if ( v174 )
    {
      v174->left = left;
      v174->top = top;
      v174->right = left + v176;
      v174->bottom = top + v9;
    }
    return (unsigned int)v19;
  }
  if ( !a2 )
  {
    if ( !*((_QWORD *)v12 + 4) )
    {
      LODWORD(v19) = D3DXCreateSprite(*((struct IDirect3DDevice9 **)v12 + 2), (_QWORD *)v12 + 4);
      if ( (int)v19 < 0 )
        return (unsigned int)v19;
    }
    a2 = (struct ID3DXSprite *)*((_QWORD *)v12 + 4);
    LODWORD(v19) = (*(__int64 (__fastcall **)(struct ID3DXSprite *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 16);
    if ( (int)v19 < 0 )
      return (unsigned int)v19;
    LOWORD(v173) = a6;
    v276 = 1;
    LODWORD(v19) = 0;
  }
  v228 = 0;
  if ( (v173 & 0x100) != 0 )
    v174 = 0;
  v275 = 0;
  v273 = 0;
  if ( v174 )
  {
    v229 = *((_DWORD *)v12 + 24);
    if ( v229 )
    {
      v230 = v174->top;
      if ( v230 > top )
      {
        v228 = (v230 - top) / v229;
        top += v229 * v228;
      }
    }
  }
  if ( v228 < *((_DWORD *)v12 + 658) )
  {
    v231 = 12LL * (int)v228;
    do
    {
      if ( v174 && top >= v174->bottom )
        break;
      if ( (v173 & 1) != 0 )
      {
        v232 = left + (int)(v176 - *(_DWORD *)(*((_QWORD *)v12 + 330) + v231 + 8)) / 2;
      }
      else
      {
        v232 = left;
        if ( (v173 & 2) != 0 )
          v232 = v255 + left - *(_DWORD *)(*((_QWORD *)v12 + 330) + v231 + 8);
      }
      v233 = *((_QWORD *)v12 + 330);
      LODWORD(v280) = *(_DWORD *)(v233 + v231);
      v234 = (unsigned int)v280;
      if ( (unsigned int)v280 < *(_DWORD *)(v233 + v231 + 4) )
      {
        v235 = 8LL * (int)v280;
        v236 = (int *)(4LL * (int)v280);
        v267 = v236;
        v269 = v235;
        do
        {
          v237 = *(_QWORD *)(v235 + *((_QWORD *)v12 + 319));
          if ( *(_QWORD *)v237 != -1 )
          {
            v238 = *(unsigned __int16 *)(v237 + 14);
            v239 = *((_QWORD *)v12 + 325);
            v240 = *(int *)((char *)v236 + *((_QWORD *)v12 + 323)) + *(__int16 *)(v237 + 16);
            v241 = *(_DWORD *)(v239 + v235 + 4) + *(__int16 *)(v237 + 18);
            v242 = *(_DWORD *)(v239 + v235) + v232 + v240;
            v243 = *(unsigned __int16 *)(v237 + 10);
            LODWORD(v264) = *(unsigned __int16 *)(v237 + 8);
            v244 = *(unsigned __int16 *)(v237 + 12);
            v245 = top + v241;
            HIDWORD(v264) = v243;
            v266 = v238;
            v265 = v244;
            v261 = v244 - (_DWORD)v264;
            LODWORD(v268) = v238 - v243;
            v234 = (unsigned int)v280;
            v246 = (float)(v244 - (int)v264) * 0.5;
            *(float *)&v272 = v246;
            *(float *)&v274 = (float)v242 + v246;
            v247 = (float)(v238 - v243) * 0.5;
            *((float *)&v272 + 1) = v247;
            *((float *)&v274 + 1) = (float)v245 + v247;
            if ( v174 )
            {
              v248 = v174->left;
              if ( v242 < v174->left )
              {
                LODWORD(v264) = v248 - v242 + (_DWORD)v264;
                *(float *)&v272 = v246 + (float)(0.0 - (float)(v248 - v242));
              }
              v249 = v174->right;
              if ( v242 + v261 > v249 )
                v265 += v249 - v242 - v261;
              if ( v245 < v174->top )
              {
                v250 = v174->top - v245;
                HIDWORD(v264) += v250;
                *((float *)&v272 + 1) = v247 + (float)(0.0 - (float)v250);
              }
              bottom = v174->bottom;
              v244 = v265;
              if ( v245 + (int)v268 > bottom )
              {
                v238 += bottom - v245 - v268;
                v266 = v238;
              }
              v243 = HIDWORD(v264);
            }
            if ( (int)v264 < v244 && v243 < v238 )
            {
              LODWORD(v19) = (*(__int64 (__fastcall **)(struct ID3DXSprite *, _QWORD, struct D3DXCore::_D3DXFONT_CELL **, __int64 *, __int64 *, unsigned int))(*(_QWORD *)a2 + 72LL))(
                               a2,
                               *(_QWORD *)v237,
                               &v264,
                               &v272,
                               &v274,
                               a7);
              if ( (int)v19 < 0 )
                goto LABEL_420;
              v234 = (unsigned int)v280;
              v235 = v269;
            }
          }
          ++v267;
          v252 = *((_QWORD *)v12 + 330);
          v236 = v267;
          ++v234;
          v235 += 8;
          LODWORD(v280) = v234;
          v269 = v235;
        }
        while ( v234 < *(_DWORD *)(v252 + v231 + 4) );
        LOBYTE(v173) = a6;
        LODWORD(v19) = 0;
      }
      top += *((_DWORD *)v12 + 24);
      v176 = v255;
      ++v228;
      v231 += 12;
    }
    while ( v228 < *((_DWORD *)v12 + 658) );
  }
LABEL_420:
  if ( v276 )
    (*(void (__fastcall **)(struct ID3DXSprite *))(*(_QWORD *)a2 + 88LL))(a2);
  return (unsigned int)v19;
}

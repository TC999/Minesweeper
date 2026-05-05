__int64 __fastcall D3DXTex::CCodecYUV::Fetch(D3DXTex::CCodecYUV *this, unsigned int a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rsi
  unsigned __int16 *v13; // r11
  int v14; // eax
  unsigned __int16 v15; // bp
  __int16 v16; // cx
  __m128i v17; // xmm1
  int v18; // eax
  float v19; // xmm1_4
  float v20; // xmm2_4
  unsigned __int16 v21; // dx
  __int16 v22; // r8
  __int16 v23; // ax
  char v24; // cl
  __m128i v25; // xmm3
  int v26; // eax
  unsigned __int16 v27; // dx
  float v28; // xmm0_4
  __int16 v29; // cx
  char v30; // cl
  int v31; // r8d
  int v32; // ecx
  unsigned int v33; // eax
  char v34; // cl
  char v35; // cl
  int v36; // r8d
  int v37; // r8d
  __int16 v38; // r9
  int v39; // r8d
  float v40; // xmm8_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  float v46; // xmm3_4

  if ( !*((_DWORD *)this + 50) )
    return 2147942414LL;
  if ( a2 < *((_DWORD *)this + 43)
    || a2 >= *((_DWORD *)this + 45)
    || a3 < *((_DWORD *)this + 46)
    || a3 >= *((_DWORD *)this + 47) )
  {
    result = D3DXTex::CCodecYUV::Commit(this);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 43) = a2;
    *((_DWORD *)this + 46) = a3;
    *((_DWORD *)this + 45) = a2 + 1;
    *((_DWORD *)this + 47) = a3 + 1;
    if ( a4 )
    {
      v9 = *((_DWORD *)this + 42);
      v10 = a3 * *((_DWORD *)this + 33);
      v11 = *((_DWORD *)this + 34);
      v12 = *((_QWORD *)this + 20);
      v13 = (unsigned __int16 *)(*((_QWORD *)this + 5) + 2 * v9 + v10 + a2 * *((_DWORD *)this + 32));
      if ( (v11 & 1) != 0 )
        ++v11;
      v14 = *((_DWORD *)this + 2);
      switch ( v14 )
      {
        case 844715353:
LABEL_15:
          if ( v9 < *((_DWORD *)this + 44) )
          {
            while ( 1 )
            {
              v15 = *v13;
              if ( (v9 & 1) != 0 )
              {
                if ( (v9 & 1) != 1 || v11 != 2 )
                {
                  if ( v9 == 1 && v11 == 4 )
                  {
                    v30 = *((_WORD *)this + 104);
                    v31 = (unsigned __int8)(*(v13 - 1) >> v30);
                    v32 = (unsigned __int8)(v13[1] >> v30);
                    v19 = (float)((unsigned int)(9 * (v32 + v31) - v32 - v31 + 8) >> 4);
                    v33 = 9 * (unsigned __int8)(v15 >> *((_WORD *)this + 104))
                        + 8 * (unsigned __int8)(v13[2] >> *((_WORD *)this + 104))
                        - (unsigned __int8)(v15 >> *((_WORD *)this + 104))
                        + 8;
                  }
                  else
                  {
                    if ( v9 != v11 - 1 )
                    {
                      if ( v9 == 1 )
                      {
                        v35 = *((_WORD *)this + 104);
                        v36 = (unsigned __int8)(*(v13 - 1) >> v35);
                        v19 = (float)((9 * (v36 + (unsigned __int8)(v13[1] >> v35))
                                     - (unsigned int)(unsigned __int8)(v13[3] >> v35)
                                     - v36
                                     + 8) >> 4);
                        v37 = 9 * ((unsigned __int8)(v15 >> v35) + (unsigned __int8)(v13[2] >> v35))
                            - (unsigned __int8)(v13[4] >> v35)
                            - (unsigned __int8)(v15 >> v35);
                      }
                      else
                      {
                        v38 = *((_WORD *)this + 104);
                        if ( v9 == v11 - 3 )
                        {
                          v39 = (unsigned __int8)(v13[1] >> v38);
                          v19 = (float)((9 * (v39 + (unsigned __int8)(*(v13 - 1) >> v38))
                                       - (unsigned int)(unsigned __int8)(*(v13 - 3) >> v38)
                                       - v39
                                       + 8) >> 4);
                          v33 = 8 * (unsigned __int8)(v13[2] >> v38)
                              + 8
                              - (unsigned __int8)(*(v13 - 2) >> v38)
                              + 9 * (unsigned __int8)(v15 >> v38);
                          goto LABEL_36;
                        }
                        v19 = (float)((9 * ((unsigned __int8)(v13[1] >> v38) + (unsigned __int8)(*(v13 - 1) >> v38))
                                     - (unsigned __int8)(*(v13 - 3) >> v38)
                                     - (unsigned int)(unsigned __int8)(v13[3] >> v38)
                                     + 8) >> 4);
                        v37 = 9 * ((unsigned __int8)(v15 >> v38) + (unsigned __int8)(v13[2] >> v38))
                            - (unsigned __int8)(v13[4] >> v38)
                            - (unsigned __int8)(*(v13 - 2) >> v38);
                      }
                      v33 = v37 + 8;
                      goto LABEL_36;
                    }
                    v34 = *((_WORD *)this + 104);
                    v19 = (float)((17 * (unsigned __int8)(*(v13 - 1) >> v34)
                                 - (unsigned int)(unsigned __int8)(*(v13 - 3) >> v34)
                                 + 8) >> 4);
                    v33 = 17 * (unsigned __int8)(v15 >> v34) - (unsigned __int8)(*(v13 - 2) >> v34) + 8;
                  }
LABEL_36:
                  v20 = (float)(v33 >> 4);
                  goto LABEL_37;
                }
                v29 = *((_WORD *)this + 104);
                v17 = _mm_cvtsi32_si128((unsigned __int8)(*(v13 - 1) >> v29));
                v18 = (unsigned __int8)(v15 >> v29);
              }
              else
              {
                v16 = *((_WORD *)this + 104);
                v17 = _mm_cvtsi32_si128((unsigned __int8)(v15 >> v16));
                v18 = (unsigned __int8)(v13[1] >> v16);
              }
              LODWORD(v19) = _mm_cvtepi32_ps(v17).m128_u32[0];
              v20 = (float)v18;
LABEL_37:
              v40 = (float)((float)(unsigned __int8)(*v13 >> *((_WORD *)this + 102)) - 16.0) * 0.0045662099;
              v41 = v19 - 128.0;
              v42 = v20 - 128.0;
              *(_DWORD *)(v12 + 12) = 1065353216;
              v43 = v41 * 0.00153632;
              v44 = (float)(v41 * 0.0079107098) + v40;
              *(float *)(v12 + 8) = v44;
              v45 = (float)(v42 * 0.0062589301) + v40;
              v46 = (float)(v40 - v43) - (float)(v42 * 0.00318811);
              *(float *)v12 = v45;
              *(float *)(v12 + 4) = v46;
              if ( v45 >= 0.0 )
              {
                if ( v45 > 1.0 )
                  v45 = 1.0;
              }
              else
              {
                v45 = 0.0;
              }
              *(float *)v12 = v45;
              if ( v46 >= 0.0 )
              {
                if ( v46 > 1.0 )
                  v46 = 1.0;
              }
              else
              {
                v46 = 0.0;
              }
              *(float *)(v12 + 4) = v46;
              if ( v44 >= 0.0 )
              {
                if ( v44 > 1.0 )
                  v44 = 1.0;
              }
              else
              {
                v44 = 0.0;
              }
              *(float *)(v12 + 8) = v44;
              ++v9;
              v12 += 16;
              ++v13;
              if ( v9 >= *((_DWORD *)this + 44) )
                return 0;
            }
          }
          return 0;
        case 1111970375:
        case 1195525970:
          for ( ; v9 < *((_DWORD *)this + 44); *(float *)(v12 - 8) = v28 )
          {
            v21 = *v13;
            v22 = *((_WORD *)this + 104);
            v9 += 2;
            v23 = *v13 >> *((_WORD *)this + 102);
            v13 += 2;
            v24 = *((_WORD *)this + 102);
            v25 = _mm_cvtsi32_si128((unsigned __int8)v23);
            v26 = (unsigned __int8)(v21 >> v22);
            v27 = *(v13 - 1);
            *(_DWORD *)(v12 + 12) = 1065353216;
            *(_DWORD *)(v12 + 28) = 1065353216;
            *(float *)(v12 + 4) = _mm_cvtepi32_ps(v25).m128_f32[0] * 0.0039215689;
            *(float *)v12 = (float)v26 * 0.0039215689;
            *(float *)(v12 + 16) = (float)v26 * 0.0039215689;
            v12 += 32;
            *(float *)(v12 - 12) = (float)(unsigned __int8)(v27 >> v24) * 0.0039215689;
            v28 = (float)(unsigned __int8)(v27 >> v22) * 0.0039215689;
            *(float *)(v12 - 24) = v28;
          }
          break;
        case 1498831189:
          goto LABEL_15;
      }
    }
  }
  return 0;
}

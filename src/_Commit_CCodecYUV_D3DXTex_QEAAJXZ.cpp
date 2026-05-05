__int64 __fastcall D3DXTex::CCodecYUV::Commit(D3DXTex::CCodecYUV *this)
{
  unsigned int v1; // edi
  float *v2; // rsi
  int v3; // eax
  _WORD *v4; // rbx
  int v5; // eax
  __int16 v6; // dx
  float v7; // xmm0_4
  int v8; // r10d
  int v9; // r8d
  int v10; // r9d
  bool v11; // sf
  __int16 v12; // ax
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // dx
  __int16 v17; // dx
  int v19; // edx
  float v20; // xmm0_4

  if ( *((_DWORD *)this + 49) && *((_DWORD *)this + 50) )
  {
    v1 = *((_DWORD *)this + 42);
    v2 = (float *)*((_QWORD *)this + 20);
    v3 = *((_DWORD *)this + 2);
    v4 = (_WORD *)(*((_QWORD *)this + 5)
                 + 2 * v1
                 + (unsigned int)(*((_DWORD *)this + 32) * *((_DWORD *)this + 43))
                 + (unsigned __int64)(unsigned int)(*((_DWORD *)this + 33) * *((_DWORD *)this + 46)));
    switch ( v3 )
    {
      case 844715353:
        goto LABEL_7;
      case 1111970375:
      case 1195525970:
        for ( ;
              v1 < *((_DWORD *)this + 44);
              *(v4 - 1) = ((unsigned __int16)(int)(float)((float)(*(v2 - 6) * 255.0) + 0.5) << *((_DWORD *)this + 52))
                        | ((unsigned __int16)(int)(float)((float)(*(v2 - 3) * 255.0) + 0.5) << *((_DWORD *)this + 51)) )
        {
          v1 += 2;
          v19 = (int)(float)((float)(v2[1] * 255.0) + 0.5);
          v20 = *v2;
          v2 += 8;
          *v4 = ((unsigned __int16)(int)(float)((float)(v20 * 255.0) + 0.5) << *((_DWORD *)this + 52))
              | ((_WORD)v19 << *((_DWORD *)this + 51));
          v4 += 2;
        }
        break;
      case 1498831189:
LABEL_7:
        while ( v1 < *((_DWORD *)this + 44) )
        {
          v5 = (int)(float)((float)((float)((float)(*v2 * 65.481003) + (float)(v2[1] * 128.55299))
                                  + (float)(v2[2] * 24.966))
                          + 0.5)
             + 16;
          v6 = (int)(float)((float)((float)((float)(*v2 * 65.481003) + (float)(v2[1] * 128.55299))
                                  + (float)(v2[2] * 24.966))
                          + 0.5)
             + 16;
          v7 = v2[1];
          v8 = (int)(float)((float)((float)((float)(v2[4] * 65.481003) + (float)(v2[5] * 128.55299))
                                  + (float)(v2[6] * 24.966))
                          + 0.5)
             + 16;
          v9 = (int)(float)((float)((float)(v2[2] * 112.0) - (float)((float)(*v2 * 37.797001) + (float)(v7 * 74.203003)))
                          + 0.5)
             + 128;
          v10 = (int)(float)((float)((float)((float)(*v2 * 112.0) - (float)(v7 * 93.786003)) - (float)(v2[2] * 18.214001))
                           + 0.5)
              + 128;
          if ( v5 > 255 )
            v6 = 255;
          v11 = v5 < 0;
          v12 = (int)(float)((float)((float)(v2[2] * 112.0) - (float)((float)(*v2 * 37.797001) + (float)(v7 * 74.203003)))
                           + 0.5)
              + 128;
          if ( v11 )
            v6 = 0;
          v13 = v6 << *((_DWORD *)this + 51);
          if ( v9 > 255 )
            v12 = 255;
          if ( v9 < 0 )
            v12 = 0;
          v14 = (v12 << *((_DWORD *)this + 52)) | v13;
          v15 = (int)(float)((float)((float)((float)(*v2 * 112.0) - (float)(v7 * 93.786003)) - (float)(v2[2] * 18.214001))
                           + 0.5)
              + 128;
          *v4 = v14;
          v16 = v8;
          if ( v8 > 255 )
            v16 = 255;
          if ( v8 < 0 )
            v16 = 0;
          v17 = v16 << *((_DWORD *)this + 51);
          if ( v10 > 255 )
            v15 = 255;
          if ( v10 < 0 )
            v15 = 0;
          v1 += 2;
          v4 += 2;
          v2 += 8;
          *(v4 - 1) = (v15 << *((_DWORD *)this + 52)) | v17;
        }
        break;
    }
    *((_DWORD *)this + 49) = 0;
  }
  return 0;
}
